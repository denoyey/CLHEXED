
#include "nuitka/prelude.h"
#include <structseq.h>

#include "build_definitions.h"

// Global constants storage
PyObject *global_constants[104];

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *Nuitka_sentinel_value = NULL;

PyObject *Nuitka_dunder_compiled_value = NULL;


#if _NUITKA_STANDALONE_MODE
extern PyObject *getStandaloneSysExecutablePath(PyObject *basename);

NUITKA_MAY_BE_UNUSED static PyObject *STRIP_DIRNAME(PyObject *path) {
#if PYTHON_VERSION < 0x300
    char const *path_cstr = PyString_AS_STRING(path);

#ifdef _WIN32
    char const *last_sep = strrchr(path_cstr, '\\');
#else
    char const *last_sep = strrchr(path_cstr, '/');
#endif
    if (unlikely(last_sep == NULL)) {
        Py_INCREF(path);
        return path;
    }

    return PyString_FromStringAndSize(path_cstr, last_sep - path_cstr);
#else
#ifdef _WIN32
    Py_ssize_t dot_index = PyUnicode_Find(path, const_str_backslash, 0, PyUnicode_GetLength(path), -1);
#else
    Py_ssize_t dot_index = PyUnicode_Find(path, const_str_slash, 0, PyUnicode_GetLength(path), -1);
#endif
    if (likely(dot_index != -1)) {
        return PyUnicode_Substring(path, 0, dot_index);
    } else {
        Py_INCREF(path);
        return path;
    }
#endif
}
#endif

extern void setDistributionsMetadata(PyThreadState *tstate, PyObject *metadata_items);

// We provide the sys.version info shortcut as a global value here for ease of use.
PyObject *Py_SysVersionInfo = NULL;

#if _NUITKA_MODULE_MODE
static void _createGlobalConstants(PyThreadState *tstate, PyObject *real_module_name) {
#else
static void _createGlobalConstants(PyThreadState *tstate) {
#endif
    // We provide the sys.version info shortcut as a global value here for ease of use.
    Py_SysVersionInfo = Nuitka_SysGetObject("version_info");

    // The empty name means global.
    loadConstantsBlob(tstate, &global_constants[0], "");

#if _NUITKA_EXE_MODE
    /* Set the "sys.executable" path to the original CPython executable or point to inside the
       distribution for standalone. */
    Nuitka_SysSetObject(
        "executable",
#if !_NUITKA_STANDALONE_MODE
        global_constants[103]
#else
        getStandaloneSysExecutablePath(global_constants[103])
#endif
    );

#if !_NUITKA_STANDALONE_MODE
    /* Set the "sys.prefix" path to the original one. */
    Nuitka_SysSetObject(
        "prefix",
        None
    );

    /* Set the "sys.prefix" path to the original one. */
    Nuitka_SysSetObject(
        "exec_prefix",
        None
    );


#if PYTHON_VERSION >= 0x300
    /* Set the "sys.base_prefix" path to the original one. */
    Nuitka_SysSetObject(
        "base_prefix",
        None
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    Nuitka_SysSetObject(
        "base_exec_prefix",
        None
    );

#endif
#endif
#endif

    static PyTypeObject Nuitka_VersionInfoType;

    // Same fields as "sys.version_info" except no serial number
    // spell-checker: ignore releaselevel
    static PyStructSequence_Field Nuitka_VersionInfoFields[] = {
        {(char *)"major", (char *)"Major release number"},
        {(char *)"minor", (char *)"Minor release number"},
        {(char *)"micro", (char *)"Micro release number"},
        {(char *)"releaselevel", (char *)"'alpha', 'beta', 'candidate', or 'release'"},
        {(char *)"containing_dir", (char *)"directory of the containing binary"},
        {(char *)"standalone", (char *)"boolean indicating standalone mode usage"},
        {(char *)"onefile", (char *)"boolean indicating onefile mode usage"},
        {(char *)"macos_bundle_mode", (char *)"boolean indicating macOS app bundle mode usage"},
        {(char *)"no_asserts", (char *)"boolean indicating --python-flag=no_asserts usage"},
        {(char *)"no_docstrings", (char *)"boolean indicating --python-flag=no_docstrings usage"},
        {(char *)"no_annotations", (char *)"boolean indicating --python-flag=no_annotations usage"},
        {(char *)"module", (char *)"boolean indicating --module usage"},
        {(char *)"main", (char *)"name of main module at runtime"},
        {(char *)"original_argv0", (char *)"original argv[0] as received by the onefile binary, None otherwise"},
        {0}
    };

    static PyStructSequence_Desc Nuitka_VersionInfoDesc = {
        (char *)"__nuitka_version__",                                       /* name */
        (char *)"__compiled__\\n\\nVersion information as a named tuple.",  /* doc */
        Nuitka_VersionInfoFields,                                           /* fields */
        sizeof(Nuitka_VersionInfoFields) / sizeof(PyStructSequence_Field)-1 /* count */
    };

    PyStructSequence_InitType(&Nuitka_VersionInfoType, &Nuitka_VersionInfoDesc);

    Nuitka_dunder_compiled_value = PyStructSequence_New(&Nuitka_VersionInfoType);
    assert(Nuitka_dunder_compiled_value != NULL);

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 0, Nuitka_PyInt_FromLong(2));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 1, Nuitka_PyInt_FromLong(7));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 2, Nuitka_PyInt_FromLong(12));

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, Nuitka_String_FromString("release"));

    PyObject *containing_directory = getContainingDirectoryObject(false);
