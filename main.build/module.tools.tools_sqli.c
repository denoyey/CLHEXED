/* Generated code for Python module 'tools$tools_sqli'
 * created by Nuitka version 2.7.12
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_tools$tools_sqli" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tools$tools_sqli;
PyDictObject *moduledict_tools$tools_sqli;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[185];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[185];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("tools.tools_sqli"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 185; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tools$tools_sqli(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 185; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[15]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[15]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[15], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[15]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[15], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[15]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[15]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$COLOR_TEXT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[29]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[29]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[29], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[29]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[29], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[29]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[29]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[29]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$PROMPT_CHOOSE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[36]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[36]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[36], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[36]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[36], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[36]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[36]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[36]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$SEPARATOR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[28]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[28]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[28], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[28]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[28], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[28]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[28]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[28]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[184]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[184]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[184], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[184]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[184], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[184]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[184]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[184]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$check_required_tools(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[24]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[24]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[24], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[24]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[24], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[24]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[24]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[24]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$clear_screen(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[26]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[26]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[26], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[26]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[26], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[26]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[26]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[26]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$colored(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[11]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[11]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[11]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[11]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[11]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[11]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[0]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[0]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[0]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[0]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[0]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[0]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$exit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[153]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[153]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[153], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[153]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[153], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[153]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[153]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[153]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$get_timestamp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[51]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[51]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[51], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[51]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[51], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[51]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[51]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[51]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$handle_hacking(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[150]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[150]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[150], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[150]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[150], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[150]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[150]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[150]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$is_non_empty(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[73]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[73]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[73], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[73]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[73], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[73]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[73]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[73]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$is_valid_domain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[49]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[49]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[49]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[49], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[49]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[49]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[49]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$is_valid_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[40]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[40]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[40], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[40]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[40], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[40]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[40]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[40]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$logo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[27]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[27]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[27], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[27]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[27], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[27]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[27]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[27]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[5]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[5]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[5], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[5]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[5], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[5]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[5]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$run_command(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[43]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[43]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[43], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[43]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[43], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[43]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[43]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[43]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$safe_input(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[38]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[38]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[38], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[38]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[38], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[38]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[38]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[38]);
    }

    return result;
}

static PyObject *module_var_accessor_tools$$36$tools_sqli$shutil(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tools$tools_sqli->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tools$tools_sqli->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[18]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tools$tools_sqli->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[18]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[18]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[18], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[18]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[18]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[18]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_357660e93d365fa3ca5465347db05f3e;
static PyCodeObject *code_objects_98f532eadde354d0dd1824b08bd65ee2;
static PyCodeObject *code_objects_88e1f15b7f9cdc6d9f8f0a20b21ac036;
static PyCodeObject *code_objects_60a9cd258fe51f9ba471d11266d99dd9;
static PyCodeObject *code_objects_cf4a478c27a9098da17dba4f20a84fca;
static PyCodeObject *code_objects_ce38939b2c3a2922ee8d990da9862121;
static PyCodeObject *code_objects_b2ef54d8ba8d2801b1d2d770b54ece11;
static PyCodeObject *code_objects_351a1329fa22c30c78ccfaca3442fbeb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[176]); CHECK_OBJECT(module_filename_obj);
    code_objects_357660e93d365fa3ca5465347db05f3e = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[177], mod_consts[177], NULL, NULL, 0, 0, 0);
    code_objects_98f532eadde354d0dd1824b08bd65ee2 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[24], mod_consts[24], mod_consts[178], NULL, 0, 0, 0);
    code_objects_88e1f15b7f9cdc6d9f8f0a20b21ac036 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[51], NULL, NULL, 0, 0, 0);
    code_objects_60a9cd258fe51f9ba471d11266d99dd9 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[73], mod_consts[73], mod_consts[179], NULL, 1, 0, 0);
    code_objects_cf4a478c27a9098da17dba4f20a84fca = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[49], mod_consts[180], NULL, 1, 0, 0);
    code_objects_ce38939b2c3a2922ee8d990da9862121 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[181], NULL, 1, 0, 0);
    code_objects_b2ef54d8ba8d2801b1d2d770b54ece11 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[38], mod_consts[182], NULL, 3, 0, 0);
    code_objects_351a1329fa22c30c78ccfaca3442fbeb = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[175], mod_consts[175], mod_consts[183], NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__1_get_timestamp(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__2_is_non_empty(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__3_is_valid_url(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__4_is_valid_domain(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__5_safe_input(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__6_check_required_tools(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__7_sqli(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_tools$tools_sqli$$$function__1_get_timestamp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__1_get_timestamp;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp = MAKE_FUNCTION_FRAME(tstate, code_objects_88e1f15b7f9cdc6d9f8f0a20b21ac036, module_tools$tools_sqli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__1_get_timestamp = cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__1_get_timestamp);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__1_get_timestamp) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_tools$$36$tools_sqli$datetime(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_frame_tools$tools_sqli$$$function__1_get_timestamp->m_frame.f_lineno = 18;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[1]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_frame_tools$tools_sqli$$$function__1_get_timestamp->m_frame.f_lineno = 18;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[3], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__1_get_timestamp, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__1_get_timestamp->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__1_get_timestamp, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__1_get_timestamp,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__1_get_timestamp == cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp);
        cache_frame_frame_tools$tools_sqli$$$function__1_get_timestamp = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__1_get_timestamp);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tools$tools_sqli$$$function__2_is_non_empty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__2_is_non_empty;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty = MAKE_FUNCTION_FRAME(tstate, code_objects_60a9cd258fe51f9ba471d11266d99dd9, module_tools$tools_sqli, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__2_is_non_empty = cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__2_is_non_empty);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__2_is_non_empty) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        bool tmp_tmp_return_value_cbool_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_tools$tools_sqli$$$function__2_is_non_empty->m_frame.f_lineno = 21;
        tmp_len_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_tmp_return_value_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_return_value = (tmp_tmp_return_value_cbool_1 != false) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__2_is_non_empty, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__2_is_non_empty->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__2_is_non_empty, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__2_is_non_empty,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__2_is_non_empty == cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty);
        cache_frame_frame_tools$tools_sqli$$$function__2_is_non_empty = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__2_is_non_empty);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tools$tools_sqli$$$function__3_is_valid_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__3_is_valid_url;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url = MAKE_FUNCTION_FRAME(tstate, code_objects_ce38939b2c3a2922ee8d990da9862121, module_tools$tools_sqli, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__3_is_valid_url = cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__3_is_valid_url);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__3_is_valid_url) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_tools$$36$tools_sqli$re(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[7];
        CHECK_OBJECT(par_url);
        tmp_args_element_value_2 = par_url;
        frame_frame_tools$tools_sqli$$$function__3_is_valid_url->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__3_is_valid_url, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__3_is_valid_url->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__3_is_valid_url, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__3_is_valid_url,
        type_description_1,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__3_is_valid_url == cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url);
        cache_frame_frame_tools$tools_sqli$$$function__3_is_valid_url = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__3_is_valid_url);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tools$tools_sqli$$$function__4_is_valid_domain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_domain = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__4_is_valid_domain;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain = MAKE_FUNCTION_FRAME(tstate, code_objects_cf4a478c27a9098da17dba4f20a84fca, module_tools$tools_sqli, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__4_is_valid_domain = cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__4_is_valid_domain);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__4_is_valid_domain) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_tools$$36$tools_sqli$re(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 32;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_domain);
        tmp_args_element_value_2 = par_domain;
        frame_frame_tools$tools_sqli$$$function__4_is_valid_domain->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 32;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__4_is_valid_domain, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__4_is_valid_domain->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__4_is_valid_domain, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__4_is_valid_domain,
        type_description_1,
        par_domain,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__4_is_valid_domain == cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain);
        cache_frame_frame_tools$tools_sqli$$$function__4_is_valid_domain = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__4_is_valid_domain);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tools$tools_sqli$$$function__5_safe_input(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_prompt = python_pars[0];
    PyObject *par_validator = python_pars[1];
    PyObject *par_error_msg = python_pars[2];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__5_safe_input;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__5_safe_input = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__5_safe_input)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__5_safe_input);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__5_safe_input == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__5_safe_input = MAKE_FUNCTION_FRAME(tstate, code_objects_b2ef54d8ba8d2801b1d2d770b54ece11, module_tools$tools_sqli, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__5_safe_input->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__5_safe_input = cache_frame_frame_tools$tools_sqli$$$function__5_safe_input;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__5_safe_input);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__5_safe_input) == 2);

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_input_arg_1;
        CHECK_OBJECT(par_prompt);
        tmp_input_arg_1 = par_prompt;
        tmp_str_arg_value_1 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
        if (tmp_str_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNICODE_STRIP1(tstate, tmp_str_arg_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        if (par_validator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[9]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = par_validator;
        CHECK_OBJECT(var_value);
        tmp_args_element_value_1 = var_value;
        frame_frame_tools$tools_sqli$$$function__5_safe_input->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_value);
    tmp_return_value = var_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_list_element_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_2 != NULL);
        tmp_called_value_3 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[12];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_error_msg);
            tmp_format_value_1 = par_error_msg;
            tmp_format_spec_1 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 39;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = mod_consts[14];
        tmp_list_element_1 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_list_element_1);
        frame_frame_tools$tools_sqli$$$function__5_safe_input->m_frame.f_lineno = 39;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_tools$tools_sqli$$$function__5_safe_input->m_frame.f_lineno = 39;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 35;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__5_safe_input, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__5_safe_input->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__5_safe_input, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__5_safe_input,
        type_description_1,
        par_prompt,
        par_validator,
        par_error_msg,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__5_safe_input == cache_frame_frame_tools$tools_sqli$$$function__5_safe_input) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__5_safe_input);
        cache_frame_frame_tools$tools_sqli$$$function__5_safe_input = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__5_safe_input);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    CHECK_OBJECT(par_error_msg);
    Py_DECREF(par_error_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_prompt);
    Py_DECREF(par_prompt);
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    CHECK_OBJECT(par_error_msg);
    Py_DECREF(par_error_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tools$tools_sqli$$$function__6_check_required_tools(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_required_tools = NULL;
    PyObject *var_missing_tools = NULL;
    PyObject *var_tool = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__6_check_required_tools;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST6(tstate, mod_consts[17]);
        assert(var_required_tools == NULL);
        var_required_tools = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_missing_tools == NULL);
        var_missing_tools = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools = MAKE_FUNCTION_FRAME(tstate, code_objects_98f532eadde354d0dd1824b08bd65ee2, module_tools$tools_sqli, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__6_check_required_tools = cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__6_check_required_tools);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__6_check_required_tools) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_required_tools);
        tmp_iter_arg_1 = var_required_tools;
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooo";
                exception_lineno = 45;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_tool;
            var_tool = tmp_assign_source_5;
            Py_INCREF(var_tool);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_tools$$36$tools_sqli$shutil(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 46;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tool);
        tmp_args_element_value_1 = var_tool;
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 46;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        if (var_missing_tools == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 47;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_list_arg_value_1 = var_missing_tools;
        CHECK_OBJECT(var_tool);
        tmp_item_value_1 = var_tool;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 45;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        if (var_missing_tools == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_missing_tools);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_element_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_1 != NULL);
        tmp_called_value_2 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, mod_consts[21], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 50;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        if (var_missing_tools == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[20]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_missing_tools;
        tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooo";
                exception_lineno = 51;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_8 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_tool;
            var_tool = tmp_assign_source_8;
            Py_INCREF(var_tool);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_list_element_2;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_3 != NULL);
        tmp_called_value_4 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 52;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = mod_consts[22];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_tool);
            tmp_format_value_1 = var_tool;
            tmp_format_spec_1 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 52;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_arg_value_1_1 = mod_consts[14];
        tmp_list_element_2 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 52;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_dict_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_list_element_2);
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 52;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 52;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 51;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_list_element_3;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_5 != NULL);
        tmp_called_value_6 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_3 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_2, 0, tmp_list_element_3);
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 53;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, mod_consts[23], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame.f_lineno = 53;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_int_pos_1;
        tmp_raise_type_1 = MAKE_EXCEPTION_WITH_VALUE(tstate, PyExc_SystemExit, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 54;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__6_check_required_tools, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__6_check_required_tools->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__6_check_required_tools, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__6_check_required_tools,
        type_description_1,
        var_required_tools,
        var_missing_tools,
        var_tool
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__6_check_required_tools == cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools);
        cache_frame_frame_tools$tools_sqli$$$function__6_check_required_tools = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__6_check_required_tools);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_required_tools);
    Py_DECREF(var_required_tools);
    var_required_tools = NULL;
    Py_XDECREF(var_missing_tools);
    var_missing_tools = NULL;
    Py_XDECREF(var_tool);
    var_tool = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_required_tools);
    Py_DECREF(var_required_tools);
    var_required_tools = NULL;
    Py_XDECREF(var_missing_tools);
    var_missing_tools = NULL;
    Py_XDECREF(var_tool);
    var_tool = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tools$tools_sqli$$$function__7_sqli(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_e = NULL;
    PyObject *var_menu = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_color = NULL;
    PyObject *var_choice = NULL;
    PyObject *var_url = NULL;
    PyObject *var_data = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_timestamp = NULL;
    PyObject *var_output_dir = NULL;
    PyObject *var_db = NULL;
    PyObject *var_table = NULL;
    PyObject *var_columns = NULL;
    PyObject *var_dns_domain = NULL;
    PyObject *var_folder = NULL;
    PyObject *var_output_file = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli$$$function__7_sqli;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_frame_tools$tools_sqli$$$function__7_sqli = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_tools$tools_sqli$$$function__7_sqli)) {
        Py_XDECREF(cache_frame_frame_tools$tools_sqli$$$function__7_sqli);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_tools$tools_sqli$$$function__7_sqli == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_tools$tools_sqli$$$function__7_sqli = MAKE_FUNCTION_FRAME(tstate, code_objects_351a1329fa22c30c78ccfaca3442fbeb, module_tools$tools_sqli, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_tools$tools_sqli$$$function__7_sqli->m_type_description == NULL);
    frame_frame_tools$tools_sqli$$$function__7_sqli = cache_frame_frame_tools$tools_sqli$$$function__7_sqli;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli$$$function__7_sqli);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli$$$function__7_sqli) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = module_var_accessor_tools$$36$tools_sqli$check_required_tools(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__7_sqli, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__7_sqli, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_1); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_list_element_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_2 != NULL);
        tmp_called_value_3 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = mod_consts[25];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_e);
            tmp_format_value_1 = var_e;
            tmp_format_spec_1 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 61;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_1_1 = mod_consts[14];
        tmp_list_element_1 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_list_element_1);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 61;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 61;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 58;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame)) {
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        tmp_called_value_4 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 65;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_4;
        tmp_called_value_5 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 66;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_list_element_2;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_6 != NULL);
        tmp_called_value_7 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_0_2 = module_var_accessor_tools$$36$tools_sqli$SEPARATOR(tstate);
        if (unlikely(tmp_kw_call_arg_value_0_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_1_2 = module_var_accessor_tools$$36$tools_sqli$COLOR_TEXT(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[29]);
        }

        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_2 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_0_2 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_2, 0, tmp_list_element_2);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 67;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 67;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_element_3;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_8 != NULL);
        tmp_called_value_9 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_3 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_1, 0, tmp_list_element_3);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 68;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, mod_consts[30], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 68;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_list_element_4;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_10 != NULL);
        tmp_called_value_11 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_0_3 = module_var_accessor_tools$$36$tools_sqli$SEPARATOR(tstate);
        if (unlikely(tmp_kw_call_arg_value_0_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[28]);
        }

        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_1_3 = module_var_accessor_tools$$36$tools_sqli$COLOR_TEXT(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[29]);
        }

        if (tmp_kw_call_arg_value_1_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_4 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_0_3 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_3, 0, tmp_list_element_4);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 69;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 69;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = DICT_COPY(tstate, mod_consts[31]);
        {
            PyObject *old = var_menu;
            var_menu = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_1;
        CHECK_OBJECT(var_menu);
        tmp_dict_arg_1 = var_menu;
        tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 93;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_7;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_8;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_9;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_2 = var_k;
        tmp_cmp_expr_right_2 = mod_consts[32];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_10 = mod_consts[14];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_10 = mod_consts[33];
        condexpr_end_1:;
        {
            PyObject *old = var_color;
            var_color = tmp_assign_source_10;
            Py_INCREF(var_color);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_list_element_5;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_12 != NULL);
        tmp_called_value_13 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[34];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_k);
            tmp_format_value_2 = var_k;
            tmp_format_spec_2 = mod_consts[13];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 95;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_v);
            tmp_format_value_3 = var_v;
            tmp_format_spec_3 = mod_consts[13];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 95;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kw_call_arg_value_0_4 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_color);
        tmp_kw_call_arg_value_1_4 = var_color;
        tmp_list_element_5 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_0_4 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_4, 0, tmp_list_element_5);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 95;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 95;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_8);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 93;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_input_arg_1;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_list_element_6;
        tmp_called_value_14 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_0_5 = module_var_accessor_tools$$36$tools_sqli$PROMPT_CHOOSE(tstate);
        if (unlikely(tmp_kw_call_arg_value_0_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[36]);
        }

        if (tmp_kw_call_arg_value_0_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_1_5 = module_var_accessor_tools$$36$tools_sqli$COLOR_TEXT(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[29]);
        }

        if (tmp_kw_call_arg_value_1_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_6 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_0_5 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_5, 0, tmp_list_element_6);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 97;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_input_arg_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_input_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_str_arg_value_1 = BUILTIN_INPUT(tstate, tmp_input_arg_1);
        Py_DECREF(tmp_input_arg_1);
        if (tmp_str_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_11 = UNICODE_STRIP1(tstate, tmp_str_arg_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_choice;
            var_choice = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_3 = var_choice;
        tmp_cmp_expr_right_3 = mod_consts[37];
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_9;
        tmp_called_value_15 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 100;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_10;
        tmp_called_value_16 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 101;
        tmp_call_result_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_16);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_17 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_6 = mod_consts[39];
        tmp_args_element_value_7 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_8 = mod_consts[41];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_input_arg_2;
        tmp_input_arg_2 = mod_consts[42];
        tmp_assign_source_13 = BUILTIN_INPUT(tstate, tmp_input_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_18 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_3 = mod_consts[44];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_url);
            tmp_format_value_4 = var_url;
            tmp_format_spec_4 = mod_consts[13];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 104;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_data);
            tmp_tuple_element_3 = var_data;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[46];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 104;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_4 = var_choice;
        tmp_cmp_expr_right_4 = mod_consts[47];
        tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_12;
        tmp_called_value_19 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 107;
        tmp_call_result_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_13;
        tmp_called_value_20 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 108;
        tmp_call_result_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_21 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_10 = mod_consts[48];
        tmp_args_element_value_11 = module_var_accessor_tools$$36$tools_sqli$is_valid_domain(tstate);
        if (unlikely(tmp_args_element_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_12 = mod_consts[50];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_domain;
            var_domain = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = module_var_accessor_tools$$36$tools_sqli$get_timestamp(tstate);
        if (unlikely(tmp_called_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 110;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_timestamp;
            var_timestamp = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[52];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_domain);
            tmp_expression_value_1 = var_domain;
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 111;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 111;
            tmp_format_value_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_23, mod_consts[54]);

            Py_DECREF(tmp_called_value_23);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 111;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_5 = mod_consts[13];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 111;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(var_timestamp);
            tmp_format_value_6 = var_timestamp;
            tmp_format_spec_6 = mod_consts[13];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 111;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_16 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_output_dir;
            var_output_dir = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = IMPORT_HARD_OS();
        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[56]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_output_dir);
        tmp_tuple_element_5 = var_output_dir;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_5);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[57]);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 112;
        tmp_call_result_14 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_6;
        tmp_called_value_25 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[58];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_domain);
            tmp_format_value_7 = var_domain;
            tmp_format_spec_7 = mod_consts[13];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[59];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_6);
            CHECK_OBJECT(var_domain);
            tmp_format_value_8 = var_domain;
            tmp_format_spec_8 = mod_consts[13];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 4, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_13 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 113;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_7;
        tmp_called_value_26 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_7 = mod_consts[61];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_domain);
            tmp_format_value_9 = var_domain;
            tmp_format_spec_9 = mod_consts[13];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 114;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[62];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_14 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 114;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_5 = var_choice;
        tmp_cmp_expr_right_5 = mod_consts[63];
        tmp_condition_result_5 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_17;
        tmp_called_value_27 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 117;
        tmp_call_result_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_27);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_18;
        tmp_called_value_28 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 118;
        tmp_call_result_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_29 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_15 = mod_consts[64];
        tmp_args_element_value_16 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_17 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_29, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_8;
        tmp_called_value_30 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_8 = mod_consts[44];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_8);
            CHECK_OBJECT(var_url);
            tmp_format_value_10 = var_url;
            tmp_format_spec_10 = mod_consts[13];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[66];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_7);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_18 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 120;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_19);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_6 = var_choice;
        tmp_cmp_expr_right_6 = mod_consts[67];
        tmp_condition_result_6 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_20;
        tmp_called_value_31 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 123;
        tmp_call_result_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_31);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_21;
        tmp_called_value_32 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 124;
        tmp_call_result_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_33 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_19 = mod_consts[64];
        tmp_args_element_value_20 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_21 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_33, call_args);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_9;
        tmp_called_value_34 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_9 = mod_consts[44];
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_url);
            tmp_format_value_11 = var_url;
            tmp_format_spec_11 = mod_consts[13];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 126;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[68];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_string_concat_values_8);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_args_element_value_22 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 126;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_22);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_7 = var_choice;
        tmp_cmp_expr_right_7 = mod_consts[69];
        tmp_condition_result_7 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_23;
        tmp_called_value_35 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 129;
        tmp_call_result_23 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_35);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_24;
        tmp_called_value_36 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 130;
        tmp_call_result_24 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_36);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_37 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_23 = mod_consts[64];
        tmp_args_element_value_24 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_25 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_37, call_args);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_10;
        tmp_called_value_38 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_10 = mod_consts[44];
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_12;
            PyObject *tmp_format_spec_12;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_10);
            CHECK_OBJECT(var_url);
            tmp_format_value_12 = var_url;
            tmp_format_spec_12 = mod_consts[13];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 132;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[70];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_9);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_args_element_value_26 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 132;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_25);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_8 = var_choice;
        tmp_cmp_expr_right_8 = mod_consts[71];
        tmp_condition_result_8 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_26;
        tmp_called_value_39 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 135;
        tmp_call_result_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_39);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_27;
        tmp_called_value_40 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 136;
        tmp_call_result_27 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_41 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_27 = mod_consts[64];
        tmp_args_element_value_28 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_29 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_42 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_30 = mod_consts[72];
        tmp_args_element_value_31 = module_var_accessor_tools$$36$tools_sqli$is_non_empty(tstate);
        if (unlikely(tmp_args_element_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[73]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_32 = mod_consts[74];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_42, call_args);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_db;
            var_db = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_43 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_33 = mod_consts[75];
        tmp_args_element_value_34 = module_var_accessor_tools$$36$tools_sqli$is_non_empty(tstate);
        if (unlikely(tmp_args_element_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[73]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_35 = mod_consts[76];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_table;
            var_table = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_44 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_36 = mod_consts[77];
        tmp_args_element_value_37 = module_var_accessor_tools$$36$tools_sqli$is_non_empty(tstate);
        if (unlikely(tmp_args_element_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[73]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_38 = mod_consts[78];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_44, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_columns;
            var_columns = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_11;
        tmp_called_value_45 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_11 = mod_consts[44];
        tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(tstate, 9);
        {
            PyObject *tmp_format_value_13;
            PyObject *tmp_format_spec_13;
            PyObject *tmp_format_value_14;
            PyObject *tmp_format_spec_14;
            PyObject *tmp_format_value_15;
            PyObject *tmp_format_spec_15;
            PyObject *tmp_format_value_16;
            PyObject *tmp_format_spec_16;
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_11);
            CHECK_OBJECT(var_url);
            tmp_format_value_13 = var_url;
            tmp_format_spec_13 = mod_consts[13];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[79];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_11);
            CHECK_OBJECT(var_db);
            tmp_format_value_14 = var_db;
            tmp_format_spec_14 = mod_consts[13];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 3, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 4, tmp_tuple_element_11);
            CHECK_OBJECT(var_table);
            tmp_format_value_15 = var_table;
            tmp_format_spec_15 = mod_consts[13];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 5, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[81];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 6, tmp_tuple_element_11);
            CHECK_OBJECT(var_columns);
            tmp_format_value_16 = var_columns;
            tmp_format_spec_16 = mod_consts[13];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_16, tmp_format_spec_16);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 7, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[82];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 8, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_string_concat_values_10);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_args_element_value_39 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 141;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_28);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_9 = var_choice;
        tmp_cmp_expr_right_9 = mod_consts[83];
        tmp_condition_result_9 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_29;
        tmp_called_value_46 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 144;
        tmp_call_result_29 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_46);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_30;
        tmp_called_value_47 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_47 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 145;
        tmp_call_result_30 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_47);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_48 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_40 = mod_consts[64];
        tmp_args_element_value_41 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_42 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_48, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_49 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_49 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_43 = mod_consts[84];
        tmp_args_element_value_44 = module_var_accessor_tools$$36$tools_sqli$is_valid_domain(tstate);
        if (unlikely(tmp_args_element_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_45 = mod_consts[50];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_49, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dns_domain;
            var_dns_domain = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_12;
        tmp_called_value_50 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_50 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_12 = mod_consts[44];
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_17;
            PyObject *tmp_format_spec_17;
            PyObject *tmp_format_value_18;
            PyObject *tmp_format_spec_18;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 0, tmp_tuple_element_12);
            CHECK_OBJECT(var_url);
            tmp_format_value_17 = var_url;
            tmp_format_spec_17 = mod_consts[13];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tstate, tmp_format_value_17, tmp_format_spec_17);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 2, tmp_tuple_element_12);
            CHECK_OBJECT(var_dns_domain);
            tmp_format_value_18 = var_dns_domain;
            tmp_format_spec_18 = mod_consts[13];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tstate, tmp_format_value_18, tmp_format_spec_18);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 148;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 3, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[86];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 4, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_string_concat_values_11);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_args_element_value_46 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 148;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_46);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_31);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_10 = var_choice;
        tmp_cmp_expr_right_10 = mod_consts[87];
        tmp_condition_result_10 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_10 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_32;
        tmp_called_value_51 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_51 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 151;
        tmp_call_result_32 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_51);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_33;
        tmp_called_value_52 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_52 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 152;
        tmp_call_result_33 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_52);
        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_53 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_47 = mod_consts[64];
        tmp_args_element_value_48 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_49 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_53, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_string_concat_values_12;
        PyObject *tmp_tuple_element_13;
        tmp_called_value_54 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_54 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_13 = mod_consts[44];
        tmp_string_concat_values_12 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_19;
            PyObject *tmp_format_spec_19;
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 0, tmp_tuple_element_13);
            CHECK_OBJECT(var_url);
            tmp_format_value_19 = var_url;
            tmp_format_spec_19 = mod_consts[13];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tstate, tmp_format_value_19, tmp_format_spec_19);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 154;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[88];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 2, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_string_concat_values_12);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_args_element_value_50 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_12);
        Py_DECREF(tmp_string_concat_values_12);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 154;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_34);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_11 = var_choice;
        tmp_cmp_expr_right_11 = mod_consts[89];
        tmp_condition_result_11 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_35;
        tmp_called_value_55 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 157;
        tmp_call_result_35 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_55);
        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_36;
        tmp_called_value_56 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_56 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 158;
        tmp_call_result_36 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_56);
        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        tmp_called_value_57 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_51 = mod_consts[64];
        tmp_args_element_value_52 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_52 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_53 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_57, call_args);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_string_concat_values_13;
        PyObject *tmp_tuple_element_14;
        tmp_called_value_58 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_14 = mod_consts[44];
        tmp_string_concat_values_13 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_20;
            PyObject *tmp_format_spec_20;
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 0, tmp_tuple_element_14);
            CHECK_OBJECT(var_url);
            tmp_format_value_20 = var_url;
            tmp_format_spec_20 = mod_consts[13];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tstate, tmp_format_value_20, tmp_format_spec_20);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 160;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 2, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_string_concat_values_13);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_args_element_value_54 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_13);
        Py_DECREF(tmp_string_concat_values_13);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 160;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_37);
    }
    goto branch_end_10;
    branch_no_10:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_12 = var_choice;
        tmp_cmp_expr_right_12 = mod_consts[91];
        tmp_condition_result_12 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_38;
        tmp_called_value_59 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 163;
        tmp_call_result_38 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_59);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_39;
        tmp_called_value_60 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_60 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 164;
        tmp_call_result_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_60);
        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_61 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_55 = mod_consts[64];
        tmp_args_element_value_56 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_56 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_57 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_61, call_args);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        tmp_called_value_62 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_58 = mod_consts[92];
        tmp_args_element_value_59 = module_var_accessor_tools$$36$tools_sqli$is_valid_domain(tstate);
        if (unlikely(tmp_args_element_value_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_60 = mod_consts[50];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_62, call_args);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dns_domain;
            var_dns_domain = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_string_concat_values_14;
        PyObject *tmp_tuple_element_15;
        tmp_called_value_63 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_63 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_15 = mod_consts[44];
        tmp_string_concat_values_14 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_21;
            PyObject *tmp_format_spec_21;
            PyObject *tmp_format_value_22;
            PyObject *tmp_format_spec_22;
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 0, tmp_tuple_element_15);
            CHECK_OBJECT(var_url);
            tmp_format_value_21 = var_url;
            tmp_format_spec_21 = mod_consts[13];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tstate, tmp_format_value_21, tmp_format_spec_21);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 167;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[93];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 2, tmp_tuple_element_15);
            CHECK_OBJECT(var_dns_domain);
            tmp_format_value_22 = var_dns_domain;
            tmp_format_spec_22 = mod_consts[13];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tstate, tmp_format_value_22, tmp_format_spec_22);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 167;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 3, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[94];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 4, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_string_concat_values_14);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_args_element_value_61 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_14);
        Py_DECREF(tmp_string_concat_values_14);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 167;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_40);
    }
    goto branch_end_11;
    branch_no_11:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_13 = var_choice;
        tmp_cmp_expr_right_13 = mod_consts[95];
        tmp_condition_result_13 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_13 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_41;
        tmp_called_value_64 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 170;
        tmp_call_result_41 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_64);
        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_42;
        tmp_called_value_65 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 171;
        tmp_call_result_42 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_65);
        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_66 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_62 = mod_consts[96];
        tmp_args_element_value_63 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_63 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_64 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_66, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_string_concat_values_15;
        PyObject *tmp_tuple_element_16;
        tmp_called_value_67 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_16 = mod_consts[44];
        tmp_string_concat_values_15 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_23;
            PyObject *tmp_format_spec_23;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 0, tmp_tuple_element_16);
            CHECK_OBJECT(var_url);
            tmp_format_value_23 = var_url;
            tmp_format_spec_23 = mod_consts[13];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tstate, tmp_format_value_23, tmp_format_spec_23);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[97];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 2, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_string_concat_values_15);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_args_element_value_65 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_15);
        Py_DECREF(tmp_string_concat_values_15);
        if (tmp_args_element_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 173;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_65);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_43);
    }
    goto branch_end_12;
    branch_no_12:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_14 = var_choice;
        tmp_cmp_expr_right_14 = mod_consts[98];
        tmp_condition_result_14 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_14 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_44;
        tmp_called_value_68 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_68 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 176;
        tmp_call_result_44 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_68);
        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_45;
        tmp_called_value_69 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 177;
        tmp_call_result_45 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_69);
        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_70 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_70 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_66 = mod_consts[99];
        tmp_args_element_value_67 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_68 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_70, call_args);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_string_concat_values_16;
        PyObject *tmp_tuple_element_17;
        tmp_called_value_71 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_17 = mod_consts[44];
        tmp_string_concat_values_16 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_24;
            PyObject *tmp_format_spec_24;
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 0, tmp_tuple_element_17);
            CHECK_OBJECT(var_url);
            tmp_format_value_24 = var_url;
            tmp_format_spec_24 = mod_consts[13];
            tmp_tuple_element_17 = BUILTIN_FORMAT(tstate, tmp_format_value_24, tmp_format_spec_24);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 179;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 2, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_string_concat_values_16);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_args_element_value_69 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_16);
        Py_DECREF(tmp_string_concat_values_16);
        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 179;
        tmp_call_result_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_69);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_46);
    }
    goto branch_end_13;
    branch_no_13:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_15 = var_choice;
        tmp_cmp_expr_right_15 = mod_consts[101];
        tmp_condition_result_15 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_15 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_47;
        tmp_called_value_72 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_72 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 182;
        tmp_call_result_47 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_72);
        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_48;
        tmp_called_value_73 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 183;
        tmp_call_result_48 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_73);
        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 183;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_74;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_74 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_74 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_70 = mod_consts[99];
        tmp_args_element_value_71 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_72 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_74, call_args);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 184;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_string_concat_values_17;
        PyObject *tmp_tuple_element_18;
        tmp_called_value_75 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_75 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_18 = mod_consts[44];
        tmp_string_concat_values_17 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_25;
            PyObject *tmp_format_spec_25;
            PyTuple_SET_ITEM0(tmp_string_concat_values_17, 0, tmp_tuple_element_18);
            CHECK_OBJECT(var_url);
            tmp_format_value_25 = var_url;
            tmp_format_spec_25 = mod_consts[13];
            tmp_tuple_element_18 = BUILTIN_FORMAT(tstate, tmp_format_value_25, tmp_format_spec_25);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 185;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_17, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_string_concat_values_17, 2, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_string_concat_values_17);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_args_element_value_73 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_17);
        Py_DECREF(tmp_string_concat_values_17);
        if (tmp_args_element_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 185;
        tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_73);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_49);
    }
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_16 = var_choice;
        tmp_cmp_expr_right_16 = mod_consts[103];
        tmp_condition_result_16 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        if (tmp_condition_result_16 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_50;
        tmp_called_value_76 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_76 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 188;
        tmp_call_result_50 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_76);
        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_51;
        tmp_called_value_77 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_77 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 189;
        tmp_call_result_51 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_77);
        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_78 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_78 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_74 = mod_consts[104];
        tmp_args_element_value_75 = module_var_accessor_tools$$36$tools_sqli$is_valid_domain(tstate);
        if (unlikely(tmp_args_element_value_75 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_76 = mod_consts[50];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_78, call_args);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_domain;
            var_domain = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_79;
        tmp_called_value_79 = module_var_accessor_tools$$36$tools_sqli$get_timestamp(tstate);
        if (unlikely(tmp_called_value_79 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 191;
        tmp_assign_source_34 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_79);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_timestamp;
            var_timestamp = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_string_concat_values_18;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = mod_consts[105];
        tmp_string_concat_values_18 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_26;
            PyObject *tmp_called_value_80;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_26;
            PyObject *tmp_format_value_27;
            PyObject *tmp_format_spec_27;
            PyTuple_SET_ITEM0(tmp_string_concat_values_18, 0, tmp_tuple_element_19);
            CHECK_OBJECT(var_domain);
            tmp_expression_value_3 = var_domain;
            tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[53]);
            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 192;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 192;
            tmp_format_value_26 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_80, mod_consts[54]);

            Py_DECREF(tmp_called_value_80);
            if (tmp_format_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 192;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            tmp_format_spec_26 = mod_consts[13];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tstate, tmp_format_value_26, tmp_format_spec_26);
            Py_DECREF(tmp_format_value_26);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 192;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_18, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_18, 2, tmp_tuple_element_19);
            CHECK_OBJECT(var_timestamp);
            tmp_format_value_27 = var_timestamp;
            tmp_format_spec_27 = mod_consts[13];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tstate, tmp_format_value_27, tmp_format_spec_27);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 192;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_18, 3, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_string_concat_values_18);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_assign_source_35 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_18);
        Py_DECREF(tmp_string_concat_values_18);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 192;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_folder;
            var_folder = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_4 = IMPORT_HARD_OS();
        assert(!(tmp_expression_value_4 == NULL));
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[56]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_20 = var_folder;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_20);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[57]);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 193;
        tmp_call_result_52 = CALL_FUNCTION(tstate, tmp_called_value_81, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_83;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_list_element_7;
        tmp_called_value_82 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_82 != NULL);
        tmp_called_value_83 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_83 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_7 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_2 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_2, 0, tmp_list_element_7);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 195;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_args_element_value_77 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_83, mod_consts[106], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_args_element_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 195;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_77);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_string_concat_values_19;
        PyObject *tmp_tuple_element_21;
        tmp_called_value_84 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_84 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_21 = mod_consts[107];
        tmp_string_concat_values_19 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_28;
            PyObject *tmp_format_spec_28;
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 0, tmp_tuple_element_21);
            CHECK_OBJECT(var_domain);
            tmp_format_value_28 = var_domain;
            tmp_format_spec_28 = mod_consts[13];
            tmp_tuple_element_21 = BUILTIN_FORMAT(tstate, tmp_format_value_28, tmp_format_spec_28);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 196;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_19, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 2, tmp_tuple_element_21);
            CHECK_OBJECT(var_folder);
            tmp_tuple_element_21 = var_folder;
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 3, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[109];
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 4, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_string_concat_values_19);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_args_element_value_78 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_19);
        Py_DECREF(tmp_string_concat_values_19);
        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 196;
        tmp_call_result_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_78);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_string_concat_values_20;
        PyObject *tmp_tuple_element_22;
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_22 = var_folder;
        tmp_string_concat_values_20 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_string_concat_values_20, 0, tmp_tuple_element_22);
        tmp_tuple_element_22 = mod_consts[109];
        PyTuple_SET_ITEM0(tmp_string_concat_values_20, 1, tmp_tuple_element_22);
        tmp_exists_arg_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_20);
        Py_DECREF(tmp_string_concat_values_20);
        if (tmp_exists_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
        Py_DECREF(tmp_exists_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 198;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_called_value_86;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_list_element_8;
        tmp_called_value_85 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_85 != NULL);
        tmp_called_value_86 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_86 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_8 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_3 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_3, 0, tmp_list_element_8);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 199;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_args_element_value_79 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_86, mod_consts[110], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 199;
        tmp_call_result_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_79);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_55);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_16:;
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_called_value_88;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_list_element_9;
        tmp_called_value_87 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_87 != NULL);
        tmp_called_value_88 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_88 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_9 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_4 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_4, 0, tmp_list_element_9);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 202;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_80 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_88, mod_consts[111], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 202;
        tmp_call_result_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_80);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 202;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_string_concat_values_21;
        PyObject *tmp_tuple_element_23;
        tmp_called_value_89 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_89 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_23 = mod_consts[112];
        tmp_string_concat_values_21 = MAKE_TUPLE_EMPTY(tstate, 5);
        PyTuple_SET_ITEM0(tmp_string_concat_values_21, 0, tmp_tuple_element_23);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_23 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_21, 1, tmp_tuple_element_23);
        tmp_tuple_element_23 = mod_consts[113];
        PyTuple_SET_ITEM0(tmp_string_concat_values_21, 2, tmp_tuple_element_23);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_23 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_21, 3, tmp_tuple_element_23);
        tmp_tuple_element_23 = mod_consts[114];
        PyTuple_SET_ITEM0(tmp_string_concat_values_21, 4, tmp_tuple_element_23);
        tmp_args_element_value_81 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_21);
        Py_DECREF(tmp_string_concat_values_21);
        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 203;
        tmp_call_result_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_81);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_value_91;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_list_element_10;
        tmp_called_value_90 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_90 != NULL);
        tmp_called_value_91 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_91 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_10 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_5 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_5, 0, tmp_list_element_10);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 205;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_args_element_value_82 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_91, mod_consts[115], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 205;
        tmp_call_result_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_string_concat_values_22;
        PyObject *tmp_tuple_element_24;
        tmp_called_value_92 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_92 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_24 = mod_consts[112];
        tmp_string_concat_values_22 = MAKE_TUPLE_EMPTY(tstate, 5);
        PyTuple_SET_ITEM0(tmp_string_concat_values_22, 0, tmp_tuple_element_24);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_24 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_22, 1, tmp_tuple_element_24);
        tmp_tuple_element_24 = mod_consts[116];
        PyTuple_SET_ITEM0(tmp_string_concat_values_22, 2, tmp_tuple_element_24);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_24 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_22, 3, tmp_tuple_element_24);
        tmp_tuple_element_24 = mod_consts[117];
        PyTuple_SET_ITEM0(tmp_string_concat_values_22, 4, tmp_tuple_element_24);
        tmp_args_element_value_83 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_22);
        Py_DECREF(tmp_string_concat_values_22);
        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 206;
        tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_83);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_called_value_94;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_list_element_11;
        tmp_called_value_93 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_93 != NULL);
        tmp_called_value_94 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_94 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_11 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_6 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_6, 0, tmp_list_element_11);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 208;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_args_element_value_84 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_94, mod_consts[118], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 208;
        tmp_call_result_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_84);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_string_concat_values_23;
        PyObject *tmp_tuple_element_25;
        tmp_called_value_95 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_95 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_25 = mod_consts[112];
        tmp_string_concat_values_23 = MAKE_TUPLE_EMPTY(tstate, 5);
        PyTuple_SET_ITEM0(tmp_string_concat_values_23, 0, tmp_tuple_element_25);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_25 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_23, 1, tmp_tuple_element_25);
        tmp_tuple_element_25 = mod_consts[119];
        PyTuple_SET_ITEM0(tmp_string_concat_values_23, 2, tmp_tuple_element_25);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_25 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_23, 3, tmp_tuple_element_25);
        tmp_tuple_element_25 = mod_consts[120];
        PyTuple_SET_ITEM0(tmp_string_concat_values_23, 4, tmp_tuple_element_25);
        tmp_args_element_value_85 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_23);
        Py_DECREF(tmp_string_concat_values_23);
        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 209;
        tmp_call_result_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_85);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_exists_arg_2;
        PyObject *tmp_string_concat_values_24;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_path_arg_1;
        PyObject *tmp_string_concat_values_25;
        PyObject *tmp_tuple_element_27;
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_26 = var_folder;
        tmp_string_concat_values_24 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_string_concat_values_24, 0, tmp_tuple_element_26);
        tmp_tuple_element_26 = mod_consts[120];
        PyTuple_SET_ITEM0(tmp_string_concat_values_24, 1, tmp_tuple_element_26);
        tmp_exists_arg_2 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_24);
        Py_DECREF(tmp_string_concat_values_24);
        if (tmp_exists_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_operand_value_2 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_2);
        Py_DECREF(tmp_exists_arg_2);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_27 = var_folder;
        tmp_string_concat_values_25 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_string_concat_values_25, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = mod_consts[120];
        PyTuple_SET_ITEM0(tmp_string_concat_values_25, 1, tmp_tuple_element_27);
        tmp_path_arg_1 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_25);
        Py_DECREF(tmp_string_concat_values_25);
        if (tmp_path_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_5 = OS_STAT(tstate, tmp_path_arg_1, NULL, NULL);
        Py_DECREF(tmp_path_arg_1);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_left_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[121]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_17 = const_int_0;
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_18 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_18 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_value_97;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_list_element_12;
        tmp_called_value_96 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_96 != NULL);
        tmp_called_value_97 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_97 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_12 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_7 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_7, 0, tmp_list_element_12);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 212;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_args_element_value_86 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_97, mod_consts[122], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 212;
        tmp_call_result_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_62);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_17:;
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_value_99;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_list_element_13;
        tmp_called_value_98 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_98 != NULL);
        tmp_called_value_99 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_99 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_13 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_8 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_8, 0, tmp_list_element_13);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 215;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_args_element_value_87 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_99, mod_consts[123], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_8);
        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 215;
        tmp_call_result_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_87);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_string_concat_values_26;
        PyObject *tmp_tuple_element_28;
        tmp_called_value_100 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_100 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_28 = mod_consts[124];
        tmp_string_concat_values_26 = MAKE_TUPLE_EMPTY(tstate, 5);
        PyTuple_SET_ITEM0(tmp_string_concat_values_26, 0, tmp_tuple_element_28);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_28 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_26, 1, tmp_tuple_element_28);
        tmp_tuple_element_28 = mod_consts[125];
        PyTuple_SET_ITEM0(tmp_string_concat_values_26, 2, tmp_tuple_element_28);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_28 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_26, 3, tmp_tuple_element_28);
        tmp_tuple_element_28 = mod_consts[126];
        PyTuple_SET_ITEM0(tmp_string_concat_values_26, 4, tmp_tuple_element_28);
        tmp_args_element_value_88 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_26);
        Py_DECREF(tmp_string_concat_values_26);
        if (tmp_args_element_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 216;
        tmp_call_result_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_88);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_called_value_102;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_string_concat_values_27;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_list_element_14;
        tmp_called_value_101 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_101 != NULL);
        tmp_called_value_102 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_102 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_29 = mod_consts[127];
        tmp_string_concat_values_27 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_string_concat_values_27, 0, tmp_tuple_element_29);
        CHECK_OBJECT(var_folder);
        tmp_tuple_element_29 = var_folder;
        PyTuple_SET_ITEM0(tmp_string_concat_values_27, 1, tmp_tuple_element_29);
        tmp_tuple_element_29 = mod_consts[126];
        PyTuple_SET_ITEM0(tmp_string_concat_values_27, 2, tmp_tuple_element_29);
        tmp_kw_call_arg_value_0_6 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_27);
        Py_DECREF(tmp_string_concat_values_27);
        if (tmp_kw_call_arg_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_1_6 = mod_consts[128];
        tmp_list_element_14 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_6);

            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_0_6 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_6, 0, tmp_list_element_14);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 218;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_args_element_value_89 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_102, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_6);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 218;
        tmp_call_result_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_101, tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_65);
    }
    goto branch_end_15;
    branch_no_15:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_18 = var_choice;
        tmp_cmp_expr_right_18 = mod_consts[129];
        tmp_condition_result_19 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_call_result_66;
        tmp_called_value_103 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_103 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 221;
        tmp_call_result_66 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_103);
        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_call_result_67;
        tmp_called_value_104 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_104 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 222;
        tmp_call_result_67 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_104);
        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        tmp_called_value_105 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_105 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_90 = mod_consts[130];
        tmp_args_element_value_91 = module_var_accessor_tools$$36$tools_sqli$is_valid_domain(tstate);
        if (unlikely(tmp_args_element_value_91 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[49]);
        }

        if (tmp_args_element_value_91 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_92 = mod_consts[50];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_105, call_args);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_domain;
            var_domain = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_106;
        tmp_called_value_106 = module_var_accessor_tools$$36$tools_sqli$get_timestamp(tstate);
        if (unlikely(tmp_called_value_106 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 224;
        tmp_assign_source_37 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_106);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_timestamp;
            var_timestamp = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_string_concat_values_28;
        PyObject *tmp_tuple_element_30;
        tmp_tuple_element_30 = mod_consts[131];
        tmp_string_concat_values_28 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_29;
            PyObject *tmp_called_value_107;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_29;
            PyObject *tmp_format_value_30;
            PyObject *tmp_format_spec_30;
            PyTuple_SET_ITEM0(tmp_string_concat_values_28, 0, tmp_tuple_element_30);
            CHECK_OBJECT(var_domain);
            tmp_expression_value_6 = var_domain;
            tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[53]);
            if (tmp_called_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_20;
            }
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 225;
            tmp_format_value_29 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_107, mod_consts[54]);

            Py_DECREF(tmp_called_value_107);
            if (tmp_format_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_20;
            }
            tmp_format_spec_29 = mod_consts[13];
            tmp_tuple_element_30 = BUILTIN_FORMAT(tstate, tmp_format_value_29, tmp_format_spec_29);
            Py_DECREF(tmp_format_value_29);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_28, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_28, 2, tmp_tuple_element_30);
            CHECK_OBJECT(var_timestamp);
            tmp_format_value_30 = var_timestamp;
            tmp_format_spec_30 = mod_consts[13];
            tmp_tuple_element_30 = BUILTIN_FORMAT(tstate, tmp_format_value_30, tmp_format_spec_30);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_28, 3, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[132];
            PyTuple_SET_ITEM0(tmp_string_concat_values_28, 4, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_string_concat_values_28);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_assign_source_38 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_28);
        Py_DECREF(tmp_string_concat_values_28);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_output_file;
            var_output_file = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_string_concat_values_29;
        PyObject *tmp_tuple_element_31;
        tmp_called_value_108 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_108 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_31 = mod_consts[58];
        tmp_string_concat_values_29 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_31;
            PyObject *tmp_format_spec_31;
            PyTuple_SET_ITEM0(tmp_string_concat_values_29, 0, tmp_tuple_element_31);
            CHECK_OBJECT(var_domain);
            tmp_format_value_31 = var_domain;
            tmp_format_spec_31 = mod_consts[13];
            tmp_tuple_element_31 = BUILTIN_FORMAT(tstate, tmp_format_value_31, tmp_format_spec_31);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 226;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_29, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = mod_consts[133];
            PyTuple_SET_ITEM0(tmp_string_concat_values_29, 2, tmp_tuple_element_31);
            CHECK_OBJECT(var_output_file);
            tmp_tuple_element_31 = var_output_file;
            PyTuple_SET_ITEM0(tmp_string_concat_values_29, 3, tmp_tuple_element_31);
            tmp_tuple_element_31 = mod_consts[134];
            PyTuple_SET_ITEM0(tmp_string_concat_values_29, 4, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_string_concat_values_29);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_args_element_value_93 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_29);
        Py_DECREF(tmp_string_concat_values_29);
        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 226;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_108, tmp_args_element_value_93);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_68);
    }
    goto branch_end_18;
    branch_no_18:;
    {
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_19 = var_choice;
        tmp_cmp_expr_right_19 = mod_consts[135];
        tmp_condition_result_20 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_condition_result_20 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_69;
        tmp_called_value_109 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_109 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 229;
        tmp_call_result_69 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_109);
        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_70;
        tmp_called_value_110 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_110 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 230;
        tmp_call_result_70 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_110);
        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_111 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_111 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_94 = mod_consts[99];
        tmp_args_element_value_95 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_95 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_96 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_111, call_args);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_string_concat_values_30;
        PyObject *tmp_tuple_element_32;
        tmp_tuple_element_32 = mod_consts[136];
        tmp_string_concat_values_30 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_32;
            PyObject *tmp_called_value_112;
            PyObject *tmp_format_spec_32;
            PyTuple_SET_ITEM0(tmp_string_concat_values_30, 0, tmp_tuple_element_32);
            tmp_called_value_112 = module_var_accessor_tools$$36$tools_sqli$get_timestamp(tstate);
            if (unlikely(tmp_called_value_112 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
            }

            if (tmp_called_value_112 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 232;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_22;
            }
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 232;
            tmp_format_value_32 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_112);
            if (tmp_format_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 232;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_22;
            }
            tmp_format_spec_32 = mod_consts[13];
            tmp_tuple_element_32 = BUILTIN_FORMAT(tstate, tmp_format_value_32, tmp_format_spec_32);
            Py_DECREF(tmp_format_value_32);
            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 232;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_30, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_string_concat_values_30);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_assign_source_40 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_30);
        Py_DECREF(tmp_string_concat_values_30);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_output_dir;
            var_output_dir = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_string_concat_values_31;
        PyObject *tmp_tuple_element_33;
        tmp_called_value_113 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_113 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_33 = mod_consts[44];
        tmp_string_concat_values_31 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_33;
            PyObject *tmp_format_spec_33;
            PyTuple_SET_ITEM0(tmp_string_concat_values_31, 0, tmp_tuple_element_33);
            CHECK_OBJECT(var_url);
            tmp_format_value_33 = var_url;
            tmp_format_spec_33 = mod_consts[13];
            tmp_tuple_element_33 = BUILTIN_FORMAT(tstate, tmp_format_value_33, tmp_format_spec_33);
            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 233;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_31, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_31, 2, tmp_tuple_element_33);
            CHECK_OBJECT(var_output_dir);
            tmp_tuple_element_33 = var_output_dir;
            PyTuple_SET_ITEM0(tmp_string_concat_values_31, 3, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_string_concat_values_31);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_args_element_value_97 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_31);
        Py_DECREF(tmp_string_concat_values_31);
        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 233;
        tmp_call_result_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_113, tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_71);
    }
    goto branch_end_19;
    branch_no_19:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_20 = var_choice;
        tmp_cmp_expr_right_20 = mod_consts[138];
        tmp_condition_result_21 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_condition_result_21 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_call_result_72;
        tmp_called_value_114 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_114 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 236;
        tmp_call_result_72 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_114);
        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_73;
        tmp_called_value_115 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_115 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 237;
        tmp_call_result_73 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_115);
        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        tmp_called_value_116 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_116 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_98 = mod_consts[139];
        tmp_args_element_value_99 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_99 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_100 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_116, call_args);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 238;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_string_concat_values_32;
        PyObject *tmp_tuple_element_34;
        tmp_tuple_element_34 = mod_consts[140];
        tmp_string_concat_values_32 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_34;
            PyObject *tmp_called_value_117;
            PyObject *tmp_format_spec_34;
            PyTuple_SET_ITEM0(tmp_string_concat_values_32, 0, tmp_tuple_element_34);
            tmp_called_value_117 = module_var_accessor_tools$$36$tools_sqli$get_timestamp(tstate);
            if (unlikely(tmp_called_value_117 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[51]);
            }

            if (tmp_called_value_117 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 239;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_24;
            }
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 239;
            tmp_format_value_34 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_117);
            if (tmp_format_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 239;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_24;
            }
            tmp_format_spec_34 = mod_consts[13];
            tmp_tuple_element_34 = BUILTIN_FORMAT(tstate, tmp_format_value_34, tmp_format_spec_34);
            Py_DECREF(tmp_format_value_34);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 239;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_32, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_string_concat_values_32);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_assign_source_42 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_32);
        Py_DECREF(tmp_string_concat_values_32);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_output_dir;
            var_output_dir = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_7 = IMPORT_HARD_OS();
        assert(!(tmp_expression_value_7 == NULL));
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[56]);
        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_output_dir);
        tmp_tuple_element_35 = var_output_dir;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_35);
        tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts[57]);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 240;
        tmp_call_result_74 = CALL_FUNCTION(tstate, tmp_called_value_118, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_called_value_120;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_string_concat_values_33;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_list_element_15;
        tmp_called_value_119 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_119 != NULL);
        tmp_called_value_120 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_120 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_36 = mod_consts[141];
        tmp_string_concat_values_33 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_35;
            PyObject *tmp_format_spec_35;
            PyTuple_SET_ITEM0(tmp_string_concat_values_33, 0, tmp_tuple_element_36);
            CHECK_OBJECT(var_url);
            tmp_format_value_35 = var_url;
            tmp_format_spec_35 = mod_consts[13];
            tmp_tuple_element_36 = BUILTIN_FORMAT(tstate, tmp_format_value_35, tmp_format_spec_35);
            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 241;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_33, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = mod_consts[142];
            PyTuple_SET_ITEM0(tmp_string_concat_values_33, 2, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_string_concat_values_33);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_kw_call_arg_value_0_7 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_33);
        Py_DECREF(tmp_string_concat_values_33);
        if (tmp_kw_call_arg_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_arg_value_1_7 = mod_consts[33];
        tmp_list_element_15 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_7);

            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_0_7 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_7, 0, tmp_list_element_15);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 241;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_args_element_value_101 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_120, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_7);
        Py_DECREF(tmp_kw_call_dict_value_0_7);
        if (tmp_args_element_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 241;
        tmp_call_result_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_119, tmp_args_element_value_101);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_string_concat_values_34;
        PyObject *tmp_tuple_element_37;
        tmp_called_value_121 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_121 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_37 = mod_consts[44];
        tmp_string_concat_values_34 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_36;
            PyObject *tmp_format_spec_36;
            PyTuple_SET_ITEM0(tmp_string_concat_values_34, 0, tmp_tuple_element_37);
            CHECK_OBJECT(var_url);
            tmp_format_value_36 = var_url;
            tmp_format_spec_36 = mod_consts[13];
            tmp_tuple_element_37 = BUILTIN_FORMAT(tstate, tmp_format_value_36, tmp_format_spec_36);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_34, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = mod_consts[143];
            PyTuple_SET_ITEM0(tmp_string_concat_values_34, 2, tmp_tuple_element_37);
            CHECK_OBJECT(var_output_dir);
            tmp_tuple_element_37 = var_output_dir;
            PyTuple_SET_ITEM0(tmp_string_concat_values_34, 3, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_string_concat_values_34);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_args_element_value_102 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_34);
        Py_DECREF(tmp_string_concat_values_34);
        if (tmp_args_element_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 242;
        tmp_call_result_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_121, tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_76);
    }
    goto branch_end_20;
    branch_no_20:;
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_21 = var_choice;
        tmp_cmp_expr_right_21 = mod_consts[144];
        tmp_condition_result_22 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_22 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_call_result_77;
        tmp_called_value_122 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_122 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 245;
        tmp_call_result_77 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_122);
        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_call_result_78;
        tmp_called_value_123 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_123 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 246;
        tmp_call_result_78 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_123);
        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_124;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        tmp_called_value_124 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_124 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_103 = mod_consts[99];
        tmp_args_element_value_104 = module_var_accessor_tools$$36$tools_sqli$is_valid_url(tstate);
        if (unlikely(tmp_args_element_value_104 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[40]);
        }

        if (tmp_args_element_value_104 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_105 = mod_consts[65];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_124, call_args);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        tmp_called_value_125 = module_var_accessor_tools$$36$tools_sqli$safe_input(tstate);
        if (unlikely(tmp_called_value_125 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[38]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_106 = mod_consts[145];
        tmp_args_element_value_107 = module_var_accessor_tools$$36$tools_sqli$is_non_empty(tstate);
        if (unlikely(tmp_args_element_value_107 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[73]);
        }

        if (tmp_args_element_value_107 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_108 = mod_consts[146];
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_125, call_args);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 248;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_call_result_79;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_string_concat_values_35;
        PyObject *tmp_tuple_element_38;
        tmp_called_value_126 = module_var_accessor_tools$$36$tools_sqli$run_command(tstate);
        if (unlikely(tmp_called_value_126 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[43]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_38 = mod_consts[44];
        tmp_string_concat_values_35 = MAKE_TUPLE_EMPTY(tstate, 5);
        {
            PyObject *tmp_format_value_37;
            PyObject *tmp_format_spec_37;
            PyObject *tmp_format_value_38;
            PyObject *tmp_format_spec_38;
            PyTuple_SET_ITEM0(tmp_string_concat_values_35, 0, tmp_tuple_element_38);
            CHECK_OBJECT(var_url);
            tmp_format_value_37 = var_url;
            tmp_format_spec_37 = mod_consts[13];
            tmp_tuple_element_38 = BUILTIN_FORMAT(tstate, tmp_format_value_37, tmp_format_spec_37);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_35, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[147];
            PyTuple_SET_ITEM0(tmp_string_concat_values_35, 2, tmp_tuple_element_38);
            CHECK_OBJECT(var_cookie);
            tmp_format_value_38 = var_cookie;
            tmp_format_spec_38 = mod_consts[13];
            tmp_tuple_element_38 = BUILTIN_FORMAT(tstate, tmp_format_value_38, tmp_format_spec_38);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_35, 3, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[148];
            PyTuple_SET_ITEM0(tmp_string_concat_values_35, 4, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_string_concat_values_35);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_args_element_value_109 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_35);
        Py_DECREF(tmp_string_concat_values_35);
        if (tmp_args_element_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 249;
        tmp_call_result_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_126, tmp_args_element_value_109);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_79);
    }
    goto branch_end_21;
    branch_no_21:;
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_22 = var_choice;
        tmp_cmp_expr_right_22 = mod_consts[149];
        tmp_condition_result_23 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_23 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_80;
        tmp_called_value_127 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_127 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 252;
        tmp_call_result_80 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_127);
        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_call_result_81;
        tmp_called_value_128 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_128 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 253;
        tmp_call_result_81 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_128);
        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_call_result_82;
        tmp_called_value_129 = module_var_accessor_tools$$36$tools_sqli$handle_hacking(tstate);
        if (unlikely(tmp_called_value_129 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[150]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 254;
        tmp_call_result_82 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_129);
        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_82);
    }
    tmp_return_value = mod_consts[151];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_22;
    branch_no_22:;
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_choice);
        tmp_cmp_expr_left_23 = var_choice;
        tmp_cmp_expr_right_23 = mod_consts[32];
        tmp_condition_result_24 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_condition_result_24 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_83;
        tmp_called_value_130 = module_var_accessor_tools$$36$tools_sqli$clear_screen(tstate);
        if (unlikely(tmp_called_value_130 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[26]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 258;
        tmp_call_result_83 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_130);
        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_call_result_84;
        tmp_called_value_131 = module_var_accessor_tools$$36$tools_sqli$logo(tstate);
        if (unlikely(tmp_called_value_131 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[27]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 259;
        tmp_call_result_84 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_131);
        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 259;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_call_result_85;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_called_value_133;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_list_element_16;
        tmp_called_value_132 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_132 != NULL);
        tmp_called_value_133 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_133 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_list_element_16 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_value_0_9 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_9, 0, tmp_list_element_16);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 260;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_args_element_value_110 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_133, mod_consts[152], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_args_element_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 260;
        tmp_call_result_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_132, tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_call_result_86;
        tmp_called_value_134 = module_var_accessor_tools$$36$tools_sqli$exit(tstate);
        if (unlikely(tmp_called_value_134 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[153]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 261;
        tmp_call_result_86 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_134);
        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_86);
    }
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_87;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_args_values_1;
        tmp_called_value_135 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_135 != NULL);
        tmp_called_value_136 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_136 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[154], "iil");
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 264;
        tmp_args_element_value_111 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_136, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[16]);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_args_element_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 264;
        tmp_call_result_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_135, tmp_args_element_value_111);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_87);
    }
    branch_end_23:;
    branch_end_22:;
    branch_end_21:;
    branch_end_20:;
    branch_end_19:;
    branch_end_18:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__7_sqli, exception_keeper_lineno_7);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
        } else if (exception_keeper_lineno_7 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__7_sqli, exception_keeper_lineno_7);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
    // Tried code:
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        tmp_cmp_expr_left_24 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_24 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_called_value_138;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_list_element_17;
        tmp_called_value_137 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_137 != NULL);
        tmp_called_value_138 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_138 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_list_element_17 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_kw_call_value_0_10 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_value_0_10, 0, tmp_list_element_17);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 267;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_args_element_value_112 = CALL_FUNCTION_WITH_POS_ARGS2_KW_SPLIT(tstate, tmp_called_value_138, mod_consts[155], kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_args_element_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 267;
        tmp_call_result_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_137, tmp_args_element_value_112);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_call_result_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_88);
    }
    goto try_break_handler_9;
    goto branch_end_24;
    branch_no_24:;
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        tmp_cmp_expr_left_25 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_25 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_45); 
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_45;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_called_value_140;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_string_concat_values_36;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_list_element_18;
        tmp_called_value_139 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_139 != NULL);
        tmp_called_value_140 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_140 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_tuple_element_39 = mod_consts[156];
        tmp_string_concat_values_36 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_39;
            PyObject *tmp_format_spec_39;
            PyTuple_SET_ITEM0(tmp_string_concat_values_36, 0, tmp_tuple_element_39);
            CHECK_OBJECT(var_e);
            tmp_format_value_39 = var_e;
            tmp_format_spec_39 = mod_consts[13];
            tmp_tuple_element_39 = BUILTIN_FORMAT(tstate, tmp_format_value_39, tmp_format_spec_39);
            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 270;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_36, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_string_concat_values_36);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_kw_call_arg_value_0_8 = PyUnicode_Join(mod_consts[13], tmp_string_concat_values_36);
        Py_DECREF(tmp_string_concat_values_36);
        if (tmp_kw_call_arg_value_0_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_kw_call_arg_value_1_8 = mod_consts[14];
        tmp_list_element_18 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_kw_call_arg_value_0_8);

            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_kw_call_dict_value_0_8 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_8, 0, tmp_list_element_18);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 270;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_args_element_value_113 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_140, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_8);
        Py_DECREF(tmp_kw_call_dict_value_0_8);
        if (tmp_args_element_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 270;
        tmp_call_result_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_139, tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_call_result_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_input_arg_3;
        PyObject *tmp_called_value_141;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_arg_value_1_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        PyObject *tmp_list_element_19;
        PyObject *tmp_capi_result_1;
        tmp_called_value_141 = module_var_accessor_tools$$36$tools_sqli$colored(tstate);
        if (unlikely(tmp_called_value_141 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_kw_call_arg_value_0_9 = mod_consts[157];
        tmp_kw_call_arg_value_1_9 = module_var_accessor_tools$$36$tools_sqli$COLOR_TEXT(tstate);
        if (unlikely(tmp_kw_call_arg_value_1_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[29]);
        }

        if (tmp_kw_call_arg_value_1_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_list_element_19 = module_var_accessor_tools$$36$tools_sqli$ATTR_BOLD(tstate);
        if (unlikely(tmp_list_element_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[15]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_kw_call_dict_value_0_9 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_kw_call_dict_value_0_9, 0, tmp_list_element_19);
        frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = 271;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_input_arg_3 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_141, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_9);
        if (tmp_input_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_capi_result_1 = BUILTIN_INPUT(tstate, tmp_input_arg_3);
        Py_DECREF(tmp_input_arg_3);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_capi_result_1);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_25;
    branch_no_25:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 64;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame)) {
            frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_25:;
    branch_end_24:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_9:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto loop_end_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 63;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli$$$function__7_sqli, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli$$$function__7_sqli->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli$$$function__7_sqli, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_tools$tools_sqli$$$function__7_sqli,
        type_description_1,
        var_e,
        var_menu,
        var_k,
        var_v,
        var_color,
        var_choice,
        var_url,
        var_data,
        var_domain,
        var_timestamp,
        var_output_dir,
        var_db,
        var_table,
        var_columns,
        var_dns_domain,
        var_folder,
        var_output_file,
        var_cookie
    );


    // Release cached frame if used for exception.
    if (frame_frame_tools$tools_sqli$$$function__7_sqli == cache_frame_frame_tools$tools_sqli$$$function__7_sqli) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_tools$tools_sqli$$$function__7_sqli);
        cache_frame_frame_tools$tools_sqli$$$function__7_sqli = NULL;
    }

    assertFrameObject(frame_frame_tools$tools_sqli$$$function__7_sqli);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_menu);
    var_menu = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    Py_XDECREF(var_choice);
    var_choice = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
    Py_XDECREF(var_timestamp);
    var_timestamp = NULL;
    Py_XDECREF(var_output_dir);
    var_output_dir = NULL;
    Py_XDECREF(var_db);
    var_db = NULL;
    Py_XDECREF(var_table);
    var_table = NULL;
    Py_XDECREF(var_columns);
    var_columns = NULL;
    Py_XDECREF(var_dns_domain);
    var_dns_domain = NULL;
    Py_XDECREF(var_folder);
    var_folder = NULL;
    Py_XDECREF(var_output_file);
    var_output_file = NULL;
    Py_XDECREF(var_cookie);
    var_cookie = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_menu);
    var_menu = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_color);
    var_color = NULL;
    Py_XDECREF(var_choice);
    var_choice = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
    Py_XDECREF(var_timestamp);
    var_timestamp = NULL;
    Py_XDECREF(var_output_dir);
    var_output_dir = NULL;
    Py_XDECREF(var_db);
    var_db = NULL;
    Py_XDECREF(var_table);
    var_table = NULL;
    Py_XDECREF(var_columns);
    var_columns = NULL;
    Py_XDECREF(var_dns_domain);
    var_dns_domain = NULL;
    Py_XDECREF(var_folder);
    var_folder = NULL;
    Py_XDECREF(var_output_file);
    var_output_file = NULL;
    Py_XDECREF(var_cookie);
    var_cookie = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__1_get_timestamp(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__1_get_timestamp,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_88e1f15b7f9cdc6d9f8f0a20b21ac036,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__2_is_non_empty(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__2_is_non_empty,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60a9cd258fe51f9ba471d11266d99dd9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__3_is_valid_url(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__3_is_valid_url,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ce38939b2c3a2922ee8d990da9862121,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__4_is_valid_domain(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__4_is_valid_domain,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cf4a478c27a9098da17dba4f20a84fca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__5_safe_input(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__5_safe_input,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b2ef54d8ba8d2801b1d2d770b54ece11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__6_check_required_tools(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__6_check_required_tools,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_98f532eadde354d0dd1824b08bd65ee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tools$tools_sqli$$$function__7_sqli(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tools$tools_sqli$$$function__7_sqli,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_351a1329fa22c30c78ccfaca3442fbeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_tools$tools_sqli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_tools$tools_sqli[] = {
    impl_tools$tools_sqli$$$function__1_get_timestamp,
    impl_tools$tools_sqli$$$function__2_is_non_empty,
    impl_tools$tools_sqli$$$function__3_is_valid_url,
    impl_tools$tools_sqli$$$function__4_is_valid_domain,
    impl_tools$tools_sqli$$$function__5_safe_input,
    impl_tools$tools_sqli$$$function__6_check_required_tools,
    impl_tools$tools_sqli$$$function__7_sqli,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_tools$tools_sqli);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_tools$tools_sqli,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_tools$tools_sqli,
        sizeof(function_table_tools$tools_sqli) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "tools.tools_sqli";
#endif

// Internal entry point for module code.
PyObject *modulecode_tools$tools_sqli(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("tools$tools_sqli");

    // Store the module for future use.
    module_tools$tools_sqli = module;

    moduledict_tools$tools_sqli = MODULE_DICT(module_tools$tools_sqli);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("tools$tools_sqli: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("tools$tools_sqli: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("tools$tools_sqli: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "tools.tools_sqli" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittools$tools_sqli\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_tools$tools_sqli,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_tools$tools_sqli,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[13]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_tools$tools_sqli,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_tools$tools_sqli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_tools$tools_sqli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_tools$tools_sqli);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_tools$tools_sqli);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_frame_tools$tools_sqli;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_2);
    }
    frame_frame_tools$tools_sqli = MAKE_MODULE_FRAME(code_objects_357660e93d365fa3ca5465347db05f3e, module_tools$tools_sqli);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_tools$tools_sqli);
    assert(Py_REFCNT(frame_frame_tools$tools_sqli) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_tools$$36$tools_sqli$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[160], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_tools$$36$tools_sqli$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[161], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[5];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[18];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[165];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[166];
        tmp_level_value_4 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[150],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[167];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[168];
        tmp_level_value_5 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 9;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[11],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[169];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[170];
        tmp_level_value_6 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 10;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[26],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[26]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[27],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[27]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[43],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[43]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[171],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[171]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_15);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[172];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_tools$tools_sqli;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[173];
        tmp_level_value_7 = const_int_0;
        frame_frame_tools$tools_sqli->m_frame.f_lineno = 11;
        tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[15],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[15]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[29],
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[29]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[36],
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[36]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_tools$tools_sqli,
                mod_consts[28],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[28]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_20);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_True;
        tmp_assattr_target_3 = IMPORT_HARD_SYS();
        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[174], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_tools$tools_sqli, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_tools$tools_sqli->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tools$tools_sqli, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_tools$tools_sqli);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_tools$tools_sqli$$$function__1_get_timestamp(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_tools$tools_sqli$$$function__2_is_non_empty(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_tools$tools_sqli$$$function__3_is_valid_url(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_tools$tools_sqli$$$function__4_is_valid_domain(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_tools$tools_sqli$$$function__5_safe_input(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_tools$tools_sqli$$$function__6_check_required_tools(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_tools$tools_sqli$$$function__7_sqli(tstate);

        UPDATE_STRING_DICT1(moduledict_tools$tools_sqli, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_27);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("tools$tools_sqli", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "tools.tools_sqli" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_tools$tools_sqli);
    return module_tools$tools_sqli;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tools$tools_sqli, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("tools$tools_sqli", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