#if _NUITKA_STANDALONE_MODE
#if !_NUITKA_ONEFILE_MODE
    containing_directory = STRIP_DIRNAME(containing_directory);
#endif

#if _NUITKA_MACOS_BUNDLE_MODE
    containing_directory = STRIP_DIRNAME(containing_directory);
    containing_directory = STRIP_DIRNAME(containing_directory);
#endif
#endif

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 4, containing_directory);

#if _NUITKA_STANDALONE_MODE
    PyObject *is_standalone_mode = Py_True;
#else
    PyObject *is_standalone_mode = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 5, is_standalone_mode);
#ifdef _NUITKA_ONEFILE_MODE
    PyObject *is_onefile_mode = Py_True;
#else
    PyObject *is_onefile_mode = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 6, is_onefile_mode);

#if _NUITKA_MACOS_BUNDLE_MODE
    PyObject *is_macos_bundle_mode = Py_True;
#else
    PyObject *is_macos_bundle_mode = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 7, is_macos_bundle_mode);

#if _NUITKA_NO_ASSERTS == 1
    PyObject *is_no_asserts = Py_True;
#else
    PyObject *is_no_asserts = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 8, is_no_asserts);

#if _NUITKA_NO_DOCSTRINGS == 1
    PyObject *is_no_docstrings = Py_True;
#else
    PyObject *is_no_docstrings = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 9, is_no_docstrings);

#if _NUITKA_NO_ANNOTATIONS == 1
    PyObject *is_no_annotations = Py_True;
#else
    PyObject *is_no_annotations = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 10, is_no_annotations);

#if _NUITKA_MODULE_MODE
    PyObject *is_module_mode = Py_True;
#else
    PyObject *is_module_mode = Py_False;
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 11, is_module_mode);

#if _NUITKA_MODULE_MODE
    PyObject *main_name = real_module_name;
    Py_INCREF(real_module_name);
#else
    PyObject *main_name = Nuitka_String_FromString("__main__");
#endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 12, main_name);

#if _NUITKA_EXE_MODE
    PyObject *original_argv0 = getOriginalArgv0Object();
#else
    PyObject *original_argv0 = Py_None;
# endif
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 13, original_argv0);

    // Prevent users from creating the Nuitka version type object.
    Nuitka_VersionInfoType.tp_init = NULL;
    Nuitka_VersionInfoType.tp_new = NULL;

    // Register included meta data.
    setDistributionsMetadata(tstate, global_constants[0]);
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants(void) {
// TODO: Ask constant code to check values.

}
#endif

#if _NUITKA_MODULE_MODE
void createGlobalConstants(PyThreadState *tstate, PyObject *real_module_name) {
#else
void createGlobalConstants(PyThreadState *tstate) {
#endif
    if (Nuitka_sentinel_value == NULL) {
#if PYTHON_VERSION < 0x300
        Nuitka_sentinel_value = PyCObject_FromVoidPtr(NULL, NULL);
#else
        // The NULL value is not allowed for a capsule, so use something else.
        Nuitka_sentinel_value = PyCapsule_New((void *)27, "sentinel", NULL);
#endif
        assert(Nuitka_sentinel_value);

        Py_SET_REFCNT_IMMORTAL(Nuitka_sentinel_value);

#if _NUITKA_MODULE_MODE
        _createGlobalConstants(tstate, real_module_name);
#else
        _createGlobalConstants(tstate);
#endif
    }
}
