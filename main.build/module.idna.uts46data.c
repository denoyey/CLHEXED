/* Generated code for Python module 'idna$uts46data'
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

/* The "module_idna$uts46data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_idna$uts46data;
PyDictObject *moduledict_idna$uts46data;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[182];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[182];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("idna.uts46data"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 182; i++) {
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
void checkModuleConstants_idna$uts46data(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 182; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 86
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
static PyObject *module_var_accessor_idna$$36$uts46data$List(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[87]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[87]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[87], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[87]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[87], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[87]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[87]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[87]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$Tuple(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[88]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[88], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[88]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[88], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[88]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[89]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[89]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[89], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[89]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[89], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[89]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[89]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[89]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[181]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[181]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[181], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[181]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[181], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[181]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[181]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[181]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_0(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[95]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[95]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[95], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[95]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[95], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[95]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[95]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[95]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[96]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[96]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[96], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[96]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[96], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[96]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[96]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[96]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_10(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[105]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[105]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[105], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[105]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_11(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[106]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[106], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[106]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[106], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[106]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_12(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[107]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[107], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[107]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[107], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[107]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_13(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[108]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[108], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[108]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[108], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[108]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_14(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[109]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[109]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[109], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[109]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_15(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[110]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[110], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[110]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[110], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[110]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_16(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[111]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[111], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[111]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[111], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[111]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_17(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[112]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[112], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[112]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[112], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[112]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_18(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[113]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[113]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[113], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[113]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_19(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[114]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[114], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[114]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[114], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[114]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_2(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[97]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[97], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[97]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[97], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[97]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_20(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[115]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[115], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[115]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[115], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[115]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_21(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[116]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[116], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[116]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[116], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[116]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_22(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[117]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[117], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[117]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[117], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[117]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_23(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[118]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[118], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[118]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[118], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[118]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_24(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[119]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[119]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[119]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_25(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[120]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[120], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[120]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[120], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[120]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_26(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[121]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[121]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[121], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[121]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_27(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[122]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[122], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[122]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[122], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[122]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_28(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[123]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[123]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[123]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_29(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[124]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[124], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[124]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[124], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[124]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_3(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[98]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[98], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[98]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[98], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[98]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_30(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[125]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[125], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[125]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[125], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[125]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_31(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[126]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[126], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[126]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[126], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[126]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_32(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[127]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[127]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[127]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_33(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[128]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[128], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[128]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[128], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[128]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_34(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[129]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[129], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[129]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[129], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[129]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_35(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[130]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[130], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[130]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[130], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[130]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_36(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[131]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[131], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[131]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[131], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[131]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_37(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[132]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[132]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[132], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[132]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_38(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[133]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[133], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[133]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[133], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[133]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_39(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[134]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[134], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[134]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[134], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[134]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_4(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[99]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[99], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[99]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[99], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[99]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_40(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[135]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[135], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[135]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[135], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[135]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_41(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[136]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[136]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[136], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[136]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_42(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[137]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[137], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[137]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[137], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[137]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_43(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[138]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[138], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[138]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[138], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[138]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_44(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[139]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[139], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[139]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[139], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[139]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_45(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[140]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[140], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[140]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[140], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[140]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_46(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[141]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[141], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[141]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[141], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[141]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_47(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[142]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[142], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[142]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[142], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[142]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_48(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[143]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[143], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[143]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[143], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[143]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_49(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[144]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[144], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[144]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[144], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[144]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_5(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[100]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[100], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[100]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[100], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[100]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_50(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[145]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[145], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[145]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[145], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[145]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_51(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[146]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[146], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[146]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[146], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[146]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_52(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[147]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[147], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[147]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[147], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[147]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_53(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[148]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[148], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[148]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[148], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[148]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_54(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[149]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[149], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[149]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[149], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[149]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_55(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[150]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_56(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[151]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[151], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[151]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[151], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[151]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_57(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[152]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[152], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[152]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[152], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[152]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_58(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[153]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_59(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[154]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[154], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[154]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[154], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[154]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_6(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[101]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[101]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[101]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_60(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[155]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[155], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[155]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[155], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[155]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_61(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[156]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[156], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[156]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[156], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[156]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_62(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[157]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[157], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[157]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[157], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[157]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_63(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[158]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[158], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[158]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[158], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[158]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_64(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[159]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[159], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[159]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[159], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[159]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_65(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[160]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[160], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[160]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[160], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[160]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_66(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[161]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[161], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[161]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[161], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[161]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_67(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[162]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[162], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[162]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[162], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[162]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_68(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[163]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[163], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[163]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[163], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[163]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_69(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[164]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[164], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[164]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[164], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[164]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_7(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[102]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[102], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[102]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[102], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[102]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_70(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[165]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[165], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[165]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[165], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[165]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_71(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[166]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[166], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[166]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[166], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[166]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_72(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[167]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[167], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[167]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[167], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[167]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_73(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[168]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[168], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[168]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[168], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[168]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_74(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[169]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[169], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[169]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[169], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[169]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_75(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[170]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[170], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[170]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[170], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[170]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_76(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[171]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[171], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[171]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[171], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[171]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_77(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[172]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[172], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[172]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[172], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[172]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_78(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[173]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[173], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[173]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[173], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[173]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_79(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[174]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[174], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[174]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[174], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[174]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_8(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[103]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[103], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[103]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[103], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[103]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_80(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[175]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[175], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[175]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[175], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[175]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_81(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[176]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[176], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[176]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[176], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[176]);
    }

    return result;
}

static PyObject *module_var_accessor_idna$$36$uts46data$_seg_9(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_idna$uts46data->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_idna$uts46data->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_idna$uts46data->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[104]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[104], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[104]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[104], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[104]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_fa4f66aca789f478bf7f164a7df1fb60;
static PyCodeObject *code_objects_273de3dccc10279149bf257cb185be5d;
static PyCodeObject *code_objects_74b23107d8f3b2c4d82953bef7d1f928;
static PyCodeObject *code_objects_8b5dfae7bc0868f5e4e346f98cc13337;
static PyCodeObject *code_objects_2f6493c3986ec45027b6169df0f7eb80;
static PyCodeObject *code_objects_fe3f77ccc2911ac9cfa9f207e123e3d8;
static PyCodeObject *code_objects_1129e4b6fcc01249aee81f452016ccce;
static PyCodeObject *code_objects_275f4e6e97f156a486981aa6e40152d9;
static PyCodeObject *code_objects_1f1f79417f6e8a61bfc8ad680f375411;
static PyCodeObject *code_objects_c8e40ae2ac95f9eb63e921b0d60084b0;
static PyCodeObject *code_objects_96876f498e301bb3e655efa6ca3fd53d;
static PyCodeObject *code_objects_9d8113997278ab88b2146a2598df91e4;
static PyCodeObject *code_objects_61dacbe73acdfdacfdaf8aa1478110e4;
static PyCodeObject *code_objects_71eb7b47451e5eef93a90cec3f3e0b5f;
static PyCodeObject *code_objects_4b52a870f6218965fe958eb389eae15e;
static PyCodeObject *code_objects_e2a7b33053dba8637136a63f6b7fc97b;
static PyCodeObject *code_objects_31bff45c9a82ec4bb18e492f5f57ceb5;
static PyCodeObject *code_objects_60f5f239ea254ceb74052acd0b33fbf9;
static PyCodeObject *code_objects_21b020d0ab4a2c845554d113bb5ebe95;
static PyCodeObject *code_objects_4dd3bcc67fdf32c36f4f78296cc70a4f;
static PyCodeObject *code_objects_a56d9a298f371e41b7e6ddf08d7afd41;
static PyCodeObject *code_objects_5990544a7dc9de01765911b62f394ed3;
static PyCodeObject *code_objects_a2ae922a2ad692173b67315705c5e592;
static PyCodeObject *code_objects_1da72246600f1badb65524f48757a2f2;
static PyCodeObject *code_objects_545d0be71177252f044c24fb11d32972;
static PyCodeObject *code_objects_e0dc57eaf15c499b43f7e51008764a52;
static PyCodeObject *code_objects_2028bb7a49569f62a3dde251faa3e86e;
static PyCodeObject *code_objects_08aea06b6193816d14970ea3ead40b25;
static PyCodeObject *code_objects_17c44e2b73f6817e4dd151fe60760600;
static PyCodeObject *code_objects_57bb9a2566943872f4e8021d171076c9;
static PyCodeObject *code_objects_1f5a8c9653a0342182ea8ab18cc0888c;
static PyCodeObject *code_objects_380a0a5e8dab2521c21ae53728aa36e8;
static PyCodeObject *code_objects_f7c81e45b06ffe2bbe3910a8cfee9420;
static PyCodeObject *code_objects_42e3e460f15c8155ba13775df009e719;
static PyCodeObject *code_objects_18729c48efc8c281221aed4d9a144b2d;
static PyCodeObject *code_objects_c0133499f4fc2931637076507fcd4a20;
static PyCodeObject *code_objects_a1ae0f1792c030485e0937a8f40e2793;
static PyCodeObject *code_objects_fb22e0858737a6da02c5bd8046cf1569;
static PyCodeObject *code_objects_41fbf384ff7642ad1d0eb638dfb1bef5;
static PyCodeObject *code_objects_f06375895ef62e26c19e63aac888ee2f;
static PyCodeObject *code_objects_66aa9b51722a4358d2b4ffc376a4db99;
static PyCodeObject *code_objects_3f10f2f96bc526007bc00c0dd8b3b85e;
static PyCodeObject *code_objects_62de97a1e3136093f89697fe4849a352;
static PyCodeObject *code_objects_15b6000257b6b44ba3249447388a61c1;
static PyCodeObject *code_objects_66f1557169c34debfe274288e060c24d;
static PyCodeObject *code_objects_480ffd633f6be96ecd58ceb5bee8ab4a;
static PyCodeObject *code_objects_bc27b20c83509079bc8f464bbac01539;
static PyCodeObject *code_objects_46e9b4bea86a30610f06b98376613b94;
static PyCodeObject *code_objects_d96f10cda82913847f5f732ee0556bcd;
static PyCodeObject *code_objects_0de6b6085e5d3efea575eaa3f1dbd3b3;
static PyCodeObject *code_objects_7f6e2f3ff86d28348b8ddae5b56125eb;
static PyCodeObject *code_objects_55dc160d3b0a492d019f9b52858a0aa4;
static PyCodeObject *code_objects_1fb7d86770c0470b64789f035021311c;
static PyCodeObject *code_objects_c22800a27a3dca024c3a25bdeb6f8493;
static PyCodeObject *code_objects_ddb09504700bf6e10ca0f7d1ac5c4154;
static PyCodeObject *code_objects_eef60a98c81d5a128a0386246a0890ad;
static PyCodeObject *code_objects_ab93ef4162ef5e2db0c69ee1599f5d64;
static PyCodeObject *code_objects_30f0d2fbddf03a9b8956139171cb9a02;
static PyCodeObject *code_objects_bdd7685cd52828ce019f86d98e42bc4c;
static PyCodeObject *code_objects_5f46a343ccc3d5da9f2bb0d017b0ea9c;
static PyCodeObject *code_objects_8b649f58f589e429619472a07fc4ee3b;
static PyCodeObject *code_objects_a2bc2440cf3ccedb290f717d653ffcdf;
static PyCodeObject *code_objects_255443030c6cdd5f3f35cb59b23e7c6f;
static PyCodeObject *code_objects_2edec0863396ebf81d7f557eff4f58f1;
static PyCodeObject *code_objects_3b0cc2f13ae4e16fb2702f7c5926968f;
static PyCodeObject *code_objects_aaaf1a603463d9f303457788a146aa2a;
static PyCodeObject *code_objects_9531737a2f548dd931fb4dc812977879;
static PyCodeObject *code_objects_27c0b5e3d003f5c0edcc88242282145f;
static PyCodeObject *code_objects_a4f2d88056ea4d3eec86f1c2c8bb083a;
static PyCodeObject *code_objects_3064c2e148574618f48ad3d37645dd62;
static PyCodeObject *code_objects_9967033c8f302e0fe6713f7f5af3f933;
static PyCodeObject *code_objects_4514d47970819e19bf2700062a027f1c;
static PyCodeObject *code_objects_52ea85277e5802d6f9741747a11c8e66;
static PyCodeObject *code_objects_6029d340e1bbd6eb2551cdaaa1470e3d;
static PyCodeObject *code_objects_78732af854ec65fa6c6ff4b702a8dac3;
static PyCodeObject *code_objects_27d6c4870c5858a9d050f2dc049b4199;
static PyCodeObject *code_objects_2cd17d7defd8100bd474b0eec4873ad6;
static PyCodeObject *code_objects_2ff362385ed15b0d8498e4992096e100;
static PyCodeObject *code_objects_9057561172bb29b9da06012405400d5f;
static PyCodeObject *code_objects_fea3fd3e56f9a679d137baf897f49ef0;
static PyCodeObject *code_objects_11c4c4cd6b0679032287f18d22306072;
static PyCodeObject *code_objects_3430c9556d43c7a87d6e581f8b464655;
static PyCodeObject *code_objects_d4b2aa405e5e83dd7c58acc0999b9976;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[178]); CHECK_OBJECT(module_filename_obj);
    code_objects_fa4f66aca789f478bf7f164a7df1fb60 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[179], mod_consts[179], NULL, NULL, 0, 0, 0);
    code_objects_273de3dccc10279149bf257cb185be5d = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[95], NULL, NULL, 0, 0, 0);
    code_objects_74b23107d8f3b2c4d82953bef7d1f928 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[96], mod_consts[96], NULL, NULL, 0, 0, 0);
    code_objects_8b5dfae7bc0868f5e4e346f98cc13337 = MAKE_CODE_OBJECT(module_filename_obj, 1062, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], NULL, NULL, 0, 0, 0);
    code_objects_2f6493c3986ec45027b6169df0f7eb80 = MAKE_CODE_OBJECT(module_filename_obj, 1167, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[106], NULL, NULL, 0, 0, 0);
    code_objects_fe3f77ccc2911ac9cfa9f207e123e3d8 = MAKE_CODE_OBJECT(module_filename_obj, 1272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[107], mod_consts[107], NULL, NULL, 0, 0, 0);
    code_objects_1129e4b6fcc01249aee81f452016ccce = MAKE_CODE_OBJECT(module_filename_obj, 1377, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], NULL, NULL, 0, 0, 0);
    code_objects_275f4e6e97f156a486981aa6e40152d9 = MAKE_CODE_OBJECT(module_filename_obj, 1482, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[109], mod_consts[109], NULL, NULL, 0, 0, 0);
    code_objects_1f1f79417f6e8a61bfc8ad680f375411 = MAKE_CODE_OBJECT(module_filename_obj, 1587, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[110], NULL, NULL, 0, 0, 0);
    code_objects_c8e40ae2ac95f9eb63e921b0d60084b0 = MAKE_CODE_OBJECT(module_filename_obj, 1692, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[111], NULL, NULL, 0, 0, 0);
    code_objects_96876f498e301bb3e655efa6ca3fd53d = MAKE_CODE_OBJECT(module_filename_obj, 1797, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[112], NULL, NULL, 0, 0, 0);
    code_objects_9d8113997278ab88b2146a2598df91e4 = MAKE_CODE_OBJECT(module_filename_obj, 1902, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    code_objects_61dacbe73acdfdacfdaf8aa1478110e4 = MAKE_CODE_OBJECT(module_filename_obj, 2007, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[114], mod_consts[114], NULL, NULL, 0, 0, 0);
    code_objects_71eb7b47451e5eef93a90cec3f3e0b5f = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[97], mod_consts[97], NULL, NULL, 0, 0, 0);
    code_objects_4b52a870f6218965fe958eb389eae15e = MAKE_CODE_OBJECT(module_filename_obj, 2112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[115], NULL, NULL, 0, 0, 0);
    code_objects_e2a7b33053dba8637136a63f6b7fc97b = MAKE_CODE_OBJECT(module_filename_obj, 2217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[116], mod_consts[116], NULL, NULL, 0, 0, 0);
    code_objects_31bff45c9a82ec4bb18e492f5f57ceb5 = MAKE_CODE_OBJECT(module_filename_obj, 2322, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    code_objects_60f5f239ea254ceb74052acd0b33fbf9 = MAKE_CODE_OBJECT(module_filename_obj, 2427, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], NULL, NULL, 0, 0, 0);
    code_objects_21b020d0ab4a2c845554d113bb5ebe95 = MAKE_CODE_OBJECT(module_filename_obj, 2532, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[119], mod_consts[119], NULL, NULL, 0, 0, 0);
    code_objects_4dd3bcc67fdf32c36f4f78296cc70a4f = MAKE_CODE_OBJECT(module_filename_obj, 2637, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[120], mod_consts[120], NULL, NULL, 0, 0, 0);
    code_objects_a56d9a298f371e41b7e6ddf08d7afd41 = MAKE_CODE_OBJECT(module_filename_obj, 2742, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[121], mod_consts[121], NULL, NULL, 0, 0, 0);
    code_objects_5990544a7dc9de01765911b62f394ed3 = MAKE_CODE_OBJECT(module_filename_obj, 2847, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[122], NULL, NULL, 0, 0, 0);
    code_objects_a2ae922a2ad692173b67315705c5e592 = MAKE_CODE_OBJECT(module_filename_obj, 2952, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[123], mod_consts[123], NULL, NULL, 0, 0, 0);
    code_objects_1da72246600f1badb65524f48757a2f2 = MAKE_CODE_OBJECT(module_filename_obj, 3057, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[124], mod_consts[124], NULL, NULL, 0, 0, 0);
    code_objects_545d0be71177252f044c24fb11d32972 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
    code_objects_e0dc57eaf15c499b43f7e51008764a52 = MAKE_CODE_OBJECT(module_filename_obj, 3162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[125], mod_consts[125], NULL, NULL, 0, 0, 0);
    code_objects_2028bb7a49569f62a3dde251faa3e86e = MAKE_CODE_OBJECT(module_filename_obj, 3267, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[126], mod_consts[126], NULL, NULL, 0, 0, 0);
    code_objects_08aea06b6193816d14970ea3ead40b25 = MAKE_CODE_OBJECT(module_filename_obj, 3372, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[127], mod_consts[127], NULL, NULL, 0, 0, 0);
    code_objects_17c44e2b73f6817e4dd151fe60760600 = MAKE_CODE_OBJECT(module_filename_obj, 3477, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    code_objects_57bb9a2566943872f4e8021d171076c9 = MAKE_CODE_OBJECT(module_filename_obj, 3582, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[129], NULL, NULL, 0, 0, 0);
    code_objects_1f5a8c9653a0342182ea8ab18cc0888c = MAKE_CODE_OBJECT(module_filename_obj, 3687, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[130], mod_consts[130], NULL, NULL, 0, 0, 0);
    code_objects_380a0a5e8dab2521c21ae53728aa36e8 = MAKE_CODE_OBJECT(module_filename_obj, 3792, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[131], mod_consts[131], NULL, NULL, 0, 0, 0);
    code_objects_f7c81e45b06ffe2bbe3910a8cfee9420 = MAKE_CODE_OBJECT(module_filename_obj, 3897, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[132], mod_consts[132], NULL, NULL, 0, 0, 0);
    code_objects_42e3e460f15c8155ba13775df009e719 = MAKE_CODE_OBJECT(module_filename_obj, 4002, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[133], mod_consts[133], NULL, NULL, 0, 0, 0);
    code_objects_18729c48efc8c281221aed4d9a144b2d = MAKE_CODE_OBJECT(module_filename_obj, 4107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[134], mod_consts[134], NULL, NULL, 0, 0, 0);
    code_objects_c0133499f4fc2931637076507fcd4a20 = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[99], NULL, NULL, 0, 0, 0);
    code_objects_a1ae0f1792c030485e0937a8f40e2793 = MAKE_CODE_OBJECT(module_filename_obj, 4212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[135], mod_consts[135], NULL, NULL, 0, 0, 0);
    code_objects_fb22e0858737a6da02c5bd8046cf1569 = MAKE_CODE_OBJECT(module_filename_obj, 4317, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], NULL, NULL, 0, 0, 0);
    code_objects_41fbf384ff7642ad1d0eb638dfb1bef5 = MAKE_CODE_OBJECT(module_filename_obj, 4422, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[137], mod_consts[137], NULL, NULL, 0, 0, 0);
    code_objects_f06375895ef62e26c19e63aac888ee2f = MAKE_CODE_OBJECT(module_filename_obj, 4527, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[138], mod_consts[138], NULL, NULL, 0, 0, 0);
    code_objects_66aa9b51722a4358d2b4ffc376a4db99 = MAKE_CODE_OBJECT(module_filename_obj, 4632, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[139], NULL, NULL, 0, 0, 0);
    code_objects_3f10f2f96bc526007bc00c0dd8b3b85e = MAKE_CODE_OBJECT(module_filename_obj, 4737, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[140], mod_consts[140], NULL, NULL, 0, 0, 0);
    code_objects_62de97a1e3136093f89697fe4849a352 = MAKE_CODE_OBJECT(module_filename_obj, 4842, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[141], mod_consts[141], NULL, NULL, 0, 0, 0);
    code_objects_15b6000257b6b44ba3249447388a61c1 = MAKE_CODE_OBJECT(module_filename_obj, 4947, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[142], NULL, NULL, 0, 0, 0);
    code_objects_66f1557169c34debfe274288e060c24d = MAKE_CODE_OBJECT(module_filename_obj, 5052, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[143], mod_consts[143], NULL, NULL, 0, 0, 0);
    code_objects_480ffd633f6be96ecd58ceb5bee8ab4a = MAKE_CODE_OBJECT(module_filename_obj, 5157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], NULL, NULL, 0, 0, 0);
    code_objects_bc27b20c83509079bc8f464bbac01539 = MAKE_CODE_OBJECT(module_filename_obj, 537, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[100], mod_consts[100], NULL, NULL, 0, 0, 0);
    code_objects_46e9b4bea86a30610f06b98376613b94 = MAKE_CODE_OBJECT(module_filename_obj, 5262, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[145], mod_consts[145], NULL, NULL, 0, 0, 0);
    code_objects_d96f10cda82913847f5f732ee0556bcd = MAKE_CODE_OBJECT(module_filename_obj, 5367, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    code_objects_0de6b6085e5d3efea575eaa3f1dbd3b3 = MAKE_CODE_OBJECT(module_filename_obj, 5472, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], NULL, NULL, 0, 0, 0);
    code_objects_7f6e2f3ff86d28348b8ddae5b56125eb = MAKE_CODE_OBJECT(module_filename_obj, 5577, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[148], mod_consts[148], NULL, NULL, 0, 0, 0);
    code_objects_55dc160d3b0a492d019f9b52858a0aa4 = MAKE_CODE_OBJECT(module_filename_obj, 5682, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
    code_objects_1fb7d86770c0470b64789f035021311c = MAKE_CODE_OBJECT(module_filename_obj, 5787, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    code_objects_c22800a27a3dca024c3a25bdeb6f8493 = MAKE_CODE_OBJECT(module_filename_obj, 5892, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[151], mod_consts[151], NULL, NULL, 0, 0, 0);
    code_objects_ddb09504700bf6e10ca0f7d1ac5c4154 = MAKE_CODE_OBJECT(module_filename_obj, 5997, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    code_objects_eef60a98c81d5a128a0386246a0890ad = MAKE_CODE_OBJECT(module_filename_obj, 6102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], NULL, NULL, 0, 0, 0);
    code_objects_ab93ef4162ef5e2db0c69ee1599f5d64 = MAKE_CODE_OBJECT(module_filename_obj, 6207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[154], mod_consts[154], NULL, NULL, 0, 0, 0);
    code_objects_30f0d2fbddf03a9b8956139171cb9a02 = MAKE_CODE_OBJECT(module_filename_obj, 642, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[101], mod_consts[101], NULL, NULL, 0, 0, 0);
    code_objects_bdd7685cd52828ce019f86d98e42bc4c = MAKE_CODE_OBJECT(module_filename_obj, 6312, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
    code_objects_5f46a343ccc3d5da9f2bb0d017b0ea9c = MAKE_CODE_OBJECT(module_filename_obj, 6417, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[156], mod_consts[156], NULL, NULL, 0, 0, 0);
    code_objects_8b649f58f589e429619472a07fc4ee3b = MAKE_CODE_OBJECT(module_filename_obj, 6522, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[157], mod_consts[157], NULL, NULL, 0, 0, 0);
    code_objects_a2bc2440cf3ccedb290f717d653ffcdf = MAKE_CODE_OBJECT(module_filename_obj, 6627, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[158], mod_consts[158], NULL, NULL, 0, 0, 0);
    code_objects_255443030c6cdd5f3f35cb59b23e7c6f = MAKE_CODE_OBJECT(module_filename_obj, 6732, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[159], mod_consts[159], NULL, NULL, 0, 0, 0);
    code_objects_2edec0863396ebf81d7f557eff4f58f1 = MAKE_CODE_OBJECT(module_filename_obj, 6837, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[160], mod_consts[160], NULL, NULL, 0, 0, 0);
    code_objects_3b0cc2f13ae4e16fb2702f7c5926968f = MAKE_CODE_OBJECT(module_filename_obj, 6942, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[161], mod_consts[161], NULL, NULL, 0, 0, 0);
    code_objects_aaaf1a603463d9f303457788a146aa2a = MAKE_CODE_OBJECT(module_filename_obj, 7047, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[162], mod_consts[162], NULL, NULL, 0, 0, 0);
    code_objects_9531737a2f548dd931fb4dc812977879 = MAKE_CODE_OBJECT(module_filename_obj, 7152, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[163], mod_consts[163], NULL, NULL, 0, 0, 0);
    code_objects_27c0b5e3d003f5c0edcc88242282145f = MAKE_CODE_OBJECT(module_filename_obj, 7257, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[164], mod_consts[164], NULL, NULL, 0, 0, 0);
    code_objects_a4f2d88056ea4d3eec86f1c2c8bb083a = MAKE_CODE_OBJECT(module_filename_obj, 747, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[102], NULL, NULL, 0, 0, 0);
    code_objects_3064c2e148574618f48ad3d37645dd62 = MAKE_CODE_OBJECT(module_filename_obj, 7362, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[165], mod_consts[165], NULL, NULL, 0, 0, 0);
    code_objects_9967033c8f302e0fe6713f7f5af3f933 = MAKE_CODE_OBJECT(module_filename_obj, 7467, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[166], mod_consts[166], NULL, NULL, 0, 0, 0);
    code_objects_4514d47970819e19bf2700062a027f1c = MAKE_CODE_OBJECT(module_filename_obj, 7572, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[167], mod_consts[167], NULL, NULL, 0, 0, 0);
    code_objects_52ea85277e5802d6f9741747a11c8e66 = MAKE_CODE_OBJECT(module_filename_obj, 7677, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    code_objects_6029d340e1bbd6eb2551cdaaa1470e3d = MAKE_CODE_OBJECT(module_filename_obj, 7782, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[169], mod_consts[169], NULL, NULL, 0, 0, 0);
    code_objects_78732af854ec65fa6c6ff4b702a8dac3 = MAKE_CODE_OBJECT(module_filename_obj, 7887, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[170], mod_consts[170], NULL, NULL, 0, 0, 0);
    code_objects_27d6c4870c5858a9d050f2dc049b4199 = MAKE_CODE_OBJECT(module_filename_obj, 7992, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[171], mod_consts[171], NULL, NULL, 0, 0, 0);
    code_objects_2cd17d7defd8100bd474b0eec4873ad6 = MAKE_CODE_OBJECT(module_filename_obj, 8097, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[172], mod_consts[172], NULL, NULL, 0, 0, 0);
    code_objects_2ff362385ed15b0d8498e4992096e100 = MAKE_CODE_OBJECT(module_filename_obj, 8202, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[173], mod_consts[173], NULL, NULL, 0, 0, 0);
    code_objects_9057561172bb29b9da06012405400d5f = MAKE_CODE_OBJECT(module_filename_obj, 8307, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[174], mod_consts[174], NULL, NULL, 0, 0, 0);
    code_objects_fea3fd3e56f9a679d137baf897f49ef0 = MAKE_CODE_OBJECT(module_filename_obj, 852, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[103], mod_consts[103], NULL, NULL, 0, 0, 0);
    code_objects_11c4c4cd6b0679032287f18d22306072 = MAKE_CODE_OBJECT(module_filename_obj, 8412, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    code_objects_3430c9556d43c7a87d6e581f8b464655 = MAKE_CODE_OBJECT(module_filename_obj, 8517, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[176], mod_consts[176], NULL, NULL, 0, 0, 0);
    code_objects_d4b2aa405e5e83dd7c58acc0999b9976 = MAKE_CODE_OBJECT(module_filename_obj, 957, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[104], mod_consts[104], NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__82__seg_81(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_idna$uts46data$$$function__1__seg_0(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__2__seg_1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__3__seg_2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__4__seg_3(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__5__seg_4(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__6__seg_5(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__7__seg_6(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__8__seg_7(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__9__seg_8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__10__seg_9(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__11__seg_10(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__12__seg_11(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__13__seg_12(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__14__seg_13(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__15__seg_14(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__16__seg_15(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__17__seg_16(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__18__seg_17(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__19__seg_18(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__20__seg_19(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__21__seg_20(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__22__seg_21(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__23__seg_22(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__24__seg_23(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__25__seg_24(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__26__seg_25(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__27__seg_26(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__28__seg_27(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__29__seg_28(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__30__seg_29(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__31__seg_30(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__32__seg_31(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__33__seg_32(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__34__seg_33(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[33]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__35__seg_34(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[34]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__36__seg_35(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__37__seg_36(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__38__seg_37(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__39__seg_38(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__40__seg_39(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[39]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__41__seg_40(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__42__seg_41(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__43__seg_42(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__44__seg_43(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[43]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__45__seg_44(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[44]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__46__seg_45(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[45]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__47__seg_46(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[46]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__48__seg_47(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[47]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__49__seg_48(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[48]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__50__seg_49(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[49]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__51__seg_50(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[50]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__52__seg_51(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[51]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__53__seg_52(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[52]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__54__seg_53(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[53]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__55__seg_54(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[54]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__56__seg_55(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[55]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__57__seg_56(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[56]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__58__seg_57(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[57]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__59__seg_58(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[58]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__60__seg_59(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[59]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__61__seg_60(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[60]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__62__seg_61(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[61]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__63__seg_62(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[62]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__64__seg_63(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[63]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__65__seg_64(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[64]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__66__seg_65(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[65]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__67__seg_66(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[66]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__68__seg_67(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[67]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__69__seg_68(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[68]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__70__seg_69(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[69]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__71__seg_70(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[70]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__72__seg_71(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[71]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__73__seg_72(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[72]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__74__seg_73(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[73]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__75__seg_74(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[74]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__76__seg_75(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[75]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__77__seg_76(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[76]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__78__seg_77(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[77]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__79__seg_78(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[78]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__80__seg_79(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[79]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__81__seg_80(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[80]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_idna$uts46data$$$function__82__seg_81(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(tstate, mod_consts[81]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__10__seg_9,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d4b2aa405e5e83dd7c58acc0999b9976,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__11__seg_10,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8b5dfae7bc0868f5e4e346f98cc13337,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__12__seg_11,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2f6493c3986ec45027b6169df0f7eb80,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__13__seg_12,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fe3f77ccc2911ac9cfa9f207e123e3d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__14__seg_13,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1129e4b6fcc01249aee81f452016ccce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__15__seg_14,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_275f4e6e97f156a486981aa6e40152d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__16__seg_15,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1f1f79417f6e8a61bfc8ad680f375411,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__17__seg_16,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c8e40ae2ac95f9eb63e921b0d60084b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__18__seg_17,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_96876f498e301bb3e655efa6ca3fd53d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__19__seg_18,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9d8113997278ab88b2146a2598df91e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__1__seg_0,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_273de3dccc10279149bf257cb185be5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__20__seg_19,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_61dacbe73acdfdacfdaf8aa1478110e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__21__seg_20,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4b52a870f6218965fe958eb389eae15e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__22__seg_21,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e2a7b33053dba8637136a63f6b7fc97b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__23__seg_22,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_31bff45c9a82ec4bb18e492f5f57ceb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__24__seg_23,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_60f5f239ea254ceb74052acd0b33fbf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__25__seg_24,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_21b020d0ab4a2c845554d113bb5ebe95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__26__seg_25,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4dd3bcc67fdf32c36f4f78296cc70a4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__27__seg_26,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a56d9a298f371e41b7e6ddf08d7afd41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__28__seg_27,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5990544a7dc9de01765911b62f394ed3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__29__seg_28,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a2ae922a2ad692173b67315705c5e592,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__2__seg_1,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_74b23107d8f3b2c4d82953bef7d1f928,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__30__seg_29,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1da72246600f1badb65524f48757a2f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__31__seg_30,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e0dc57eaf15c499b43f7e51008764a52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__32__seg_31,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2028bb7a49569f62a3dde251faa3e86e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__33__seg_32,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_08aea06b6193816d14970ea3ead40b25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__34__seg_33,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_17c44e2b73f6817e4dd151fe60760600,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__35__seg_34,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_57bb9a2566943872f4e8021d171076c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__36__seg_35,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1f5a8c9653a0342182ea8ab18cc0888c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__37__seg_36,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_380a0a5e8dab2521c21ae53728aa36e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__38__seg_37,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f7c81e45b06ffe2bbe3910a8cfee9420,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__39__seg_38,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_42e3e460f15c8155ba13775df009e719,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__3__seg_2,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_71eb7b47451e5eef93a90cec3f3e0b5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__40__seg_39,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_18729c48efc8c281221aed4d9a144b2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__41__seg_40,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a1ae0f1792c030485e0937a8f40e2793,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__42__seg_41,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fb22e0858737a6da02c5bd8046cf1569,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__43__seg_42,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_41fbf384ff7642ad1d0eb638dfb1bef5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__44__seg_43,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f06375895ef62e26c19e63aac888ee2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__45__seg_44,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_66aa9b51722a4358d2b4ffc376a4db99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__46__seg_45,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3f10f2f96bc526007bc00c0dd8b3b85e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__47__seg_46,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_62de97a1e3136093f89697fe4849a352,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__48__seg_47,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_15b6000257b6b44ba3249447388a61c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__49__seg_48,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_66f1557169c34debfe274288e060c24d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__4__seg_3,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_545d0be71177252f044c24fb11d32972,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__50__seg_49,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_480ffd633f6be96ecd58ceb5bee8ab4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__51__seg_50,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_46e9b4bea86a30610f06b98376613b94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__52__seg_51,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d96f10cda82913847f5f732ee0556bcd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__53__seg_52,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0de6b6085e5d3efea575eaa3f1dbd3b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__54__seg_53,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7f6e2f3ff86d28348b8ddae5b56125eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__55__seg_54,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_55dc160d3b0a492d019f9b52858a0aa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__56__seg_55,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1fb7d86770c0470b64789f035021311c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__57__seg_56,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c22800a27a3dca024c3a25bdeb6f8493,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__58__seg_57,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ddb09504700bf6e10ca0f7d1ac5c4154,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__59__seg_58,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eef60a98c81d5a128a0386246a0890ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__5__seg_4,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c0133499f4fc2931637076507fcd4a20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__60__seg_59,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ab93ef4162ef5e2db0c69ee1599f5d64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__61__seg_60,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bdd7685cd52828ce019f86d98e42bc4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__62__seg_61,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5f46a343ccc3d5da9f2bb0d017b0ea9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__63__seg_62,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8b649f58f589e429619472a07fc4ee3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__64__seg_63,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a2bc2440cf3ccedb290f717d653ffcdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__65__seg_64,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_255443030c6cdd5f3f35cb59b23e7c6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__66__seg_65,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2edec0863396ebf81d7f557eff4f58f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__67__seg_66,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3b0cc2f13ae4e16fb2702f7c5926968f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__68__seg_67,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aaaf1a603463d9f303457788a146aa2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__69__seg_68,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9531737a2f548dd931fb4dc812977879,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__6__seg_5,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bc27b20c83509079bc8f464bbac01539,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__70__seg_69,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27c0b5e3d003f5c0edcc88242282145f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__71__seg_70,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3064c2e148574618f48ad3d37645dd62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__72__seg_71,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9967033c8f302e0fe6713f7f5af3f933,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__73__seg_72,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4514d47970819e19bf2700062a027f1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__74__seg_73,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_52ea85277e5802d6f9741747a11c8e66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__75__seg_74,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6029d340e1bbd6eb2551cdaaa1470e3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__76__seg_75,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_78732af854ec65fa6c6ff4b702a8dac3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__77__seg_76,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27d6c4870c5858a9d050f2dc049b4199,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__78__seg_77,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2cd17d7defd8100bd474b0eec4873ad6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__79__seg_78,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2ff362385ed15b0d8498e4992096e100,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__7__seg_6,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_30f0d2fbddf03a9b8956139171cb9a02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__80__seg_79,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9057561172bb29b9da06012405400d5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__81__seg_80,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_11c4c4cd6b0679032287f18d22306072,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__82__seg_81(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__82__seg_81,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3430c9556d43c7a87d6e581f8b464655,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__8__seg_7,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a4f2d88056ea4d3eec86f1c2c8bb083a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_idna$uts46data$$$function__9__seg_8,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fea3fd3e56f9a679d137baf897f49ef0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_idna$uts46data,
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

static function_impl_code const function_table_idna$uts46data[] = {
    impl_idna$uts46data$$$function__1__seg_0,
    impl_idna$uts46data$$$function__2__seg_1,
    impl_idna$uts46data$$$function__3__seg_2,
    impl_idna$uts46data$$$function__4__seg_3,
    impl_idna$uts46data$$$function__5__seg_4,
    impl_idna$uts46data$$$function__6__seg_5,
    impl_idna$uts46data$$$function__7__seg_6,
    impl_idna$uts46data$$$function__8__seg_7,
    impl_idna$uts46data$$$function__9__seg_8,
    impl_idna$uts46data$$$function__10__seg_9,
    impl_idna$uts46data$$$function__11__seg_10,
    impl_idna$uts46data$$$function__12__seg_11,
    impl_idna$uts46data$$$function__13__seg_12,
    impl_idna$uts46data$$$function__14__seg_13,
    impl_idna$uts46data$$$function__15__seg_14,
    impl_idna$uts46data$$$function__16__seg_15,
    impl_idna$uts46data$$$function__17__seg_16,
    impl_idna$uts46data$$$function__18__seg_17,
    impl_idna$uts46data$$$function__19__seg_18,
    impl_idna$uts46data$$$function__20__seg_19,
    impl_idna$uts46data$$$function__21__seg_20,
    impl_idna$uts46data$$$function__22__seg_21,
    impl_idna$uts46data$$$function__23__seg_22,
    impl_idna$uts46data$$$function__24__seg_23,
    impl_idna$uts46data$$$function__25__seg_24,
    impl_idna$uts46data$$$function__26__seg_25,
    impl_idna$uts46data$$$function__27__seg_26,
    impl_idna$uts46data$$$function__28__seg_27,
    impl_idna$uts46data$$$function__29__seg_28,
    impl_idna$uts46data$$$function__30__seg_29,
    impl_idna$uts46data$$$function__31__seg_30,
    impl_idna$uts46data$$$function__32__seg_31,
    impl_idna$uts46data$$$function__33__seg_32,
    impl_idna$uts46data$$$function__34__seg_33,
    impl_idna$uts46data$$$function__35__seg_34,
    impl_idna$uts46data$$$function__36__seg_35,
    impl_idna$uts46data$$$function__37__seg_36,
    impl_idna$uts46data$$$function__38__seg_37,
    impl_idna$uts46data$$$function__39__seg_38,
    impl_idna$uts46data$$$function__40__seg_39,
    impl_idna$uts46data$$$function__41__seg_40,
    impl_idna$uts46data$$$function__42__seg_41,
    impl_idna$uts46data$$$function__43__seg_42,
    impl_idna$uts46data$$$function__44__seg_43,
    impl_idna$uts46data$$$function__45__seg_44,
    impl_idna$uts46data$$$function__46__seg_45,
    impl_idna$uts46data$$$function__47__seg_46,
    impl_idna$uts46data$$$function__48__seg_47,
    impl_idna$uts46data$$$function__49__seg_48,
    impl_idna$uts46data$$$function__50__seg_49,
    impl_idna$uts46data$$$function__51__seg_50,
    impl_idna$uts46data$$$function__52__seg_51,
    impl_idna$uts46data$$$function__53__seg_52,
    impl_idna$uts46data$$$function__54__seg_53,
    impl_idna$uts46data$$$function__55__seg_54,
    impl_idna$uts46data$$$function__56__seg_55,
    impl_idna$uts46data$$$function__57__seg_56,
    impl_idna$uts46data$$$function__58__seg_57,
    impl_idna$uts46data$$$function__59__seg_58,
    impl_idna$uts46data$$$function__60__seg_59,
    impl_idna$uts46data$$$function__61__seg_60,
    impl_idna$uts46data$$$function__62__seg_61,
    impl_idna$uts46data$$$function__63__seg_62,
    impl_idna$uts46data$$$function__64__seg_63,
    impl_idna$uts46data$$$function__65__seg_64,
    impl_idna$uts46data$$$function__66__seg_65,
    impl_idna$uts46data$$$function__67__seg_66,
    impl_idna$uts46data$$$function__68__seg_67,
    impl_idna$uts46data$$$function__69__seg_68,
    impl_idna$uts46data$$$function__70__seg_69,
    impl_idna$uts46data$$$function__71__seg_70,
    impl_idna$uts46data$$$function__72__seg_71,
    impl_idna$uts46data$$$function__73__seg_72,
    impl_idna$uts46data$$$function__74__seg_73,
    impl_idna$uts46data$$$function__75__seg_74,
    impl_idna$uts46data$$$function__76__seg_75,
    impl_idna$uts46data$$$function__77__seg_76,
    impl_idna$uts46data$$$function__78__seg_77,
    impl_idna$uts46data$$$function__79__seg_78,
    impl_idna$uts46data$$$function__80__seg_79,
    impl_idna$uts46data$$$function__81__seg_80,
    impl_idna$uts46data$$$function__82__seg_81,
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

    return Nuitka_Function_GetFunctionState(function, function_table_idna$uts46data);
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
        module_idna$uts46data,
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
        function_table_idna$uts46data,
        sizeof(function_table_idna$uts46data) / sizeof(function_impl_code)
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
static char const *module_full_name = "idna.uts46data";
#endif

// Internal entry point for module code.
PyObject *modulecode_idna$uts46data(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("idna$uts46data");

    // Store the module for future use.
    module_idna$uts46data = module;

    moduledict_idna$uts46data = MODULE_DICT(module_idna$uts46data);

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
        PRINT_STRING("idna$uts46data: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("idna$uts46data: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("idna$uts46data: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "idna.uts46data" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initidna$uts46data\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_idna$uts46data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[180]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_idna$uts46data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_idna$uts46data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_idna$uts46data);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_idna$uts46data);
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

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_frame_idna$uts46data;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_2);
    }
    frame_frame_idna$uts46data = MAKE_MODULE_FRAME(code_objects_fa4f66aca789f478bf7f164a7df1fb60, module_idna$uts46data);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_idna$uts46data);
    assert(Py_REFCNT(frame_frame_idna$uts46data) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_idna$$36$uts46data$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_idna$$36$uts46data$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[87],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[87]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[88],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[88]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_idna$uts46data,
                mod_consts[89],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[89]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_dict_key_1 = mod_consts[92];
        tmp_expression_value_1 = module_var_accessor_idna$$36$uts46data$List(tstate);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_expression_value_2 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_3 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        assert(!(tmp_expression_value_3 == NULL));
        tmp_subscript_value_3 = mod_consts[93];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 12;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = mod_consts[94];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 12;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_9 = MAKE_FUNCTION_idna$uts46data$$$function__1__seg_0(tstate, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        tmp_dict_key_2 = mod_consts[92];
        tmp_expression_value_5 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[93];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_2);
            tmp_expression_value_8 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_8 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 117;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_8 = mod_consts[94];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 117;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_subscript_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_10 = MAKE_FUNCTION_idna$uts46data$$$function__2__seg_1(tstate, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_3 = mod_consts[92];
        tmp_expression_value_9 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[93];
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_3);
            tmp_expression_value_12 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_12 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 222;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_12 = mod_consts[94];
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 222;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_subscript_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_11 = MAKE_FUNCTION_idna$uts46data$$$function__3__seg_2(tstate, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_15;
        tmp_dict_key_4 = mod_consts[92];
        tmp_expression_value_13 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[93];
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_4);
            tmp_expression_value_16 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_16 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 327;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_16 = mod_consts[94];
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 327;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_subscript_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_12 = MAKE_FUNCTION_idna$uts46data$$$function__4__seg_3(tstate, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_19;
        tmp_dict_key_5 = mod_consts[92];
        tmp_expression_value_17 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = mod_consts[93];
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_20;
            PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_5);
            tmp_expression_value_20 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_20 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 432;

                goto tuple_build_exception_5;
            }
            tmp_subscript_value_20 = mod_consts[94];
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 432;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_subscript_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_13 = MAKE_FUNCTION_idna$uts46data$$$function__5__seg_4(tstate, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_23;
        tmp_dict_key_6 = mod_consts[92];
        tmp_expression_value_21 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[93];
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_24;
            PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_6);
            tmp_expression_value_24 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_24 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 537;

                goto tuple_build_exception_6;
            }
            tmp_subscript_value_24 = mod_consts[94];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_24);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 537;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_subscript_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_idna$uts46data$$$function__6__seg_5(tstate, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_27;
        tmp_dict_key_7 = mod_consts[92];
        tmp_expression_value_25 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = mod_consts[93];
        tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_28;
            PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_7);
            tmp_expression_value_28 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_28 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 642;

                goto tuple_build_exception_7;
            }
            tmp_subscript_value_28 = mod_consts[94];
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 642;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_subscript_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_26);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_subscript_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 642;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_15 = MAKE_FUNCTION_idna$uts46data$$$function__7__seg_6(tstate, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_31;
        tmp_dict_key_8 = mod_consts[92];
        tmp_expression_value_29 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 747;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 747;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 747;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_31 = mod_consts[93];
        tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_31);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 747;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_32;
            PyTuple_SET_ITEM(tmp_subscript_value_30, 0, tmp_tuple_element_8);
            tmp_expression_value_32 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_32 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 747;

                goto tuple_build_exception_8;
            }
            tmp_subscript_value_32 = mod_consts[94];
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_32);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 747;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_30, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_subscript_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_subscript_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 747;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 747;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_16 = MAKE_FUNCTION_idna$uts46data$$$function__8__seg_7(tstate, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_35;
        tmp_dict_key_9 = mod_consts[92];
        tmp_expression_value_33 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_35 = mod_consts[93];
        tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_35);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_36;
            PyTuple_SET_ITEM(tmp_subscript_value_34, 0, tmp_tuple_element_9);
            tmp_expression_value_36 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_36 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 852;

                goto tuple_build_exception_9;
            }
            tmp_subscript_value_36 = mod_consts[94];
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_36);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 852;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_34);
        Py_DECREF(tmp_subscript_value_34);
        if (tmp_subscript_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_33);
        Py_DECREF(tmp_subscript_value_33);
        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 852;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_idna$uts46data$$$function__9__seg_8(tstate, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_38;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_39;
        tmp_dict_key_10 = mod_consts[92];
        tmp_expression_value_37 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_39 = mod_consts[93];
        tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_39);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_40;
            PyTuple_SET_ITEM(tmp_subscript_value_38, 0, tmp_tuple_element_10);
            tmp_expression_value_40 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_40 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 957;

                goto tuple_build_exception_10;
            }
            tmp_subscript_value_40 = mod_consts[94];
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_40);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 957;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_38, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_subscript_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_subscript_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_38);
        Py_DECREF(tmp_subscript_value_38);
        if (tmp_subscript_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_37);
        Py_DECREF(tmp_subscript_value_37);
        if (tmp_dict_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 957;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_idna$uts46data$$$function__10__seg_9(tstate, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_43;
        tmp_dict_key_11 = mod_consts[92];
        tmp_expression_value_41 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_43 = mod_consts[93];
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_43);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_44;
            PyTuple_SET_ITEM(tmp_subscript_value_42, 0, tmp_tuple_element_11);
            tmp_expression_value_44 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_44 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1062;

                goto tuple_build_exception_11;
            }
            tmp_subscript_value_44 = mod_consts[94];
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_44);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1062;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_42, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_subscript_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_42);
        Py_DECREF(tmp_subscript_value_42);
        if (tmp_subscript_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_41);
        Py_DECREF(tmp_subscript_value_41);
        if (tmp_dict_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1062;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_19 = MAKE_FUNCTION_idna$uts46data$$$function__11__seg_10(tstate, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_47;
        tmp_dict_key_12 = mod_consts[92];
        tmp_expression_value_45 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_46 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_47 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1167;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_47 = mod_consts[93];
        tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_47);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1167;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_48;
            PyTuple_SET_ITEM(tmp_subscript_value_46, 0, tmp_tuple_element_12);
            tmp_expression_value_48 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_48 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1167;

                goto tuple_build_exception_12;
            }
            tmp_subscript_value_48 = mod_consts[94];
            tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_48);
            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1167;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_46, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_subscript_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_subscript_value_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_46);
        Py_DECREF(tmp_subscript_value_46);
        if (tmp_subscript_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1167;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_45);
        Py_DECREF(tmp_subscript_value_45);
        if (tmp_dict_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1167;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_idna$uts46data$$$function__12__seg_11(tstate, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_51;
        tmp_dict_key_13 = mod_consts[92];
        tmp_expression_value_49 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_49 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_50 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_50 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_51 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_51 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_51 = mod_consts[93];
        tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_51);
        if (tmp_tuple_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_50 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_52;
            PyTuple_SET_ITEM(tmp_subscript_value_50, 0, tmp_tuple_element_13);
            tmp_expression_value_52 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_52 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1272;

                goto tuple_build_exception_13;
            }
            tmp_subscript_value_52 = mod_consts[94];
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_52);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1272;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_50, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_subscript_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_subscript_value_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_50);
        Py_DECREF(tmp_subscript_value_50);
        if (tmp_subscript_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_49);
        Py_DECREF(tmp_subscript_value_49);
        if (tmp_dict_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1272;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_idna$uts46data$$$function__13__seg_12(tstate, tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_55;
        tmp_dict_key_14 = mod_consts[92];
        tmp_expression_value_53 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_54 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_55 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_55 = mod_consts[93];
        tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_55);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_54 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_56;
            PyTuple_SET_ITEM(tmp_subscript_value_54, 0, tmp_tuple_element_14);
            tmp_expression_value_56 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_56 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1377;

                goto tuple_build_exception_14;
            }
            tmp_subscript_value_56 = mod_consts[94];
            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_56);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1377;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_54, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_subscript_value_54);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_subscript_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_54);
        Py_DECREF(tmp_subscript_value_54);
        if (tmp_subscript_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_53);
        Py_DECREF(tmp_subscript_value_53);
        if (tmp_dict_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_idna$uts46data$$$function__14__seg_13(tstate, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_58;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_59;
        tmp_dict_key_15 = mod_consts[92];
        tmp_expression_value_57 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_58 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_59 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_59 = mod_consts[93];
        tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_59);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_58 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_60;
            PyTuple_SET_ITEM(tmp_subscript_value_58, 0, tmp_tuple_element_15);
            tmp_expression_value_60 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_60 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1482;

                goto tuple_build_exception_15;
            }
            tmp_subscript_value_60 = mod_consts[94];
            tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_60);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1482;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_58, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_subscript_value_58);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_subscript_value_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_58);
        Py_DECREF(tmp_subscript_value_58);
        if (tmp_subscript_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_57);
        Py_DECREF(tmp_subscript_value_57);
        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1482;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_23 = MAKE_FUNCTION_idna$uts46data$$$function__15__seg_14(tstate, tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_62;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_63;
        tmp_dict_key_16 = mod_consts[92];
        tmp_expression_value_61 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1587;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_62 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1587;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_63 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_63 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1587;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_63 = mod_consts[93];
        tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_63);
        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1587;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_64;
            PyTuple_SET_ITEM(tmp_subscript_value_62, 0, tmp_tuple_element_16);
            tmp_expression_value_64 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_64 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1587;

                goto tuple_build_exception_16;
            }
            tmp_subscript_value_64 = mod_consts[94];
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_64);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1587;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_62, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_subscript_value_62);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_subscript_value_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_62);
        Py_DECREF(tmp_subscript_value_62);
        if (tmp_subscript_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1587;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_61);
        Py_DECREF(tmp_subscript_value_61);
        if (tmp_dict_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1587;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));


        tmp_assign_source_24 = MAKE_FUNCTION_idna$uts46data$$$function__16__seg_15(tstate, tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_65;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_66;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_67;
        tmp_dict_key_17 = mod_consts[92];
        tmp_expression_value_65 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1692;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_66 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1692;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_67 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1692;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_67 = mod_consts[93];
        tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_67);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1692;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_66 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_68;
            PyTuple_SET_ITEM(tmp_subscript_value_66, 0, tmp_tuple_element_17);
            tmp_expression_value_68 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_68 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1692;

                goto tuple_build_exception_17;
            }
            tmp_subscript_value_68 = mod_consts[94];
            tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_68);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1692;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_66, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_subscript_value_66);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_subscript_value_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_66);
        Py_DECREF(tmp_subscript_value_66);
        if (tmp_subscript_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1692;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_65);
        Py_DECREF(tmp_subscript_value_65);
        if (tmp_dict_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1692;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_idna$uts46data$$$function__17__seg_16(tstate, tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_70;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_subscript_value_71;
        tmp_dict_key_18 = mod_consts[92];
        tmp_expression_value_69 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1797;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_70 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_70 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1797;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1797;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_71 = mod_consts[93];
        tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_71);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1797;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_70 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_72;
            PyTuple_SET_ITEM(tmp_subscript_value_70, 0, tmp_tuple_element_18);
            tmp_expression_value_72 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_72 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1797;

                goto tuple_build_exception_18;
            }
            tmp_subscript_value_72 = mod_consts[94];
            tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_72);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1797;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_70, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_subscript_value_70);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_subscript_value_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_70);
        Py_DECREF(tmp_subscript_value_70);
        if (tmp_subscript_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1797;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_69);
        Py_DECREF(tmp_subscript_value_69);
        if (tmp_dict_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1797;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_idna$uts46data$$$function__18__seg_17(tstate, tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_73;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_74;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_75;
        tmp_dict_key_19 = mod_consts[92];
        tmp_expression_value_73 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_74 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_74 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_75 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_75 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_75 = mod_consts[93];
        tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_75);
        if (tmp_tuple_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_74 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_76;
            PyTuple_SET_ITEM(tmp_subscript_value_74, 0, tmp_tuple_element_19);
            tmp_expression_value_76 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_76 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 1902;

                goto tuple_build_exception_19;
            }
            tmp_subscript_value_76 = mod_consts[94];
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_76);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1902;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_74, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_subscript_value_74);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_subscript_value_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_74);
        Py_DECREF(tmp_subscript_value_74);
        if (tmp_subscript_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_73);
        Py_DECREF(tmp_subscript_value_73);
        if (tmp_dict_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_idna$uts46data$$$function__19__seg_18(tstate, tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_subscript_value_77;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_subscript_value_78;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_79;
        tmp_dict_key_20 = mod_consts[92];
        tmp_expression_value_77 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_77 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2007;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_78 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_78 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2007;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_79 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2007;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_79 = mod_consts[93];
        tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_79);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2007;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_78 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_subscript_value_80;
            PyTuple_SET_ITEM(tmp_subscript_value_78, 0, tmp_tuple_element_20);
            tmp_expression_value_80 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_80 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2007;

                goto tuple_build_exception_20;
            }
            tmp_subscript_value_80 = mod_consts[94];
            tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_80);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2007;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_78, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_subscript_value_78);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_subscript_value_77 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_78);
        Py_DECREF(tmp_subscript_value_78);
        if (tmp_subscript_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2007;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_77);
        Py_DECREF(tmp_subscript_value_77);
        if (tmp_dict_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2007;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
        Py_DECREF(tmp_dict_value_20);
        assert(!(tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_idna$uts46data$$$function__20__seg_19(tstate, tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_81;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_82;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_83;
        tmp_dict_key_21 = mod_consts[92];
        tmp_expression_value_81 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_81 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2112;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_82 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2112;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_83 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2112;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_83 = mod_consts[93];
        tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_83);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2112;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_82 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_84;
            PyTuple_SET_ITEM(tmp_subscript_value_82, 0, tmp_tuple_element_21);
            tmp_expression_value_84 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_84 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2112;

                goto tuple_build_exception_21;
            }
            tmp_subscript_value_84 = mod_consts[94];
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_84);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2112;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_82, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_subscript_value_82);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_subscript_value_81 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_82);
        Py_DECREF(tmp_subscript_value_82);
        if (tmp_subscript_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2112;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_81);
        Py_DECREF(tmp_subscript_value_81);
        if (tmp_dict_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2112;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_assign_source_29 = MAKE_FUNCTION_idna$uts46data$$$function__21__seg_20(tstate, tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_86;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_87;
        tmp_dict_key_22 = mod_consts[92];
        tmp_expression_value_85 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_85 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_86 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2217;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_87 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2217;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_87 = mod_consts[93];
        tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_87);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2217;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_86 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_88;
            PyObject *tmp_subscript_value_88;
            PyTuple_SET_ITEM(tmp_subscript_value_86, 0, tmp_tuple_element_22);
            tmp_expression_value_88 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_88 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2217;

                goto tuple_build_exception_22;
            }
            tmp_subscript_value_88 = mod_consts[94];
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_88, tmp_subscript_value_88);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2217;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_86, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_subscript_value_86);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_subscript_value_85 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_86);
        Py_DECREF(tmp_subscript_value_86);
        if (tmp_subscript_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2217;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_85);
        Py_DECREF(tmp_subscript_value_85);
        if (tmp_dict_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2217;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));


        tmp_assign_source_30 = MAKE_FUNCTION_idna$uts46data$$$function__22__seg_21(tstate, tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_90;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_91;
        tmp_dict_key_23 = mod_consts[92];
        tmp_expression_value_89 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_89 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_90 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_91 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_91 = mod_consts[93];
        tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_91, tmp_subscript_value_91);
        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_90 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_92;
            PyTuple_SET_ITEM(tmp_subscript_value_90, 0, tmp_tuple_element_23);
            tmp_expression_value_92 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_92 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2322;

                goto tuple_build_exception_23;
            }
            tmp_subscript_value_92 = mod_consts[94];
            tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_92);
            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2322;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_90, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_subscript_value_90);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_subscript_value_89 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_90);
        Py_DECREF(tmp_subscript_value_90);
        if (tmp_subscript_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_89);
        Py_DECREF(tmp_subscript_value_89);
        if (tmp_dict_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
        Py_DECREF(tmp_dict_value_23);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_idna$uts46data$$$function__23__seg_22(tstate, tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_94;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_95;
        tmp_dict_key_24 = mod_consts[92];
        tmp_expression_value_93 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_93 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_94 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2427;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_95 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_95 = mod_consts[93];
        tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_95);
        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2427;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_94 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_subscript_value_96;
            PyTuple_SET_ITEM(tmp_subscript_value_94, 0, tmp_tuple_element_24);
            tmp_expression_value_96 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_96 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2427;

                goto tuple_build_exception_24;
            }
            tmp_subscript_value_96 = mod_consts[94];
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_96);
            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2427;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_94, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_subscript_value_94);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_subscript_value_93 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_94);
        Py_DECREF(tmp_subscript_value_94);
        if (tmp_subscript_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2427;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_93);
        Py_DECREF(tmp_subscript_value_93);
        if (tmp_dict_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2427;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));


        tmp_assign_source_32 = MAKE_FUNCTION_idna$uts46data$$$function__24__seg_23(tstate, tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_subscript_value_98;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_99;
        tmp_dict_key_25 = mod_consts[92];
        tmp_expression_value_97 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_97 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2532;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_98 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2532;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_99 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2532;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_99 = mod_consts[93];
        tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_99);
        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2532;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_98 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_subscript_value_100;
            PyTuple_SET_ITEM(tmp_subscript_value_98, 0, tmp_tuple_element_25);
            tmp_expression_value_100 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_100 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2532;

                goto tuple_build_exception_25;
            }
            tmp_subscript_value_100 = mod_consts[94];
            tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_100, tmp_subscript_value_100);
            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2532;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_98, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_subscript_value_98);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_subscript_value_97 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_98, tmp_subscript_value_98);
        Py_DECREF(tmp_subscript_value_98);
        if (tmp_subscript_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2532;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_97, tmp_subscript_value_97);
        Py_DECREF(tmp_subscript_value_97);
        if (tmp_dict_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2532;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
        Py_DECREF(tmp_dict_value_25);
        assert(!(tmp_res != 0));


        tmp_assign_source_33 = MAKE_FUNCTION_idna$uts46data$$$function__25__seg_24(tstate, tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_26;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_102;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_103;
        tmp_dict_key_26 = mod_consts[92];
        tmp_expression_value_101 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_101 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2637;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_102 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2637;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_103 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2637;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_103 = mod_consts[93];
        tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_103);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2637;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_102 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_104;
            PyObject *tmp_subscript_value_104;
            PyTuple_SET_ITEM(tmp_subscript_value_102, 0, tmp_tuple_element_26);
            tmp_expression_value_104 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_104 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2637;

                goto tuple_build_exception_26;
            }
            tmp_subscript_value_104 = mod_consts[94];
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_104, tmp_subscript_value_104);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2637;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_102, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_subscript_value_102);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_subscript_value_101 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_102, tmp_subscript_value_102);
        Py_DECREF(tmp_subscript_value_102);
        if (tmp_subscript_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2637;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_101, tmp_subscript_value_101);
        Py_DECREF(tmp_subscript_value_101);
        if (tmp_dict_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2637;

            goto frame_exception_exit_1;
        }
        tmp_annotations_26 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
        Py_DECREF(tmp_dict_value_26);
        assert(!(tmp_res != 0));


        tmp_assign_source_34 = MAKE_FUNCTION_idna$uts46data$$$function__26__seg_25(tstate, tmp_annotations_26);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_27;
        PyObject *tmp_dict_key_27;
        PyObject *tmp_dict_value_27;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_105;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_subscript_value_106;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_subscript_value_107;
        tmp_dict_key_27 = mod_consts[92];
        tmp_expression_value_105 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_105 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2742;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_106 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2742;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_107 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2742;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_107 = mod_consts[93];
        tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_107, tmp_subscript_value_107);
        if (tmp_tuple_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2742;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_106 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_subscript_value_108;
            PyTuple_SET_ITEM(tmp_subscript_value_106, 0, tmp_tuple_element_27);
            tmp_expression_value_108 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_108 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2742;

                goto tuple_build_exception_27;
            }
            tmp_subscript_value_108 = mod_consts[94];
            tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_108, tmp_subscript_value_108);
            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2742;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_106, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_27;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_subscript_value_106);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_27:;
        tmp_subscript_value_105 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_106, tmp_subscript_value_106);
        Py_DECREF(tmp_subscript_value_106);
        if (tmp_subscript_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2742;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_105);
        Py_DECREF(tmp_subscript_value_105);
        if (tmp_dict_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2742;

            goto frame_exception_exit_1;
        }
        tmp_annotations_27 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
        Py_DECREF(tmp_dict_value_27);
        assert(!(tmp_res != 0));


        tmp_assign_source_35 = MAKE_FUNCTION_idna$uts46data$$$function__27__seg_26(tstate, tmp_annotations_27);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_28;
        PyObject *tmp_dict_key_28;
        PyObject *tmp_dict_value_28;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_109;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_subscript_value_110;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_subscript_value_111;
        tmp_dict_key_28 = mod_consts[92];
        tmp_expression_value_109 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_109 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_110 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_111 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_111 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_111 = mod_consts[93];
        tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_111, tmp_subscript_value_111);
        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_110 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_112;
            PyObject *tmp_subscript_value_112;
            PyTuple_SET_ITEM(tmp_subscript_value_110, 0, tmp_tuple_element_28);
            tmp_expression_value_112 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_112 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2847;

                goto tuple_build_exception_28;
            }
            tmp_subscript_value_112 = mod_consts[94];
            tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_112, tmp_subscript_value_112);
            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2847;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_110, 1, tmp_tuple_element_28);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_28:;
        Py_DECREF(tmp_subscript_value_110);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_subscript_value_109 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_110, tmp_subscript_value_110);
        Py_DECREF(tmp_subscript_value_110);
        if (tmp_subscript_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_109, tmp_subscript_value_109);
        Py_DECREF(tmp_subscript_value_109);
        if (tmp_dict_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        tmp_annotations_28 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
        Py_DECREF(tmp_dict_value_28);
        assert(!(tmp_res != 0));


        tmp_assign_source_36 = MAKE_FUNCTION_idna$uts46data$$$function__28__seg_27(tstate, tmp_annotations_28);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_29;
        PyObject *tmp_dict_key_29;
        PyObject *tmp_dict_value_29;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_subscript_value_113;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_subscript_value_114;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_115;
        tmp_dict_key_29 = mod_consts[92];
        tmp_expression_value_113 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_113 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2952;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_114 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_114 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2952;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_115 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2952;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_115 = mod_consts[93];
        tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_115, tmp_subscript_value_115);
        if (tmp_tuple_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2952;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_114 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_116;
            PyObject *tmp_subscript_value_116;
            PyTuple_SET_ITEM(tmp_subscript_value_114, 0, tmp_tuple_element_29);
            tmp_expression_value_116 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_116 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 2952;

                goto tuple_build_exception_29;
            }
            tmp_subscript_value_116 = mod_consts[94];
            tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_116, tmp_subscript_value_116);
            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 2952;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_114, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_subscript_value_114);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_subscript_value_113 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_114, tmp_subscript_value_114);
        Py_DECREF(tmp_subscript_value_114);
        if (tmp_subscript_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2952;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_113, tmp_subscript_value_113);
        Py_DECREF(tmp_subscript_value_113);
        if (tmp_dict_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2952;

            goto frame_exception_exit_1;
        }
        tmp_annotations_29 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
        Py_DECREF(tmp_dict_value_29);
        assert(!(tmp_res != 0));


        tmp_assign_source_37 = MAKE_FUNCTION_idna$uts46data$$$function__29__seg_28(tstate, tmp_annotations_29);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_30;
        PyObject *tmp_dict_key_30;
        PyObject *tmp_dict_value_30;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_subscript_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_118;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_119;
        tmp_dict_key_30 = mod_consts[92];
        tmp_expression_value_117 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_117 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_118 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_118 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_119 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_119 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_119 = mod_consts[93];
        tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_119, tmp_subscript_value_119);
        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_118 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_subscript_value_120;
            PyTuple_SET_ITEM(tmp_subscript_value_118, 0, tmp_tuple_element_30);
            tmp_expression_value_120 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_120 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3057;

                goto tuple_build_exception_30;
            }
            tmp_subscript_value_120 = mod_consts[94];
            tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_120, tmp_subscript_value_120);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3057;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_118, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_subscript_value_118);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_subscript_value_117 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_118, tmp_subscript_value_118);
        Py_DECREF(tmp_subscript_value_118);
        if (tmp_subscript_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_117, tmp_subscript_value_117);
        Py_DECREF(tmp_subscript_value_117);
        if (tmp_dict_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        tmp_annotations_30 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
        Py_DECREF(tmp_dict_value_30);
        assert(!(tmp_res != 0));


        tmp_assign_source_38 = MAKE_FUNCTION_idna$uts46data$$$function__30__seg_29(tstate, tmp_annotations_30);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_31;
        PyObject *tmp_dict_value_31;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_121;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_subscript_value_122;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_subscript_value_123;
        tmp_dict_key_31 = mod_consts[92];
        tmp_expression_value_121 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_121 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_122 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_122 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_123 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_123 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3162;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_123 = mod_consts[93];
        tmp_tuple_element_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_123, tmp_subscript_value_123);
        if (tmp_tuple_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3162;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_122 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_124;
            PyObject *tmp_subscript_value_124;
            PyTuple_SET_ITEM(tmp_subscript_value_122, 0, tmp_tuple_element_31);
            tmp_expression_value_124 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_124 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_124 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3162;

                goto tuple_build_exception_31;
            }
            tmp_subscript_value_124 = mod_consts[94];
            tmp_tuple_element_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_124, tmp_subscript_value_124);
            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3162;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_122, 1, tmp_tuple_element_31);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_subscript_value_122);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_subscript_value_121 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_122, tmp_subscript_value_122);
        Py_DECREF(tmp_subscript_value_122);
        if (tmp_subscript_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3162;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_121, tmp_subscript_value_121);
        Py_DECREF(tmp_subscript_value_121);
        if (tmp_dict_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3162;

            goto frame_exception_exit_1;
        }
        tmp_annotations_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
        Py_DECREF(tmp_dict_value_31);
        assert(!(tmp_res != 0));


        tmp_assign_source_39 = MAKE_FUNCTION_idna$uts46data$$$function__31__seg_30(tstate, tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_32;
        PyObject *tmp_dict_key_32;
        PyObject *tmp_dict_value_32;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_subscript_value_125;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_126;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_127;
        tmp_dict_key_32 = mod_consts[92];
        tmp_expression_value_125 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_125 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3267;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_126 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_126 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3267;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_127 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_127 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3267;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_127 = mod_consts[93];
        tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_127, tmp_subscript_value_127);
        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3267;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_126 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_128;
            PyObject *tmp_subscript_value_128;
            PyTuple_SET_ITEM(tmp_subscript_value_126, 0, tmp_tuple_element_32);
            tmp_expression_value_128 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_128 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3267;

                goto tuple_build_exception_32;
            }
            tmp_subscript_value_128 = mod_consts[94];
            tmp_tuple_element_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_128, tmp_subscript_value_128);
            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3267;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_126, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_subscript_value_126);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_subscript_value_125 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_126, tmp_subscript_value_126);
        Py_DECREF(tmp_subscript_value_126);
        if (tmp_subscript_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3267;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_125, tmp_subscript_value_125);
        Py_DECREF(tmp_subscript_value_125);
        if (tmp_dict_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3267;

            goto frame_exception_exit_1;
        }
        tmp_annotations_32 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
        Py_DECREF(tmp_dict_value_32);
        assert(!(tmp_res != 0));


        tmp_assign_source_40 = MAKE_FUNCTION_idna$uts46data$$$function__32__seg_31(tstate, tmp_annotations_32);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_33;
        PyObject *tmp_dict_key_33;
        PyObject *tmp_dict_value_33;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_subscript_value_129;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_subscript_value_130;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_subscript_value_131;
        tmp_dict_key_33 = mod_consts[92];
        tmp_expression_value_129 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_129 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3372;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_130 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_130 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3372;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_131 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_131 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3372;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_131 = mod_consts[93];
        tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_131, tmp_subscript_value_131);
        if (tmp_tuple_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3372;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_130 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_subscript_value_132;
            PyTuple_SET_ITEM(tmp_subscript_value_130, 0, tmp_tuple_element_33);
            tmp_expression_value_132 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_132 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3372;

                goto tuple_build_exception_33;
            }
            tmp_subscript_value_132 = mod_consts[94];
            tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_132, tmp_subscript_value_132);
            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3372;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_130, 1, tmp_tuple_element_33);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_subscript_value_130);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_subscript_value_129 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_130, tmp_subscript_value_130);
        Py_DECREF(tmp_subscript_value_130);
        if (tmp_subscript_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3372;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_129, tmp_subscript_value_129);
        Py_DECREF(tmp_subscript_value_129);
        if (tmp_dict_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3372;

            goto frame_exception_exit_1;
        }
        tmp_annotations_33 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
        Py_DECREF(tmp_dict_value_33);
        assert(!(tmp_res != 0));


        tmp_assign_source_41 = MAKE_FUNCTION_idna$uts46data$$$function__33__seg_32(tstate, tmp_annotations_33);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_34;
        PyObject *tmp_dict_key_34;
        PyObject *tmp_dict_value_34;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_133;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_subscript_value_134;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_subscript_value_135;
        tmp_dict_key_34 = mod_consts[92];
        tmp_expression_value_133 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_133 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3477;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_134 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_134 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3477;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_135 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_135 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3477;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_135 = mod_consts[93];
        tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_135, tmp_subscript_value_135);
        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3477;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_134 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_136;
            PyObject *tmp_subscript_value_136;
            PyTuple_SET_ITEM(tmp_subscript_value_134, 0, tmp_tuple_element_34);
            tmp_expression_value_136 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_136 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_136 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3477;

                goto tuple_build_exception_34;
            }
            tmp_subscript_value_136 = mod_consts[94];
            tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_136, tmp_subscript_value_136);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3477;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_134, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_subscript_value_134);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_subscript_value_133 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_134, tmp_subscript_value_134);
        Py_DECREF(tmp_subscript_value_134);
        if (tmp_subscript_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3477;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_133, tmp_subscript_value_133);
        Py_DECREF(tmp_subscript_value_133);
        if (tmp_dict_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3477;

            goto frame_exception_exit_1;
        }
        tmp_annotations_34 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
        Py_DECREF(tmp_dict_value_34);
        assert(!(tmp_res != 0));


        tmp_assign_source_42 = MAKE_FUNCTION_idna$uts46data$$$function__34__seg_33(tstate, tmp_annotations_34);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_35;
        PyObject *tmp_dict_key_35;
        PyObject *tmp_dict_value_35;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_subscript_value_137;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_subscript_value_138;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_139;
        tmp_dict_key_35 = mod_consts[92];
        tmp_expression_value_137 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_137 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3582;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_138 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_138 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3582;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_139 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_139 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3582;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_139 = mod_consts[93];
        tmp_tuple_element_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_139, tmp_subscript_value_139);
        if (tmp_tuple_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3582;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_138 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_140;
            PyObject *tmp_subscript_value_140;
            PyTuple_SET_ITEM(tmp_subscript_value_138, 0, tmp_tuple_element_35);
            tmp_expression_value_140 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_140 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3582;

                goto tuple_build_exception_35;
            }
            tmp_subscript_value_140 = mod_consts[94];
            tmp_tuple_element_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_140, tmp_subscript_value_140);
            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3582;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_138, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_subscript_value_138);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_subscript_value_137 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_138, tmp_subscript_value_138);
        Py_DECREF(tmp_subscript_value_138);
        if (tmp_subscript_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3582;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_137, tmp_subscript_value_137);
        Py_DECREF(tmp_subscript_value_137);
        if (tmp_dict_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3582;

            goto frame_exception_exit_1;
        }
        tmp_annotations_35 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
        Py_DECREF(tmp_dict_value_35);
        assert(!(tmp_res != 0));


        tmp_assign_source_43 = MAKE_FUNCTION_idna$uts46data$$$function__35__seg_34(tstate, tmp_annotations_35);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_36;
        PyObject *tmp_dict_key_36;
        PyObject *tmp_dict_value_36;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_subscript_value_141;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_subscript_value_142;
        PyObject *tmp_tuple_element_36;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_subscript_value_143;
        tmp_dict_key_36 = mod_consts[92];
        tmp_expression_value_141 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_141 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3687;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_142 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_142 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3687;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_143 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_143 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3687;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_143 = mod_consts[93];
        tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_143, tmp_subscript_value_143);
        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3687;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_142 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_subscript_value_144;
            PyTuple_SET_ITEM(tmp_subscript_value_142, 0, tmp_tuple_element_36);
            tmp_expression_value_144 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_144 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3687;

                goto tuple_build_exception_36;
            }
            tmp_subscript_value_144 = mod_consts[94];
            tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_144, tmp_subscript_value_144);
            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3687;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_142, 1, tmp_tuple_element_36);
        }
        goto tuple_build_noexception_36;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_36:;
        Py_DECREF(tmp_subscript_value_142);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_36:;
        tmp_subscript_value_141 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_142, tmp_subscript_value_142);
        Py_DECREF(tmp_subscript_value_142);
        if (tmp_subscript_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3687;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_141, tmp_subscript_value_141);
        Py_DECREF(tmp_subscript_value_141);
        if (tmp_dict_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3687;

            goto frame_exception_exit_1;
        }
        tmp_annotations_36 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
        Py_DECREF(tmp_dict_value_36);
        assert(!(tmp_res != 0));


        tmp_assign_source_44 = MAKE_FUNCTION_idna$uts46data$$$function__36__seg_35(tstate, tmp_annotations_36);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_37;
        PyObject *tmp_dict_key_37;
        PyObject *tmp_dict_value_37;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_145;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_subscript_value_146;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_subscript_value_147;
        tmp_dict_key_37 = mod_consts[92];
        tmp_expression_value_145 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_145 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3792;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_146 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_146 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3792;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_147 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_147 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3792;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_147 = mod_consts[93];
        tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_147, tmp_subscript_value_147);
        if (tmp_tuple_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3792;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_146 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_148;
            PyObject *tmp_subscript_value_148;
            PyTuple_SET_ITEM(tmp_subscript_value_146, 0, tmp_tuple_element_37);
            tmp_expression_value_148 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_148 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3792;

                goto tuple_build_exception_37;
            }
            tmp_subscript_value_148 = mod_consts[94];
            tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_148, tmp_subscript_value_148);
            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3792;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_146, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_37;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_37:;
        Py_DECREF(tmp_subscript_value_146);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_37:;
        tmp_subscript_value_145 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_146, tmp_subscript_value_146);
        Py_DECREF(tmp_subscript_value_146);
        if (tmp_subscript_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3792;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_145, tmp_subscript_value_145);
        Py_DECREF(tmp_subscript_value_145);
        if (tmp_dict_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3792;

            goto frame_exception_exit_1;
        }
        tmp_annotations_37 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
        Py_DECREF(tmp_dict_value_37);
        assert(!(tmp_res != 0));


        tmp_assign_source_45 = MAKE_FUNCTION_idna$uts46data$$$function__37__seg_36(tstate, tmp_annotations_37);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_38;
        PyObject *tmp_dict_key_38;
        PyObject *tmp_dict_value_38;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_subscript_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_subscript_value_150;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_subscript_value_151;
        tmp_dict_key_38 = mod_consts[92];
        tmp_expression_value_149 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_149 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3897;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_150 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_150 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3897;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_151 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_151 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3897;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_151 = mod_consts[93];
        tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_151, tmp_subscript_value_151);
        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3897;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_150 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_152;
            PyObject *tmp_subscript_value_152;
            PyTuple_SET_ITEM(tmp_subscript_value_150, 0, tmp_tuple_element_38);
            tmp_expression_value_152 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_152 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 3897;

                goto tuple_build_exception_38;
            }
            tmp_subscript_value_152 = mod_consts[94];
            tmp_tuple_element_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_152, tmp_subscript_value_152);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3897;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_150, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_38;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_38:;
        Py_DECREF(tmp_subscript_value_150);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_38:;
        tmp_subscript_value_149 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_150, tmp_subscript_value_150);
        Py_DECREF(tmp_subscript_value_150);
        if (tmp_subscript_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3897;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_149, tmp_subscript_value_149);
        Py_DECREF(tmp_subscript_value_149);
        if (tmp_dict_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3897;

            goto frame_exception_exit_1;
        }
        tmp_annotations_38 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
        Py_DECREF(tmp_dict_value_38);
        assert(!(tmp_res != 0));


        tmp_assign_source_46 = MAKE_FUNCTION_idna$uts46data$$$function__38__seg_37(tstate, tmp_annotations_38);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_39;
        PyObject *tmp_dict_key_39;
        PyObject *tmp_dict_value_39;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_subscript_value_153;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_subscript_value_154;
        PyObject *tmp_tuple_element_39;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_subscript_value_155;
        tmp_dict_key_39 = mod_consts[92];
        tmp_expression_value_153 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_153 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4002;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_154 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_154 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4002;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_155 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_155 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4002;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_155 = mod_consts[93];
        tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_155, tmp_subscript_value_155);
        if (tmp_tuple_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4002;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_154 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_156;
            PyObject *tmp_subscript_value_156;
            PyTuple_SET_ITEM(tmp_subscript_value_154, 0, tmp_tuple_element_39);
            tmp_expression_value_156 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_156 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_156 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4002;

                goto tuple_build_exception_39;
            }
            tmp_subscript_value_156 = mod_consts[94];
            tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_156, tmp_subscript_value_156);
            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4002;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_154, 1, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_39;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_39:;
        Py_DECREF(tmp_subscript_value_154);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_39:;
        tmp_subscript_value_153 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_154, tmp_subscript_value_154);
        Py_DECREF(tmp_subscript_value_154);
        if (tmp_subscript_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4002;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_153, tmp_subscript_value_153);
        Py_DECREF(tmp_subscript_value_153);
        if (tmp_dict_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4002;

            goto frame_exception_exit_1;
        }
        tmp_annotations_39 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
        Py_DECREF(tmp_dict_value_39);
        assert(!(tmp_res != 0));


        tmp_assign_source_47 = MAKE_FUNCTION_idna$uts46data$$$function__39__seg_38(tstate, tmp_annotations_39);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_40;
        PyObject *tmp_dict_key_40;
        PyObject *tmp_dict_value_40;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_subscript_value_157;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_subscript_value_158;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_subscript_value_159;
        tmp_dict_key_40 = mod_consts[92];
        tmp_expression_value_157 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_157 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_157 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_158 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4107;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_159 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_159 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_159 = mod_consts[93];
        tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_159, tmp_subscript_value_159);
        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4107;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_158 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_160;
            PyObject *tmp_subscript_value_160;
            PyTuple_SET_ITEM(tmp_subscript_value_158, 0, tmp_tuple_element_40);
            tmp_expression_value_160 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_160 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4107;

                goto tuple_build_exception_40;
            }
            tmp_subscript_value_160 = mod_consts[94];
            tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_160, tmp_subscript_value_160);
            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4107;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_158, 1, tmp_tuple_element_40);
        }
        goto tuple_build_noexception_40;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_40:;
        Py_DECREF(tmp_subscript_value_158);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_40:;
        tmp_subscript_value_157 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_158, tmp_subscript_value_158);
        Py_DECREF(tmp_subscript_value_158);
        if (tmp_subscript_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4107;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_157, tmp_subscript_value_157);
        Py_DECREF(tmp_subscript_value_157);
        if (tmp_dict_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4107;

            goto frame_exception_exit_1;
        }
        tmp_annotations_40 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
        Py_DECREF(tmp_dict_value_40);
        assert(!(tmp_res != 0));


        tmp_assign_source_48 = MAKE_FUNCTION_idna$uts46data$$$function__40__seg_39(tstate, tmp_annotations_40);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_annotations_41;
        PyObject *tmp_dict_key_41;
        PyObject *tmp_dict_value_41;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_subscript_value_161;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_subscript_value_162;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_subscript_value_163;
        tmp_dict_key_41 = mod_consts[92];
        tmp_expression_value_161 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_161 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_162 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_162 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_163 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_163 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_163 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4212;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_163 = mod_consts[93];
        tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_163, tmp_subscript_value_163);
        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4212;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_162 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_164;
            PyObject *tmp_subscript_value_164;
            PyTuple_SET_ITEM(tmp_subscript_value_162, 0, tmp_tuple_element_41);
            tmp_expression_value_164 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_164 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_164 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4212;

                goto tuple_build_exception_41;
            }
            tmp_subscript_value_164 = mod_consts[94];
            tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_164, tmp_subscript_value_164);
            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4212;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_162, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_41;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_41:;
        Py_DECREF(tmp_subscript_value_162);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_41:;
        tmp_subscript_value_161 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_162, tmp_subscript_value_162);
        Py_DECREF(tmp_subscript_value_162);
        if (tmp_subscript_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4212;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_161, tmp_subscript_value_161);
        Py_DECREF(tmp_subscript_value_161);
        if (tmp_dict_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4212;

            goto frame_exception_exit_1;
        }
        tmp_annotations_41 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
        Py_DECREF(tmp_dict_value_41);
        assert(!(tmp_res != 0));


        tmp_assign_source_49 = MAKE_FUNCTION_idna$uts46data$$$function__41__seg_40(tstate, tmp_annotations_41);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_42;
        PyObject *tmp_dict_key_42;
        PyObject *tmp_dict_value_42;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_subscript_value_165;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_subscript_value_166;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_subscript_value_167;
        tmp_dict_key_42 = mod_consts[92];
        tmp_expression_value_165 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_165 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_165 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_166 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_166 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_166 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_167 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_167 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_167 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4317;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_167 = mod_consts[93];
        tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_167, tmp_subscript_value_167);
        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4317;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_166 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_168;
            PyObject *tmp_subscript_value_168;
            PyTuple_SET_ITEM(tmp_subscript_value_166, 0, tmp_tuple_element_42);
            tmp_expression_value_168 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_168 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4317;

                goto tuple_build_exception_42;
            }
            tmp_subscript_value_168 = mod_consts[94];
            tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_168, tmp_subscript_value_168);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4317;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_166, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_42;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_42:;
        Py_DECREF(tmp_subscript_value_166);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_42:;
        tmp_subscript_value_165 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_166, tmp_subscript_value_166);
        Py_DECREF(tmp_subscript_value_166);
        if (tmp_subscript_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4317;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_165, tmp_subscript_value_165);
        Py_DECREF(tmp_subscript_value_165);
        if (tmp_dict_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4317;

            goto frame_exception_exit_1;
        }
        tmp_annotations_42 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
        Py_DECREF(tmp_dict_value_42);
        assert(!(tmp_res != 0));


        tmp_assign_source_50 = MAKE_FUNCTION_idna$uts46data$$$function__42__seg_41(tstate, tmp_annotations_42);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_annotations_43;
        PyObject *tmp_dict_key_43;
        PyObject *tmp_dict_value_43;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_subscript_value_169;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_subscript_value_170;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_subscript_value_171;
        tmp_dict_key_43 = mod_consts[92];
        tmp_expression_value_169 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_169 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4422;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_170 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_170 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_170 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4422;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_171 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_171 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_171 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4422;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_171 = mod_consts[93];
        tmp_tuple_element_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_171, tmp_subscript_value_171);
        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4422;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_170 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_172;
            PyObject *tmp_subscript_value_172;
            PyTuple_SET_ITEM(tmp_subscript_value_170, 0, tmp_tuple_element_43);
            tmp_expression_value_172 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_172 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_172 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4422;

                goto tuple_build_exception_43;
            }
            tmp_subscript_value_172 = mod_consts[94];
            tmp_tuple_element_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_172, tmp_subscript_value_172);
            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4422;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_170, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_43:;
        Py_DECREF(tmp_subscript_value_170);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_subscript_value_169 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_170, tmp_subscript_value_170);
        Py_DECREF(tmp_subscript_value_170);
        if (tmp_subscript_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4422;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_169, tmp_subscript_value_169);
        Py_DECREF(tmp_subscript_value_169);
        if (tmp_dict_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4422;

            goto frame_exception_exit_1;
        }
        tmp_annotations_43 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
        Py_DECREF(tmp_dict_value_43);
        assert(!(tmp_res != 0));


        tmp_assign_source_51 = MAKE_FUNCTION_idna$uts46data$$$function__43__seg_42(tstate, tmp_annotations_43);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_annotations_44;
        PyObject *tmp_dict_key_44;
        PyObject *tmp_dict_value_44;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_subscript_value_173;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_subscript_value_174;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_subscript_value_175;
        tmp_dict_key_44 = mod_consts[92];
        tmp_expression_value_173 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_173 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_173 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4527;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_174 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_174 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_174 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4527;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_175 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_175 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_175 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4527;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_175 = mod_consts[93];
        tmp_tuple_element_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_175, tmp_subscript_value_175);
        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4527;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_174 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_176;
            PyObject *tmp_subscript_value_176;
            PyTuple_SET_ITEM(tmp_subscript_value_174, 0, tmp_tuple_element_44);
            tmp_expression_value_176 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_176 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_176 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4527;

                goto tuple_build_exception_44;
            }
            tmp_subscript_value_176 = mod_consts[94];
            tmp_tuple_element_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_176, tmp_subscript_value_176);
            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4527;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_174, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_44;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_44:;
        Py_DECREF(tmp_subscript_value_174);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_44:;
        tmp_subscript_value_173 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_174, tmp_subscript_value_174);
        Py_DECREF(tmp_subscript_value_174);
        if (tmp_subscript_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4527;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_173, tmp_subscript_value_173);
        Py_DECREF(tmp_subscript_value_173);
        if (tmp_dict_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4527;

            goto frame_exception_exit_1;
        }
        tmp_annotations_44 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
        Py_DECREF(tmp_dict_value_44);
        assert(!(tmp_res != 0));


        tmp_assign_source_52 = MAKE_FUNCTION_idna$uts46data$$$function__44__seg_43(tstate, tmp_annotations_44);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_annotations_45;
        PyObject *tmp_dict_key_45;
        PyObject *tmp_dict_value_45;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_subscript_value_177;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_subscript_value_178;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_179;
        tmp_dict_key_45 = mod_consts[92];
        tmp_expression_value_177 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_177 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4632;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_178 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_178 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4632;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_179 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_179 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4632;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_179 = mod_consts[93];
        tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_179, tmp_subscript_value_179);
        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4632;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_178 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_180;
            PyObject *tmp_subscript_value_180;
            PyTuple_SET_ITEM(tmp_subscript_value_178, 0, tmp_tuple_element_45);
            tmp_expression_value_180 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_180 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_180 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4632;

                goto tuple_build_exception_45;
            }
            tmp_subscript_value_180 = mod_consts[94];
            tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_180, tmp_subscript_value_180);
            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4632;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_178, 1, tmp_tuple_element_45);
        }
        goto tuple_build_noexception_45;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_45:;
        Py_DECREF(tmp_subscript_value_178);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_45:;
        tmp_subscript_value_177 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_178, tmp_subscript_value_178);
        Py_DECREF(tmp_subscript_value_178);
        if (tmp_subscript_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4632;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_177, tmp_subscript_value_177);
        Py_DECREF(tmp_subscript_value_177);
        if (tmp_dict_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4632;

            goto frame_exception_exit_1;
        }
        tmp_annotations_45 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
        Py_DECREF(tmp_dict_value_45);
        assert(!(tmp_res != 0));


        tmp_assign_source_53 = MAKE_FUNCTION_idna$uts46data$$$function__45__seg_44(tstate, tmp_annotations_45);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_46;
        PyObject *tmp_dict_key_46;
        PyObject *tmp_dict_value_46;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_subscript_value_181;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_subscript_value_182;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_subscript_value_183;
        tmp_dict_key_46 = mod_consts[92];
        tmp_expression_value_181 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_181 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4737;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_182 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_182 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4737;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_183 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_183 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_183 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4737;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_183 = mod_consts[93];
        tmp_tuple_element_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_183, tmp_subscript_value_183);
        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4737;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_182 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_184;
            PyObject *tmp_subscript_value_184;
            PyTuple_SET_ITEM(tmp_subscript_value_182, 0, tmp_tuple_element_46);
            tmp_expression_value_184 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_184 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_184 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4737;

                goto tuple_build_exception_46;
            }
            tmp_subscript_value_184 = mod_consts[94];
            tmp_tuple_element_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_184, tmp_subscript_value_184);
            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4737;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_182, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_46;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_46:;
        Py_DECREF(tmp_subscript_value_182);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_46:;
        tmp_subscript_value_181 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_182, tmp_subscript_value_182);
        Py_DECREF(tmp_subscript_value_182);
        if (tmp_subscript_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4737;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_181, tmp_subscript_value_181);
        Py_DECREF(tmp_subscript_value_181);
        if (tmp_dict_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4737;

            goto frame_exception_exit_1;
        }
        tmp_annotations_46 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
        Py_DECREF(tmp_dict_value_46);
        assert(!(tmp_res != 0));


        tmp_assign_source_54 = MAKE_FUNCTION_idna$uts46data$$$function__46__seg_45(tstate, tmp_annotations_46);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_annotations_47;
        PyObject *tmp_dict_key_47;
        PyObject *tmp_dict_value_47;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_185;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_subscript_value_186;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_subscript_value_187;
        tmp_dict_key_47 = mod_consts[92];
        tmp_expression_value_185 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_185 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4842;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_186 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_186 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4842;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_187 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_187 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4842;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_187 = mod_consts[93];
        tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_187, tmp_subscript_value_187);
        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4842;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_186 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_188;
            PyObject *tmp_subscript_value_188;
            PyTuple_SET_ITEM(tmp_subscript_value_186, 0, tmp_tuple_element_47);
            tmp_expression_value_188 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_188 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_188 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4842;

                goto tuple_build_exception_47;
            }
            tmp_subscript_value_188 = mod_consts[94];
            tmp_tuple_element_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_188, tmp_subscript_value_188);
            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4842;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_186, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_47;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_47:;
        Py_DECREF(tmp_subscript_value_186);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_47:;
        tmp_subscript_value_185 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_186, tmp_subscript_value_186);
        Py_DECREF(tmp_subscript_value_186);
        if (tmp_subscript_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4842;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_185, tmp_subscript_value_185);
        Py_DECREF(tmp_subscript_value_185);
        if (tmp_dict_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4842;

            goto frame_exception_exit_1;
        }
        tmp_annotations_47 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
        Py_DECREF(tmp_dict_value_47);
        assert(!(tmp_res != 0));


        tmp_assign_source_55 = MAKE_FUNCTION_idna$uts46data$$$function__47__seg_46(tstate, tmp_annotations_47);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_48;
        PyObject *tmp_dict_key_48;
        PyObject *tmp_dict_value_48;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_189;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_subscript_value_190;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_191;
        tmp_dict_key_48 = mod_consts[92];
        tmp_expression_value_189 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_189 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4947;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_190 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_190 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4947;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_191 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_191 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4947;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_191 = mod_consts[93];
        tmp_tuple_element_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_191, tmp_subscript_value_191);
        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4947;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_190 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_192;
            PyObject *tmp_subscript_value_192;
            PyTuple_SET_ITEM(tmp_subscript_value_190, 0, tmp_tuple_element_48);
            tmp_expression_value_192 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_192 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_192 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 4947;

                goto tuple_build_exception_48;
            }
            tmp_subscript_value_192 = mod_consts[94];
            tmp_tuple_element_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_192, tmp_subscript_value_192);
            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 4947;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_190, 1, tmp_tuple_element_48);
        }
        goto tuple_build_noexception_48;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_48:;
        Py_DECREF(tmp_subscript_value_190);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_48:;
        tmp_subscript_value_189 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_190, tmp_subscript_value_190);
        Py_DECREF(tmp_subscript_value_190);
        if (tmp_subscript_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4947;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_189, tmp_subscript_value_189);
        Py_DECREF(tmp_subscript_value_189);
        if (tmp_dict_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4947;

            goto frame_exception_exit_1;
        }
        tmp_annotations_48 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_48, tmp_dict_value_48);
        Py_DECREF(tmp_dict_value_48);
        assert(!(tmp_res != 0));


        tmp_assign_source_56 = MAKE_FUNCTION_idna$uts46data$$$function__48__seg_47(tstate, tmp_annotations_48);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_49;
        PyObject *tmp_dict_key_49;
        PyObject *tmp_dict_value_49;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_subscript_value_193;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_subscript_value_194;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_subscript_value_195;
        tmp_dict_key_49 = mod_consts[92];
        tmp_expression_value_193 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_193 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_193 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5052;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_194 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5052;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_195 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_195 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5052;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_195 = mod_consts[93];
        tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_195, tmp_subscript_value_195);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5052;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_194 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_196;
            PyObject *tmp_subscript_value_196;
            PyTuple_SET_ITEM(tmp_subscript_value_194, 0, tmp_tuple_element_49);
            tmp_expression_value_196 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_196 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_196 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5052;

                goto tuple_build_exception_49;
            }
            tmp_subscript_value_196 = mod_consts[94];
            tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_196, tmp_subscript_value_196);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5052;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_194, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_49;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_49:;
        Py_DECREF(tmp_subscript_value_194);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_49:;
        tmp_subscript_value_193 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_194, tmp_subscript_value_194);
        Py_DECREF(tmp_subscript_value_194);
        if (tmp_subscript_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5052;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_193, tmp_subscript_value_193);
        Py_DECREF(tmp_subscript_value_193);
        if (tmp_dict_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5052;

            goto frame_exception_exit_1;
        }
        tmp_annotations_49 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_49, tmp_dict_value_49);
        Py_DECREF(tmp_dict_value_49);
        assert(!(tmp_res != 0));


        tmp_assign_source_57 = MAKE_FUNCTION_idna$uts46data$$$function__49__seg_48(tstate, tmp_annotations_49);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_50;
        PyObject *tmp_dict_key_50;
        PyObject *tmp_dict_value_50;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_197;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_subscript_value_198;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_199;
        tmp_dict_key_50 = mod_consts[92];
        tmp_expression_value_197 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_197 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_198 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_198 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_199 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_199 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_199 = mod_consts[93];
        tmp_tuple_element_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_199, tmp_subscript_value_199);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_198 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_200;
            PyObject *tmp_subscript_value_200;
            PyTuple_SET_ITEM(tmp_subscript_value_198, 0, tmp_tuple_element_50);
            tmp_expression_value_200 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_200 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_200 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5157;

                goto tuple_build_exception_50;
            }
            tmp_subscript_value_200 = mod_consts[94];
            tmp_tuple_element_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_200, tmp_subscript_value_200);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5157;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_198, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_50;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_50:;
        Py_DECREF(tmp_subscript_value_198);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_50:;
        tmp_subscript_value_197 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_198, tmp_subscript_value_198);
        Py_DECREF(tmp_subscript_value_198);
        if (tmp_subscript_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_197, tmp_subscript_value_197);
        Py_DECREF(tmp_subscript_value_197);
        if (tmp_dict_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5157;

            goto frame_exception_exit_1;
        }
        tmp_annotations_50 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_50, tmp_dict_value_50);
        Py_DECREF(tmp_dict_value_50);
        assert(!(tmp_res != 0));


        tmp_assign_source_58 = MAKE_FUNCTION_idna$uts46data$$$function__50__seg_49(tstate, tmp_annotations_50);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_51;
        PyObject *tmp_dict_key_51;
        PyObject *tmp_dict_value_51;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_subscript_value_201;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_subscript_value_202;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_subscript_value_203;
        tmp_dict_key_51 = mod_consts[92];
        tmp_expression_value_201 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_201 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_201 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_202 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_202 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_202 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_203 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_203 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_203 = mod_consts[93];
        tmp_tuple_element_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_203, tmp_subscript_value_203);
        if (tmp_tuple_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_202 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_204;
            PyObject *tmp_subscript_value_204;
            PyTuple_SET_ITEM(tmp_subscript_value_202, 0, tmp_tuple_element_51);
            tmp_expression_value_204 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_204 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_204 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5262;

                goto tuple_build_exception_51;
            }
            tmp_subscript_value_204 = mod_consts[94];
            tmp_tuple_element_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_204, tmp_subscript_value_204);
            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5262;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_202, 1, tmp_tuple_element_51);
        }
        goto tuple_build_noexception_51;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_51:;
        Py_DECREF(tmp_subscript_value_202);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_51:;
        tmp_subscript_value_201 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_202, tmp_subscript_value_202);
        Py_DECREF(tmp_subscript_value_202);
        if (tmp_subscript_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_201, tmp_subscript_value_201);
        Py_DECREF(tmp_subscript_value_201);
        if (tmp_dict_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        tmp_annotations_51 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_51, tmp_dict_value_51);
        Py_DECREF(tmp_dict_value_51);
        assert(!(tmp_res != 0));


        tmp_assign_source_59 = MAKE_FUNCTION_idna$uts46data$$$function__51__seg_50(tstate, tmp_annotations_51);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_52;
        PyObject *tmp_dict_key_52;
        PyObject *tmp_dict_value_52;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_subscript_value_205;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_subscript_value_206;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_207;
        tmp_dict_key_52 = mod_consts[92];
        tmp_expression_value_205 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_205 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5367;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_206 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_206 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5367;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_207 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_207 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5367;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_207 = mod_consts[93];
        tmp_tuple_element_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_207, tmp_subscript_value_207);
        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5367;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_206 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_208;
            PyObject *tmp_subscript_value_208;
            PyTuple_SET_ITEM(tmp_subscript_value_206, 0, tmp_tuple_element_52);
            tmp_expression_value_208 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_208 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_208 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5367;

                goto tuple_build_exception_52;
            }
            tmp_subscript_value_208 = mod_consts[94];
            tmp_tuple_element_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_208, tmp_subscript_value_208);
            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5367;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_206, 1, tmp_tuple_element_52);
        }
        goto tuple_build_noexception_52;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_52:;
        Py_DECREF(tmp_subscript_value_206);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_52:;
        tmp_subscript_value_205 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_206, tmp_subscript_value_206);
        Py_DECREF(tmp_subscript_value_206);
        if (tmp_subscript_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5367;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_205, tmp_subscript_value_205);
        Py_DECREF(tmp_subscript_value_205);
        if (tmp_dict_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5367;

            goto frame_exception_exit_1;
        }
        tmp_annotations_52 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_52, tmp_dict_value_52);
        Py_DECREF(tmp_dict_value_52);
        assert(!(tmp_res != 0));


        tmp_assign_source_60 = MAKE_FUNCTION_idna$uts46data$$$function__52__seg_51(tstate, tmp_annotations_52);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_annotations_53;
        PyObject *tmp_dict_key_53;
        PyObject *tmp_dict_value_53;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_209;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_subscript_value_210;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_211;
        tmp_dict_key_53 = mod_consts[92];
        tmp_expression_value_209 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_209 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5472;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_210 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_210 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5472;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_211 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5472;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_211 = mod_consts[93];
        tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_211, tmp_subscript_value_211);
        if (tmp_tuple_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5472;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_210 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_212;
            PyObject *tmp_subscript_value_212;
            PyTuple_SET_ITEM(tmp_subscript_value_210, 0, tmp_tuple_element_53);
            tmp_expression_value_212 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_212 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_212 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5472;

                goto tuple_build_exception_53;
            }
            tmp_subscript_value_212 = mod_consts[94];
            tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_212, tmp_subscript_value_212);
            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5472;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_210, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_subscript_value_210);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_subscript_value_209 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_210, tmp_subscript_value_210);
        Py_DECREF(tmp_subscript_value_210);
        if (tmp_subscript_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5472;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_209, tmp_subscript_value_209);
        Py_DECREF(tmp_subscript_value_209);
        if (tmp_dict_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5472;

            goto frame_exception_exit_1;
        }
        tmp_annotations_53 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_53, tmp_dict_key_53, tmp_dict_value_53);
        Py_DECREF(tmp_dict_value_53);
        assert(!(tmp_res != 0));


        tmp_assign_source_61 = MAKE_FUNCTION_idna$uts46data$$$function__53__seg_52(tstate, tmp_annotations_53);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_annotations_54;
        PyObject *tmp_dict_key_54;
        PyObject *tmp_dict_value_54;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_subscript_value_213;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_subscript_value_214;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_subscript_value_215;
        tmp_dict_key_54 = mod_consts[92];
        tmp_expression_value_213 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_213 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5577;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_214 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_214 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5577;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_215 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_215 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_215 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5577;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_215 = mod_consts[93];
        tmp_tuple_element_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_215, tmp_subscript_value_215);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5577;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_214 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_216;
            PyObject *tmp_subscript_value_216;
            PyTuple_SET_ITEM(tmp_subscript_value_214, 0, tmp_tuple_element_54);
            tmp_expression_value_216 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_216 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_216 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5577;

                goto tuple_build_exception_54;
            }
            tmp_subscript_value_216 = mod_consts[94];
            tmp_tuple_element_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_216, tmp_subscript_value_216);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5577;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_214, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_54;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_54:;
        Py_DECREF(tmp_subscript_value_214);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_54:;
        tmp_subscript_value_213 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_214, tmp_subscript_value_214);
        Py_DECREF(tmp_subscript_value_214);
        if (tmp_subscript_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5577;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_213, tmp_subscript_value_213);
        Py_DECREF(tmp_subscript_value_213);
        if (tmp_dict_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5577;

            goto frame_exception_exit_1;
        }
        tmp_annotations_54 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_54, tmp_dict_key_54, tmp_dict_value_54);
        Py_DECREF(tmp_dict_value_54);
        assert(!(tmp_res != 0));


        tmp_assign_source_62 = MAKE_FUNCTION_idna$uts46data$$$function__54__seg_53(tstate, tmp_annotations_54);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_55;
        PyObject *tmp_dict_key_55;
        PyObject *tmp_dict_value_55;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_subscript_value_217;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_subscript_value_218;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_subscript_value_219;
        tmp_dict_key_55 = mod_consts[92];
        tmp_expression_value_217 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_217 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5682;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_218 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_218 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_218 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5682;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_219 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_219 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_219 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5682;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_219 = mod_consts[93];
        tmp_tuple_element_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_219, tmp_subscript_value_219);
        if (tmp_tuple_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5682;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_218 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_220;
            PyObject *tmp_subscript_value_220;
            PyTuple_SET_ITEM(tmp_subscript_value_218, 0, tmp_tuple_element_55);
            tmp_expression_value_220 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_220 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_220 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5682;

                goto tuple_build_exception_55;
            }
            tmp_subscript_value_220 = mod_consts[94];
            tmp_tuple_element_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_220, tmp_subscript_value_220);
            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5682;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_218, 1, tmp_tuple_element_55);
        }
        goto tuple_build_noexception_55;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_55:;
        Py_DECREF(tmp_subscript_value_218);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_55:;
        tmp_subscript_value_217 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_218, tmp_subscript_value_218);
        Py_DECREF(tmp_subscript_value_218);
        if (tmp_subscript_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5682;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_217, tmp_subscript_value_217);
        Py_DECREF(tmp_subscript_value_217);
        if (tmp_dict_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5682;

            goto frame_exception_exit_1;
        }
        tmp_annotations_55 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_55, tmp_dict_key_55, tmp_dict_value_55);
        Py_DECREF(tmp_dict_value_55);
        assert(!(tmp_res != 0));


        tmp_assign_source_63 = MAKE_FUNCTION_idna$uts46data$$$function__55__seg_54(tstate, tmp_annotations_55);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_56;
        PyObject *tmp_dict_key_56;
        PyObject *tmp_dict_value_56;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_subscript_value_221;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_subscript_value_222;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_subscript_value_223;
        tmp_dict_key_56 = mod_consts[92];
        tmp_expression_value_221 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_221 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5787;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_222 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_222 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_222 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5787;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_223 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_223 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_223 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5787;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_223 = mod_consts[93];
        tmp_tuple_element_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_223, tmp_subscript_value_223);
        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5787;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_222 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_224;
            PyObject *tmp_subscript_value_224;
            PyTuple_SET_ITEM(tmp_subscript_value_222, 0, tmp_tuple_element_56);
            tmp_expression_value_224 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_224 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_224 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5787;

                goto tuple_build_exception_56;
            }
            tmp_subscript_value_224 = mod_consts[94];
            tmp_tuple_element_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_224, tmp_subscript_value_224);
            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5787;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_222, 1, tmp_tuple_element_56);
        }
        goto tuple_build_noexception_56;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_56:;
        Py_DECREF(tmp_subscript_value_222);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_56:;
        tmp_subscript_value_221 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_222, tmp_subscript_value_222);
        Py_DECREF(tmp_subscript_value_222);
        if (tmp_subscript_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5787;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_221, tmp_subscript_value_221);
        Py_DECREF(tmp_subscript_value_221);
        if (tmp_dict_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5787;

            goto frame_exception_exit_1;
        }
        tmp_annotations_56 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_56, tmp_dict_key_56, tmp_dict_value_56);
        Py_DECREF(tmp_dict_value_56);
        assert(!(tmp_res != 0));


        tmp_assign_source_64 = MAKE_FUNCTION_idna$uts46data$$$function__56__seg_55(tstate, tmp_annotations_56);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_annotations_57;
        PyObject *tmp_dict_key_57;
        PyObject *tmp_dict_value_57;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_subscript_value_225;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_subscript_value_226;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_subscript_value_227;
        tmp_dict_key_57 = mod_consts[92];
        tmp_expression_value_225 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_225 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5892;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_226 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_226 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_226 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5892;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_227 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_227 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5892;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_227 = mod_consts[93];
        tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_227, tmp_subscript_value_227);
        if (tmp_tuple_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5892;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_226 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_228;
            PyObject *tmp_subscript_value_228;
            PyTuple_SET_ITEM(tmp_subscript_value_226, 0, tmp_tuple_element_57);
            tmp_expression_value_228 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_228 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_228 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5892;

                goto tuple_build_exception_57;
            }
            tmp_subscript_value_228 = mod_consts[94];
            tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_228, tmp_subscript_value_228);
            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5892;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_226, 1, tmp_tuple_element_57);
        }
        goto tuple_build_noexception_57;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_57:;
        Py_DECREF(tmp_subscript_value_226);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_57:;
        tmp_subscript_value_225 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_226, tmp_subscript_value_226);
        Py_DECREF(tmp_subscript_value_226);
        if (tmp_subscript_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5892;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_225, tmp_subscript_value_225);
        Py_DECREF(tmp_subscript_value_225);
        if (tmp_dict_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5892;

            goto frame_exception_exit_1;
        }
        tmp_annotations_57 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_57, tmp_dict_key_57, tmp_dict_value_57);
        Py_DECREF(tmp_dict_value_57);
        assert(!(tmp_res != 0));


        tmp_assign_source_65 = MAKE_FUNCTION_idna$uts46data$$$function__57__seg_56(tstate, tmp_annotations_57);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_58;
        PyObject *tmp_dict_key_58;
        PyObject *tmp_dict_value_58;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_subscript_value_229;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_subscript_value_230;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_subscript_value_231;
        tmp_dict_key_58 = mod_consts[92];
        tmp_expression_value_229 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_229 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_230 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_230 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_230 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_231 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_231 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_231 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_231 = mod_consts[93];
        tmp_tuple_element_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_231, tmp_subscript_value_231);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_230 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_232;
            PyObject *tmp_subscript_value_232;
            PyTuple_SET_ITEM(tmp_subscript_value_230, 0, tmp_tuple_element_58);
            tmp_expression_value_232 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_232 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_232 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 5997;

                goto tuple_build_exception_58;
            }
            tmp_subscript_value_232 = mod_consts[94];
            tmp_tuple_element_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_232, tmp_subscript_value_232);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 5997;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_230, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_58;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_58:;
        Py_DECREF(tmp_subscript_value_230);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_58:;
        tmp_subscript_value_229 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_230, tmp_subscript_value_230);
        Py_DECREF(tmp_subscript_value_230);
        if (tmp_subscript_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_229, tmp_subscript_value_229);
        Py_DECREF(tmp_subscript_value_229);
        if (tmp_dict_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        tmp_annotations_58 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_58, tmp_dict_key_58, tmp_dict_value_58);
        Py_DECREF(tmp_dict_value_58);
        assert(!(tmp_res != 0));


        tmp_assign_source_66 = MAKE_FUNCTION_idna$uts46data$$$function__58__seg_57(tstate, tmp_annotations_58);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_annotations_59;
        PyObject *tmp_dict_key_59;
        PyObject *tmp_dict_value_59;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_subscript_value_233;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_subscript_value_234;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_subscript_value_235;
        tmp_dict_key_59 = mod_consts[92];
        tmp_expression_value_233 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_233 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_233 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_234 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_234 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_234 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_235 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_235 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_235 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_235 = mod_consts[93];
        tmp_tuple_element_59 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_235, tmp_subscript_value_235);
        if (tmp_tuple_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_234 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_236;
            PyObject *tmp_subscript_value_236;
            PyTuple_SET_ITEM(tmp_subscript_value_234, 0, tmp_tuple_element_59);
            tmp_expression_value_236 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_236 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_236 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6102;

                goto tuple_build_exception_59;
            }
            tmp_subscript_value_236 = mod_consts[94];
            tmp_tuple_element_59 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_236, tmp_subscript_value_236);
            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6102;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_234, 1, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_59;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_59:;
        Py_DECREF(tmp_subscript_value_234);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_59:;
        tmp_subscript_value_233 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_234, tmp_subscript_value_234);
        Py_DECREF(tmp_subscript_value_234);
        if (tmp_subscript_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_59 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_233, tmp_subscript_value_233);
        Py_DECREF(tmp_subscript_value_233);
        if (tmp_dict_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6102;

            goto frame_exception_exit_1;
        }
        tmp_annotations_59 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_59, tmp_dict_key_59, tmp_dict_value_59);
        Py_DECREF(tmp_dict_value_59);
        assert(!(tmp_res != 0));


        tmp_assign_source_67 = MAKE_FUNCTION_idna$uts46data$$$function__59__seg_58(tstate, tmp_annotations_59);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_60;
        PyObject *tmp_dict_key_60;
        PyObject *tmp_dict_value_60;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_subscript_value_237;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_subscript_value_238;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_subscript_value_239;
        tmp_dict_key_60 = mod_consts[92];
        tmp_expression_value_237 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_237 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_238 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_238 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_239 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_239 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_239 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_239 = mod_consts[93];
        tmp_tuple_element_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_239, tmp_subscript_value_239);
        if (tmp_tuple_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_238 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_240;
            PyObject *tmp_subscript_value_240;
            PyTuple_SET_ITEM(tmp_subscript_value_238, 0, tmp_tuple_element_60);
            tmp_expression_value_240 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_240 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_240 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6207;

                goto tuple_build_exception_60;
            }
            tmp_subscript_value_240 = mod_consts[94];
            tmp_tuple_element_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_240, tmp_subscript_value_240);
            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6207;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_238, 1, tmp_tuple_element_60);
        }
        goto tuple_build_noexception_60;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_60:;
        Py_DECREF(tmp_subscript_value_238);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_60:;
        tmp_subscript_value_237 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_238, tmp_subscript_value_238);
        Py_DECREF(tmp_subscript_value_238);
        if (tmp_subscript_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_237, tmp_subscript_value_237);
        Py_DECREF(tmp_subscript_value_237);
        if (tmp_dict_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6207;

            goto frame_exception_exit_1;
        }
        tmp_annotations_60 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_60, tmp_dict_key_60, tmp_dict_value_60);
        Py_DECREF(tmp_dict_value_60);
        assert(!(tmp_res != 0));


        tmp_assign_source_68 = MAKE_FUNCTION_idna$uts46data$$$function__60__seg_59(tstate, tmp_annotations_60);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_annotations_61;
        PyObject *tmp_dict_key_61;
        PyObject *tmp_dict_value_61;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_subscript_value_241;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_subscript_value_242;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_subscript_value_243;
        tmp_dict_key_61 = mod_consts[92];
        tmp_expression_value_241 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_241 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_241 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6312;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_242 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_242 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6312;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_243 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_243 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_243 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6312;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_243 = mod_consts[93];
        tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_243, tmp_subscript_value_243);
        if (tmp_tuple_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6312;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_242 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_244;
            PyObject *tmp_subscript_value_244;
            PyTuple_SET_ITEM(tmp_subscript_value_242, 0, tmp_tuple_element_61);
            tmp_expression_value_244 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_244 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_244 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6312;

                goto tuple_build_exception_61;
            }
            tmp_subscript_value_244 = mod_consts[94];
            tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_244, tmp_subscript_value_244);
            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6312;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_242, 1, tmp_tuple_element_61);
        }
        goto tuple_build_noexception_61;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_61:;
        Py_DECREF(tmp_subscript_value_242);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_61:;
        tmp_subscript_value_241 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_242, tmp_subscript_value_242);
        Py_DECREF(tmp_subscript_value_242);
        if (tmp_subscript_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6312;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_241, tmp_subscript_value_241);
        Py_DECREF(tmp_subscript_value_241);
        if (tmp_dict_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6312;

            goto frame_exception_exit_1;
        }
        tmp_annotations_61 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_61, tmp_dict_key_61, tmp_dict_value_61);
        Py_DECREF(tmp_dict_value_61);
        assert(!(tmp_res != 0));


        tmp_assign_source_69 = MAKE_FUNCTION_idna$uts46data$$$function__61__seg_60(tstate, tmp_annotations_61);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_annotations_62;
        PyObject *tmp_dict_key_62;
        PyObject *tmp_dict_value_62;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_subscript_value_245;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_subscript_value_246;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_subscript_value_247;
        tmp_dict_key_62 = mod_consts[92];
        tmp_expression_value_245 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_245 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_245 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_246 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_246 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_246 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_247 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_247 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_247 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_247 = mod_consts[93];
        tmp_tuple_element_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_247, tmp_subscript_value_247);
        if (tmp_tuple_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_246 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_248;
            PyObject *tmp_subscript_value_248;
            PyTuple_SET_ITEM(tmp_subscript_value_246, 0, tmp_tuple_element_62);
            tmp_expression_value_248 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_248 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_248 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6417;

                goto tuple_build_exception_62;
            }
            tmp_subscript_value_248 = mod_consts[94];
            tmp_tuple_element_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_248, tmp_subscript_value_248);
            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6417;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_246, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_62;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_62:;
        Py_DECREF(tmp_subscript_value_246);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_62:;
        tmp_subscript_value_245 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_246, tmp_subscript_value_246);
        Py_DECREF(tmp_subscript_value_246);
        if (tmp_subscript_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_245, tmp_subscript_value_245);
        Py_DECREF(tmp_subscript_value_245);
        if (tmp_dict_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        tmp_annotations_62 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_62, tmp_dict_key_62, tmp_dict_value_62);
        Py_DECREF(tmp_dict_value_62);
        assert(!(tmp_res != 0));


        tmp_assign_source_70 = MAKE_FUNCTION_idna$uts46data$$$function__62__seg_61(tstate, tmp_annotations_62);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_annotations_63;
        PyObject *tmp_dict_key_63;
        PyObject *tmp_dict_value_63;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_subscript_value_249;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_subscript_value_250;
        PyObject *tmp_tuple_element_63;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_subscript_value_251;
        tmp_dict_key_63 = mod_consts[92];
        tmp_expression_value_249 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_249 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6522;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_250 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_250 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_250 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6522;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_251 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_251 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_251 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6522;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_251 = mod_consts[93];
        tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_251, tmp_subscript_value_251);
        if (tmp_tuple_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6522;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_250 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_252;
            PyObject *tmp_subscript_value_252;
            PyTuple_SET_ITEM(tmp_subscript_value_250, 0, tmp_tuple_element_63);
            tmp_expression_value_252 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_252 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_252 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6522;

                goto tuple_build_exception_63;
            }
            tmp_subscript_value_252 = mod_consts[94];
            tmp_tuple_element_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_252, tmp_subscript_value_252);
            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6522;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_250, 1, tmp_tuple_element_63);
        }
        goto tuple_build_noexception_63;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_63:;
        Py_DECREF(tmp_subscript_value_250);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_63:;
        tmp_subscript_value_249 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_250, tmp_subscript_value_250);
        Py_DECREF(tmp_subscript_value_250);
        if (tmp_subscript_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6522;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_249, tmp_subscript_value_249);
        Py_DECREF(tmp_subscript_value_249);
        if (tmp_dict_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6522;

            goto frame_exception_exit_1;
        }
        tmp_annotations_63 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_63, tmp_dict_key_63, tmp_dict_value_63);
        Py_DECREF(tmp_dict_value_63);
        assert(!(tmp_res != 0));


        tmp_assign_source_71 = MAKE_FUNCTION_idna$uts46data$$$function__63__seg_62(tstate, tmp_annotations_63);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_annotations_64;
        PyObject *tmp_dict_key_64;
        PyObject *tmp_dict_value_64;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_subscript_value_253;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_subscript_value_254;
        PyObject *tmp_tuple_element_64;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_subscript_value_255;
        tmp_dict_key_64 = mod_consts[92];
        tmp_expression_value_253 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_253 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6627;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_254 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_254 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_254 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6627;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_255 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_255 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_255 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_255 = mod_consts[93];
        tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_255, tmp_subscript_value_255);
        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6627;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_254 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_256;
            PyObject *tmp_subscript_value_256;
            PyTuple_SET_ITEM(tmp_subscript_value_254, 0, tmp_tuple_element_64);
            tmp_expression_value_256 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_256 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_256 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6627;

                goto tuple_build_exception_64;
            }
            tmp_subscript_value_256 = mod_consts[94];
            tmp_tuple_element_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_256, tmp_subscript_value_256);
            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6627;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_254, 1, tmp_tuple_element_64);
        }
        goto tuple_build_noexception_64;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_64:;
        Py_DECREF(tmp_subscript_value_254);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_64:;
        tmp_subscript_value_253 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_254, tmp_subscript_value_254);
        Py_DECREF(tmp_subscript_value_254);
        if (tmp_subscript_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6627;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_253, tmp_subscript_value_253);
        Py_DECREF(tmp_subscript_value_253);
        if (tmp_dict_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6627;

            goto frame_exception_exit_1;
        }
        tmp_annotations_64 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_64, tmp_dict_key_64, tmp_dict_value_64);
        Py_DECREF(tmp_dict_value_64);
        assert(!(tmp_res != 0));


        tmp_assign_source_72 = MAKE_FUNCTION_idna$uts46data$$$function__64__seg_63(tstate, tmp_annotations_64);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_annotations_65;
        PyObject *tmp_dict_key_65;
        PyObject *tmp_dict_value_65;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_subscript_value_257;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_subscript_value_258;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_subscript_value_259;
        tmp_dict_key_65 = mod_consts[92];
        tmp_expression_value_257 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_257 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_257 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6732;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_258 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_258 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_258 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6732;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_259 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_259 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_259 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6732;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_259 = mod_consts[93];
        tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_259, tmp_subscript_value_259);
        if (tmp_tuple_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6732;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_258 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_260;
            PyObject *tmp_subscript_value_260;
            PyTuple_SET_ITEM(tmp_subscript_value_258, 0, tmp_tuple_element_65);
            tmp_expression_value_260 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_260 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_260 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6732;

                goto tuple_build_exception_65;
            }
            tmp_subscript_value_260 = mod_consts[94];
            tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_260, tmp_subscript_value_260);
            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6732;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_258, 1, tmp_tuple_element_65);
        }
        goto tuple_build_noexception_65;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_65:;
        Py_DECREF(tmp_subscript_value_258);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_65:;
        tmp_subscript_value_257 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_258, tmp_subscript_value_258);
        Py_DECREF(tmp_subscript_value_258);
        if (tmp_subscript_value_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6732;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_257, tmp_subscript_value_257);
        Py_DECREF(tmp_subscript_value_257);
        if (tmp_dict_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6732;

            goto frame_exception_exit_1;
        }
        tmp_annotations_65 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_65, tmp_dict_key_65, tmp_dict_value_65);
        Py_DECREF(tmp_dict_value_65);
        assert(!(tmp_res != 0));


        tmp_assign_source_73 = MAKE_FUNCTION_idna$uts46data$$$function__65__seg_64(tstate, tmp_annotations_65);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_annotations_66;
        PyObject *tmp_dict_key_66;
        PyObject *tmp_dict_value_66;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_subscript_value_261;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_subscript_value_262;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_subscript_value_263;
        tmp_dict_key_66 = mod_consts[92];
        tmp_expression_value_261 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_261 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_261 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_262 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_262 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_263 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_263 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_263 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_263 = mod_consts[93];
        tmp_tuple_element_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_263, tmp_subscript_value_263);
        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_262 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_264;
            PyObject *tmp_subscript_value_264;
            PyTuple_SET_ITEM(tmp_subscript_value_262, 0, tmp_tuple_element_66);
            tmp_expression_value_264 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_264 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_264 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6837;

                goto tuple_build_exception_66;
            }
            tmp_subscript_value_264 = mod_consts[94];
            tmp_tuple_element_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_264, tmp_subscript_value_264);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6837;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_262, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_66;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_66:;
        Py_DECREF(tmp_subscript_value_262);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_66:;
        tmp_subscript_value_261 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_262, tmp_subscript_value_262);
        Py_DECREF(tmp_subscript_value_262);
        if (tmp_subscript_value_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_261, tmp_subscript_value_261);
        Py_DECREF(tmp_subscript_value_261);
        if (tmp_dict_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6837;

            goto frame_exception_exit_1;
        }
        tmp_annotations_66 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_66, tmp_dict_key_66, tmp_dict_value_66);
        Py_DECREF(tmp_dict_value_66);
        assert(!(tmp_res != 0));


        tmp_assign_source_74 = MAKE_FUNCTION_idna$uts46data$$$function__66__seg_65(tstate, tmp_annotations_66);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_annotations_67;
        PyObject *tmp_dict_key_67;
        PyObject *tmp_dict_value_67;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_subscript_value_265;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_subscript_value_266;
        PyObject *tmp_tuple_element_67;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_subscript_value_267;
        tmp_dict_key_67 = mod_consts[92];
        tmp_expression_value_265 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_265 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_265 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6942;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_266 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_266 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6942;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_267 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_267 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_267 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6942;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_267 = mod_consts[93];
        tmp_tuple_element_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_267, tmp_subscript_value_267);
        if (tmp_tuple_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6942;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_266 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_268;
            PyObject *tmp_subscript_value_268;
            PyTuple_SET_ITEM(tmp_subscript_value_266, 0, tmp_tuple_element_67);
            tmp_expression_value_268 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_268 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_268 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 6942;

                goto tuple_build_exception_67;
            }
            tmp_subscript_value_268 = mod_consts[94];
            tmp_tuple_element_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_268, tmp_subscript_value_268);
            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6942;

                goto tuple_build_exception_67;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_266, 1, tmp_tuple_element_67);
        }
        goto tuple_build_noexception_67;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_67:;
        Py_DECREF(tmp_subscript_value_266);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_67:;
        tmp_subscript_value_265 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_266, tmp_subscript_value_266);
        Py_DECREF(tmp_subscript_value_266);
        if (tmp_subscript_value_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6942;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_265, tmp_subscript_value_265);
        Py_DECREF(tmp_subscript_value_265);
        if (tmp_dict_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6942;

            goto frame_exception_exit_1;
        }
        tmp_annotations_67 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_67, tmp_dict_key_67, tmp_dict_value_67);
        Py_DECREF(tmp_dict_value_67);
        assert(!(tmp_res != 0));


        tmp_assign_source_75 = MAKE_FUNCTION_idna$uts46data$$$function__67__seg_66(tstate, tmp_annotations_67);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_68;
        PyObject *tmp_dict_key_68;
        PyObject *tmp_dict_value_68;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_subscript_value_269;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_subscript_value_270;
        PyObject *tmp_tuple_element_68;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_subscript_value_271;
        tmp_dict_key_68 = mod_consts[92];
        tmp_expression_value_269 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_269 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_269 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7047;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_270 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_270 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7047;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_271 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_271 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_271 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7047;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_271 = mod_consts[93];
        tmp_tuple_element_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_271, tmp_subscript_value_271);
        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7047;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_270 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_272;
            PyObject *tmp_subscript_value_272;
            PyTuple_SET_ITEM(tmp_subscript_value_270, 0, tmp_tuple_element_68);
            tmp_expression_value_272 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_272 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_272 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7047;

                goto tuple_build_exception_68;
            }
            tmp_subscript_value_272 = mod_consts[94];
            tmp_tuple_element_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_272, tmp_subscript_value_272);
            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7047;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_270, 1, tmp_tuple_element_68);
        }
        goto tuple_build_noexception_68;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_68:;
        Py_DECREF(tmp_subscript_value_270);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_68:;
        tmp_subscript_value_269 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_270, tmp_subscript_value_270);
        Py_DECREF(tmp_subscript_value_270);
        if (tmp_subscript_value_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7047;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_269, tmp_subscript_value_269);
        Py_DECREF(tmp_subscript_value_269);
        if (tmp_dict_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7047;

            goto frame_exception_exit_1;
        }
        tmp_annotations_68 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_68, tmp_dict_key_68, tmp_dict_value_68);
        Py_DECREF(tmp_dict_value_68);
        assert(!(tmp_res != 0));


        tmp_assign_source_76 = MAKE_FUNCTION_idna$uts46data$$$function__68__seg_67(tstate, tmp_annotations_68);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_annotations_69;
        PyObject *tmp_dict_key_69;
        PyObject *tmp_dict_value_69;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_subscript_value_273;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_subscript_value_274;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_subscript_value_275;
        tmp_dict_key_69 = mod_consts[92];
        tmp_expression_value_273 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_273 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_273 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_274 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_274 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_275 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_275 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_275 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7152;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_275 = mod_consts[93];
        tmp_tuple_element_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_275, tmp_subscript_value_275);
        if (tmp_tuple_element_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7152;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_274 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_276;
            PyObject *tmp_subscript_value_276;
            PyTuple_SET_ITEM(tmp_subscript_value_274, 0, tmp_tuple_element_69);
            tmp_expression_value_276 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_276 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_276 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7152;

                goto tuple_build_exception_69;
            }
            tmp_subscript_value_276 = mod_consts[94];
            tmp_tuple_element_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_276, tmp_subscript_value_276);
            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7152;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_274, 1, tmp_tuple_element_69);
        }
        goto tuple_build_noexception_69;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_69:;
        Py_DECREF(tmp_subscript_value_274);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_69:;
        tmp_subscript_value_273 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_274, tmp_subscript_value_274);
        Py_DECREF(tmp_subscript_value_274);
        if (tmp_subscript_value_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7152;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_273, tmp_subscript_value_273);
        Py_DECREF(tmp_subscript_value_273);
        if (tmp_dict_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7152;

            goto frame_exception_exit_1;
        }
        tmp_annotations_69 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_69, tmp_dict_key_69, tmp_dict_value_69);
        Py_DECREF(tmp_dict_value_69);
        assert(!(tmp_res != 0));


        tmp_assign_source_77 = MAKE_FUNCTION_idna$uts46data$$$function__69__seg_68(tstate, tmp_annotations_69);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_annotations_70;
        PyObject *tmp_dict_key_70;
        PyObject *tmp_dict_value_70;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_subscript_value_277;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_subscript_value_278;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_subscript_value_279;
        tmp_dict_key_70 = mod_consts[92];
        tmp_expression_value_277 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_277 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_277 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_278 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_278 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7257;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_279 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_279 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_279 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7257;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_279 = mod_consts[93];
        tmp_tuple_element_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_279, tmp_subscript_value_279);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7257;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_278 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_280;
            PyObject *tmp_subscript_value_280;
            PyTuple_SET_ITEM(tmp_subscript_value_278, 0, tmp_tuple_element_70);
            tmp_expression_value_280 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_280 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_280 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7257;

                goto tuple_build_exception_70;
            }
            tmp_subscript_value_280 = mod_consts[94];
            tmp_tuple_element_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_280, tmp_subscript_value_280);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7257;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_278, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_70;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_70:;
        Py_DECREF(tmp_subscript_value_278);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_70:;
        tmp_subscript_value_277 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_278, tmp_subscript_value_278);
        Py_DECREF(tmp_subscript_value_278);
        if (tmp_subscript_value_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7257;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_277, tmp_subscript_value_277);
        Py_DECREF(tmp_subscript_value_277);
        if (tmp_dict_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7257;

            goto frame_exception_exit_1;
        }
        tmp_annotations_70 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_70, tmp_dict_key_70, tmp_dict_value_70);
        Py_DECREF(tmp_dict_value_70);
        assert(!(tmp_res != 0));


        tmp_assign_source_78 = MAKE_FUNCTION_idna$uts46data$$$function__70__seg_69(tstate, tmp_annotations_70);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_annotations_71;
        PyObject *tmp_dict_key_71;
        PyObject *tmp_dict_value_71;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_subscript_value_281;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_subscript_value_282;
        PyObject *tmp_tuple_element_71;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_subscript_value_283;
        tmp_dict_key_71 = mod_consts[92];
        tmp_expression_value_281 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_281 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_281 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7362;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_282 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_282 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7362;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_283 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_283 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_283 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7362;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_283 = mod_consts[93];
        tmp_tuple_element_71 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_283, tmp_subscript_value_283);
        if (tmp_tuple_element_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7362;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_282 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_284;
            PyObject *tmp_subscript_value_284;
            PyTuple_SET_ITEM(tmp_subscript_value_282, 0, tmp_tuple_element_71);
            tmp_expression_value_284 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_284 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_284 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7362;

                goto tuple_build_exception_71;
            }
            tmp_subscript_value_284 = mod_consts[94];
            tmp_tuple_element_71 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_284, tmp_subscript_value_284);
            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7362;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_282, 1, tmp_tuple_element_71);
        }
        goto tuple_build_noexception_71;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_71:;
        Py_DECREF(tmp_subscript_value_282);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_71:;
        tmp_subscript_value_281 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_282, tmp_subscript_value_282);
        Py_DECREF(tmp_subscript_value_282);
        if (tmp_subscript_value_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7362;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_71 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_281, tmp_subscript_value_281);
        Py_DECREF(tmp_subscript_value_281);
        if (tmp_dict_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7362;

            goto frame_exception_exit_1;
        }
        tmp_annotations_71 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_71, tmp_dict_key_71, tmp_dict_value_71);
        Py_DECREF(tmp_dict_value_71);
        assert(!(tmp_res != 0));


        tmp_assign_source_79 = MAKE_FUNCTION_idna$uts46data$$$function__71__seg_70(tstate, tmp_annotations_71);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_annotations_72;
        PyObject *tmp_dict_key_72;
        PyObject *tmp_dict_value_72;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_subscript_value_285;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_subscript_value_286;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_subscript_value_287;
        tmp_dict_key_72 = mod_consts[92];
        tmp_expression_value_285 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_285 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7467;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_286 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_286 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7467;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_287 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_287 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7467;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_287 = mod_consts[93];
        tmp_tuple_element_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_287, tmp_subscript_value_287);
        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7467;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_286 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_288;
            PyObject *tmp_subscript_value_288;
            PyTuple_SET_ITEM(tmp_subscript_value_286, 0, tmp_tuple_element_72);
            tmp_expression_value_288 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_288 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_288 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7467;

                goto tuple_build_exception_72;
            }
            tmp_subscript_value_288 = mod_consts[94];
            tmp_tuple_element_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_288, tmp_subscript_value_288);
            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7467;

                goto tuple_build_exception_72;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_286, 1, tmp_tuple_element_72);
        }
        goto tuple_build_noexception_72;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_72:;
        Py_DECREF(tmp_subscript_value_286);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_72:;
        tmp_subscript_value_285 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_286, tmp_subscript_value_286);
        Py_DECREF(tmp_subscript_value_286);
        if (tmp_subscript_value_285 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7467;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_285, tmp_subscript_value_285);
        Py_DECREF(tmp_subscript_value_285);
        if (tmp_dict_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7467;

            goto frame_exception_exit_1;
        }
        tmp_annotations_72 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_72, tmp_dict_key_72, tmp_dict_value_72);
        Py_DECREF(tmp_dict_value_72);
        assert(!(tmp_res != 0));


        tmp_assign_source_80 = MAKE_FUNCTION_idna$uts46data$$$function__72__seg_71(tstate, tmp_annotations_72);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_annotations_73;
        PyObject *tmp_dict_key_73;
        PyObject *tmp_dict_value_73;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_subscript_value_289;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_subscript_value_290;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_value_291;
        PyObject *tmp_subscript_value_291;
        tmp_dict_key_73 = mod_consts[92];
        tmp_expression_value_289 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_289 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_289 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7572;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_290 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_290 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_290 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7572;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_291 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_291 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_291 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7572;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_291 = mod_consts[93];
        tmp_tuple_element_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_291, tmp_subscript_value_291);
        if (tmp_tuple_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7572;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_290 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_292;
            PyObject *tmp_subscript_value_292;
            PyTuple_SET_ITEM(tmp_subscript_value_290, 0, tmp_tuple_element_73);
            tmp_expression_value_292 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_292 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_292 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7572;

                goto tuple_build_exception_73;
            }
            tmp_subscript_value_292 = mod_consts[94];
            tmp_tuple_element_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_292, tmp_subscript_value_292);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7572;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_290, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_73;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_73:;
        Py_DECREF(tmp_subscript_value_290);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_73:;
        tmp_subscript_value_289 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_290, tmp_subscript_value_290);
        Py_DECREF(tmp_subscript_value_290);
        if (tmp_subscript_value_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7572;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_289, tmp_subscript_value_289);
        Py_DECREF(tmp_subscript_value_289);
        if (tmp_dict_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7572;

            goto frame_exception_exit_1;
        }
        tmp_annotations_73 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_73, tmp_dict_key_73, tmp_dict_value_73);
        Py_DECREF(tmp_dict_value_73);
        assert(!(tmp_res != 0));


        tmp_assign_source_81 = MAKE_FUNCTION_idna$uts46data$$$function__73__seg_72(tstate, tmp_annotations_73);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_annotations_74;
        PyObject *tmp_dict_key_74;
        PyObject *tmp_dict_value_74;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_subscript_value_293;
        PyObject *tmp_expression_value_294;
        PyObject *tmp_subscript_value_294;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_subscript_value_295;
        tmp_dict_key_74 = mod_consts[92];
        tmp_expression_value_293 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_293 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7677;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_294 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_294 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_294 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7677;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_295 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_295 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_295 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7677;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_295 = mod_consts[93];
        tmp_tuple_element_74 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_295, tmp_subscript_value_295);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7677;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_294 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_296;
            PyObject *tmp_subscript_value_296;
            PyTuple_SET_ITEM(tmp_subscript_value_294, 0, tmp_tuple_element_74);
            tmp_expression_value_296 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_296 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_296 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7677;

                goto tuple_build_exception_74;
            }
            tmp_subscript_value_296 = mod_consts[94];
            tmp_tuple_element_74 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_296, tmp_subscript_value_296);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7677;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_294, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_74;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_74:;
        Py_DECREF(tmp_subscript_value_294);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_74:;
        tmp_subscript_value_293 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_294, tmp_subscript_value_294);
        Py_DECREF(tmp_subscript_value_294);
        if (tmp_subscript_value_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7677;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_74 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_293, tmp_subscript_value_293);
        Py_DECREF(tmp_subscript_value_293);
        if (tmp_dict_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7677;

            goto frame_exception_exit_1;
        }
        tmp_annotations_74 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_74, tmp_dict_key_74, tmp_dict_value_74);
        Py_DECREF(tmp_dict_value_74);
        assert(!(tmp_res != 0));


        tmp_assign_source_82 = MAKE_FUNCTION_idna$uts46data$$$function__74__seg_73(tstate, tmp_annotations_74);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_annotations_75;
        PyObject *tmp_dict_key_75;
        PyObject *tmp_dict_value_75;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_subscript_value_297;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_subscript_value_298;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_subscript_value_299;
        tmp_dict_key_75 = mod_consts[92];
        tmp_expression_value_297 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_297 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7782;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_298 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_298 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_298 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7782;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_299 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_299 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7782;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_299 = mod_consts[93];
        tmp_tuple_element_75 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_299, tmp_subscript_value_299);
        if (tmp_tuple_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7782;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_298 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_300;
            PyObject *tmp_subscript_value_300;
            PyTuple_SET_ITEM(tmp_subscript_value_298, 0, tmp_tuple_element_75);
            tmp_expression_value_300 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_300 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_300 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7782;

                goto tuple_build_exception_75;
            }
            tmp_subscript_value_300 = mod_consts[94];
            tmp_tuple_element_75 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_300, tmp_subscript_value_300);
            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7782;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_298, 1, tmp_tuple_element_75);
        }
        goto tuple_build_noexception_75;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_75:;
        Py_DECREF(tmp_subscript_value_298);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_75:;
        tmp_subscript_value_297 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_298, tmp_subscript_value_298);
        Py_DECREF(tmp_subscript_value_298);
        if (tmp_subscript_value_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7782;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_75 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_297, tmp_subscript_value_297);
        Py_DECREF(tmp_subscript_value_297);
        if (tmp_dict_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7782;

            goto frame_exception_exit_1;
        }
        tmp_annotations_75 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_75, tmp_dict_key_75, tmp_dict_value_75);
        Py_DECREF(tmp_dict_value_75);
        assert(!(tmp_res != 0));


        tmp_assign_source_83 = MAKE_FUNCTION_idna$uts46data$$$function__75__seg_74(tstate, tmp_annotations_75);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_annotations_76;
        PyObject *tmp_dict_key_76;
        PyObject *tmp_dict_value_76;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_subscript_value_301;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_subscript_value_302;
        PyObject *tmp_tuple_element_76;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_subscript_value_303;
        tmp_dict_key_76 = mod_consts[92];
        tmp_expression_value_301 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_301 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_301 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7887;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_302 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_302 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7887;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_303 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_303 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7887;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_303 = mod_consts[93];
        tmp_tuple_element_76 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_303, tmp_subscript_value_303);
        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7887;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_302 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_304;
            PyObject *tmp_subscript_value_304;
            PyTuple_SET_ITEM(tmp_subscript_value_302, 0, tmp_tuple_element_76);
            tmp_expression_value_304 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_304 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_304 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7887;

                goto tuple_build_exception_76;
            }
            tmp_subscript_value_304 = mod_consts[94];
            tmp_tuple_element_76 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_304, tmp_subscript_value_304);
            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7887;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_302, 1, tmp_tuple_element_76);
        }
        goto tuple_build_noexception_76;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_76:;
        Py_DECREF(tmp_subscript_value_302);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_76:;
        tmp_subscript_value_301 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_302, tmp_subscript_value_302);
        Py_DECREF(tmp_subscript_value_302);
        if (tmp_subscript_value_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7887;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_76 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_301, tmp_subscript_value_301);
        Py_DECREF(tmp_subscript_value_301);
        if (tmp_dict_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7887;

            goto frame_exception_exit_1;
        }
        tmp_annotations_76 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_76, tmp_dict_key_76, tmp_dict_value_76);
        Py_DECREF(tmp_dict_value_76);
        assert(!(tmp_res != 0));


        tmp_assign_source_84 = MAKE_FUNCTION_idna$uts46data$$$function__76__seg_75(tstate, tmp_annotations_76);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_annotations_77;
        PyObject *tmp_dict_key_77;
        PyObject *tmp_dict_value_77;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_subscript_value_305;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_subscript_value_306;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_subscript_value_307;
        tmp_dict_key_77 = mod_consts[92];
        tmp_expression_value_305 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_305 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7992;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_306 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_306 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7992;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_307 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_307 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_307 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 7992;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_307 = mod_consts[93];
        tmp_tuple_element_77 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_307, tmp_subscript_value_307);
        if (tmp_tuple_element_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7992;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_306 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_308;
            PyObject *tmp_subscript_value_308;
            PyTuple_SET_ITEM(tmp_subscript_value_306, 0, tmp_tuple_element_77);
            tmp_expression_value_308 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_308 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_308 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 7992;

                goto tuple_build_exception_77;
            }
            tmp_subscript_value_308 = mod_consts[94];
            tmp_tuple_element_77 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_308, tmp_subscript_value_308);
            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 7992;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_306, 1, tmp_tuple_element_77);
        }
        goto tuple_build_noexception_77;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_77:;
        Py_DECREF(tmp_subscript_value_306);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_77:;
        tmp_subscript_value_305 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_306, tmp_subscript_value_306);
        Py_DECREF(tmp_subscript_value_306);
        if (tmp_subscript_value_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7992;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_77 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_305, tmp_subscript_value_305);
        Py_DECREF(tmp_subscript_value_305);
        if (tmp_dict_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7992;

            goto frame_exception_exit_1;
        }
        tmp_annotations_77 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_77, tmp_dict_key_77, tmp_dict_value_77);
        Py_DECREF(tmp_dict_value_77);
        assert(!(tmp_res != 0));


        tmp_assign_source_85 = MAKE_FUNCTION_idna$uts46data$$$function__77__seg_76(tstate, tmp_annotations_77);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_annotations_78;
        PyObject *tmp_dict_key_78;
        PyObject *tmp_dict_value_78;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_subscript_value_309;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_subscript_value_310;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_subscript_value_311;
        tmp_dict_key_78 = mod_consts[92];
        tmp_expression_value_309 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_309 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8097;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_310 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_310 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_310 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8097;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_311 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_311 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8097;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_311 = mod_consts[93];
        tmp_tuple_element_78 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_311, tmp_subscript_value_311);
        if (tmp_tuple_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8097;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_310 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_312;
            PyObject *tmp_subscript_value_312;
            PyTuple_SET_ITEM(tmp_subscript_value_310, 0, tmp_tuple_element_78);
            tmp_expression_value_312 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_312 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_312 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 8097;

                goto tuple_build_exception_78;
            }
            tmp_subscript_value_312 = mod_consts[94];
            tmp_tuple_element_78 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_312, tmp_subscript_value_312);
            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8097;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_310, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_78;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_78:;
        Py_DECREF(tmp_subscript_value_310);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_78:;
        tmp_subscript_value_309 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_310, tmp_subscript_value_310);
        Py_DECREF(tmp_subscript_value_310);
        if (tmp_subscript_value_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8097;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_78 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_309, tmp_subscript_value_309);
        Py_DECREF(tmp_subscript_value_309);
        if (tmp_dict_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8097;

            goto frame_exception_exit_1;
        }
        tmp_annotations_78 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_78, tmp_dict_key_78, tmp_dict_value_78);
        Py_DECREF(tmp_dict_value_78);
        assert(!(tmp_res != 0));


        tmp_assign_source_86 = MAKE_FUNCTION_idna$uts46data$$$function__78__seg_77(tstate, tmp_annotations_78);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_annotations_79;
        PyObject *tmp_dict_key_79;
        PyObject *tmp_dict_value_79;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_subscript_value_313;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_subscript_value_314;
        PyObject *tmp_tuple_element_79;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_subscript_value_315;
        tmp_dict_key_79 = mod_consts[92];
        tmp_expression_value_313 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_313 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_313 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_314 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_314 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_314 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8202;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_315 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_315 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8202;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_315 = mod_consts[93];
        tmp_tuple_element_79 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_315, tmp_subscript_value_315);
        if (tmp_tuple_element_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8202;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_314 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_316;
            PyObject *tmp_subscript_value_316;
            PyTuple_SET_ITEM(tmp_subscript_value_314, 0, tmp_tuple_element_79);
            tmp_expression_value_316 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_316 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_316 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 8202;

                goto tuple_build_exception_79;
            }
            tmp_subscript_value_316 = mod_consts[94];
            tmp_tuple_element_79 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_316, tmp_subscript_value_316);
            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8202;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_314, 1, tmp_tuple_element_79);
        }
        goto tuple_build_noexception_79;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_79:;
        Py_DECREF(tmp_subscript_value_314);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_79:;
        tmp_subscript_value_313 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_314, tmp_subscript_value_314);
        Py_DECREF(tmp_subscript_value_314);
        if (tmp_subscript_value_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8202;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_79 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_313, tmp_subscript_value_313);
        Py_DECREF(tmp_subscript_value_313);
        if (tmp_dict_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8202;

            goto frame_exception_exit_1;
        }
        tmp_annotations_79 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_79, tmp_dict_key_79, tmp_dict_value_79);
        Py_DECREF(tmp_dict_value_79);
        assert(!(tmp_res != 0));


        tmp_assign_source_87 = MAKE_FUNCTION_idna$uts46data$$$function__79__seg_78(tstate, tmp_annotations_79);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_annotations_80;
        PyObject *tmp_dict_key_80;
        PyObject *tmp_dict_value_80;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_subscript_value_317;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_subscript_value_318;
        PyObject *tmp_tuple_element_80;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_subscript_value_319;
        tmp_dict_key_80 = mod_consts[92];
        tmp_expression_value_317 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_317 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_317 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_318 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_318 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_318 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_319 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_319 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_319 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_319 = mod_consts[93];
        tmp_tuple_element_80 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_319, tmp_subscript_value_319);
        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_318 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_320;
            PyObject *tmp_subscript_value_320;
            PyTuple_SET_ITEM(tmp_subscript_value_318, 0, tmp_tuple_element_80);
            tmp_expression_value_320 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_320 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_320 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 8307;

                goto tuple_build_exception_80;
            }
            tmp_subscript_value_320 = mod_consts[94];
            tmp_tuple_element_80 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_320, tmp_subscript_value_320);
            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8307;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_318, 1, tmp_tuple_element_80);
        }
        goto tuple_build_noexception_80;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_80:;
        Py_DECREF(tmp_subscript_value_318);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_80:;
        tmp_subscript_value_317 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_318, tmp_subscript_value_318);
        Py_DECREF(tmp_subscript_value_318);
        if (tmp_subscript_value_317 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_80 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_317, tmp_subscript_value_317);
        Py_DECREF(tmp_subscript_value_317);
        if (tmp_dict_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8307;

            goto frame_exception_exit_1;
        }
        tmp_annotations_80 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_80, tmp_dict_key_80, tmp_dict_value_80);
        Py_DECREF(tmp_dict_value_80);
        assert(!(tmp_res != 0));


        tmp_assign_source_88 = MAKE_FUNCTION_idna$uts46data$$$function__80__seg_79(tstate, tmp_annotations_80);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_annotations_81;
        PyObject *tmp_dict_key_81;
        PyObject *tmp_dict_value_81;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_subscript_value_321;
        PyObject *tmp_expression_value_322;
        PyObject *tmp_subscript_value_322;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_expression_value_323;
        PyObject *tmp_subscript_value_323;
        tmp_dict_key_81 = mod_consts[92];
        tmp_expression_value_321 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_321 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_321 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8412;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_322 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_322 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_322 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8412;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_323 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_323 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_323 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8412;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_323 = mod_consts[93];
        tmp_tuple_element_81 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_323, tmp_subscript_value_323);
        if (tmp_tuple_element_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8412;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_322 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_324;
            PyObject *tmp_subscript_value_324;
            PyTuple_SET_ITEM(tmp_subscript_value_322, 0, tmp_tuple_element_81);
            tmp_expression_value_324 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_324 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_324 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 8412;

                goto tuple_build_exception_81;
            }
            tmp_subscript_value_324 = mod_consts[94];
            tmp_tuple_element_81 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_324, tmp_subscript_value_324);
            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8412;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_322, 1, tmp_tuple_element_81);
        }
        goto tuple_build_noexception_81;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_81:;
        Py_DECREF(tmp_subscript_value_322);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_81:;
        tmp_subscript_value_321 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_322, tmp_subscript_value_322);
        Py_DECREF(tmp_subscript_value_322);
        if (tmp_subscript_value_321 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8412;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_81 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_321, tmp_subscript_value_321);
        Py_DECREF(tmp_subscript_value_321);
        if (tmp_dict_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8412;

            goto frame_exception_exit_1;
        }
        tmp_annotations_81 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_81, tmp_dict_key_81, tmp_dict_value_81);
        Py_DECREF(tmp_dict_value_81);
        assert(!(tmp_res != 0));


        tmp_assign_source_89 = MAKE_FUNCTION_idna$uts46data$$$function__81__seg_80(tstate, tmp_annotations_81);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_annotations_82;
        PyObject *tmp_dict_key_82;
        PyObject *tmp_dict_value_82;
        PyObject *tmp_expression_value_325;
        PyObject *tmp_subscript_value_325;
        PyObject *tmp_expression_value_326;
        PyObject *tmp_subscript_value_326;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_327;
        PyObject *tmp_subscript_value_327;
        tmp_dict_key_82 = mod_consts[92];
        tmp_expression_value_325 = module_var_accessor_idna$$36$uts46data$List(tstate);
        if (unlikely(tmp_expression_value_325 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[87]);
        }

        if (tmp_expression_value_325 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_326 = module_var_accessor_idna$$36$uts46data$Union(tstate);
        if (unlikely(tmp_expression_value_326 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[89]);
        }

        if (tmp_expression_value_326 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_327 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
        if (unlikely(tmp_expression_value_327 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
        }

        if (tmp_expression_value_327 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_327 = mod_consts[93];
        tmp_tuple_element_82 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_327, tmp_subscript_value_327);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_326 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_328;
            PyObject *tmp_subscript_value_328;
            PyTuple_SET_ITEM(tmp_subscript_value_326, 0, tmp_tuple_element_82);
            tmp_expression_value_328 = module_var_accessor_idna$$36$uts46data$Tuple(tstate);
            if (unlikely(tmp_expression_value_328 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[88]);
            }

            if (tmp_expression_value_328 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 8517;

                goto tuple_build_exception_82;
            }
            tmp_subscript_value_328 = mod_consts[94];
            tmp_tuple_element_82 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_328, tmp_subscript_value_328);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8517;

                goto tuple_build_exception_82;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_326, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_82;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_82:;
        Py_DECREF(tmp_subscript_value_326);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_82:;
        tmp_subscript_value_325 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_326, tmp_subscript_value_326);
        Py_DECREF(tmp_subscript_value_326);
        if (tmp_subscript_value_325 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_82 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_325, tmp_subscript_value_325);
        Py_DECREF(tmp_subscript_value_325);
        if (tmp_dict_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8517;

            goto frame_exception_exit_1;
        }
        tmp_annotations_82 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_82, tmp_dict_key_82, tmp_dict_value_82);
        Py_DECREF(tmp_dict_value_82);
        assert(!(tmp_res != 0));


        tmp_assign_source_90 = MAKE_FUNCTION_idna$uts46data$$$function__82__seg_81(tstate, tmp_annotations_82);

        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_add_expr_left_17;
        PyObject *tmp_add_expr_right_17;
        PyObject *tmp_add_expr_left_18;
        PyObject *tmp_add_expr_right_18;
        PyObject *tmp_add_expr_left_19;
        PyObject *tmp_add_expr_right_19;
        PyObject *tmp_add_expr_left_20;
        PyObject *tmp_add_expr_right_20;
        PyObject *tmp_add_expr_left_21;
        PyObject *tmp_add_expr_right_21;
        PyObject *tmp_add_expr_left_22;
        PyObject *tmp_add_expr_right_22;
        PyObject *tmp_add_expr_left_23;
        PyObject *tmp_add_expr_right_23;
        PyObject *tmp_add_expr_left_24;
        PyObject *tmp_add_expr_right_24;
        PyObject *tmp_add_expr_left_25;
        PyObject *tmp_add_expr_right_25;
        PyObject *tmp_add_expr_left_26;
        PyObject *tmp_add_expr_right_26;
        PyObject *tmp_add_expr_left_27;
        PyObject *tmp_add_expr_right_27;
        PyObject *tmp_add_expr_left_28;
        PyObject *tmp_add_expr_right_28;
        PyObject *tmp_add_expr_left_29;
        PyObject *tmp_add_expr_right_29;
        PyObject *tmp_add_expr_left_30;
        PyObject *tmp_add_expr_right_30;
        PyObject *tmp_add_expr_left_31;
        PyObject *tmp_add_expr_right_31;
        PyObject *tmp_add_expr_left_32;
        PyObject *tmp_add_expr_right_32;
        PyObject *tmp_add_expr_left_33;
        PyObject *tmp_add_expr_right_33;
        PyObject *tmp_add_expr_left_34;
        PyObject *tmp_add_expr_right_34;
        PyObject *tmp_add_expr_left_35;
        PyObject *tmp_add_expr_right_35;
        PyObject *tmp_add_expr_left_36;
        PyObject *tmp_add_expr_right_36;
        PyObject *tmp_add_expr_left_37;
        PyObject *tmp_add_expr_right_37;
        PyObject *tmp_add_expr_left_38;
        PyObject *tmp_add_expr_right_38;
        PyObject *tmp_add_expr_left_39;
        PyObject *tmp_add_expr_right_39;
        PyObject *tmp_add_expr_left_40;
        PyObject *tmp_add_expr_right_40;
        PyObject *tmp_add_expr_left_41;
        PyObject *tmp_add_expr_right_41;
        PyObject *tmp_add_expr_left_42;
        PyObject *tmp_add_expr_right_42;
        PyObject *tmp_add_expr_left_43;
        PyObject *tmp_add_expr_right_43;
        PyObject *tmp_add_expr_left_44;
        PyObject *tmp_add_expr_right_44;
        PyObject *tmp_add_expr_left_45;
        PyObject *tmp_add_expr_right_45;
        PyObject *tmp_add_expr_left_46;
        PyObject *tmp_add_expr_right_46;
        PyObject *tmp_add_expr_left_47;
        PyObject *tmp_add_expr_right_47;
        PyObject *tmp_add_expr_left_48;
        PyObject *tmp_add_expr_right_48;
        PyObject *tmp_add_expr_left_49;
        PyObject *tmp_add_expr_right_49;
        PyObject *tmp_add_expr_left_50;
        PyObject *tmp_add_expr_right_50;
        PyObject *tmp_add_expr_left_51;
        PyObject *tmp_add_expr_right_51;
        PyObject *tmp_add_expr_left_52;
        PyObject *tmp_add_expr_right_52;
        PyObject *tmp_add_expr_left_53;
        PyObject *tmp_add_expr_right_53;
        PyObject *tmp_add_expr_left_54;
        PyObject *tmp_add_expr_right_54;
        PyObject *tmp_add_expr_left_55;
        PyObject *tmp_add_expr_right_55;
        PyObject *tmp_add_expr_left_56;
        PyObject *tmp_add_expr_right_56;
        PyObject *tmp_add_expr_left_57;
        PyObject *tmp_add_expr_right_57;
        PyObject *tmp_add_expr_left_58;
        PyObject *tmp_add_expr_right_58;
        PyObject *tmp_add_expr_left_59;
        PyObject *tmp_add_expr_right_59;
        PyObject *tmp_add_expr_left_60;
        PyObject *tmp_add_expr_right_60;
        PyObject *tmp_add_expr_left_61;
        PyObject *tmp_add_expr_right_61;
        PyObject *tmp_add_expr_left_62;
        PyObject *tmp_add_expr_right_62;
        PyObject *tmp_add_expr_left_63;
        PyObject *tmp_add_expr_right_63;
        PyObject *tmp_add_expr_left_64;
        PyObject *tmp_add_expr_right_64;
        PyObject *tmp_add_expr_left_65;
        PyObject *tmp_add_expr_right_65;
        PyObject *tmp_add_expr_left_66;
        PyObject *tmp_add_expr_right_66;
        PyObject *tmp_add_expr_left_67;
        PyObject *tmp_add_expr_right_67;
        PyObject *tmp_add_expr_left_68;
        PyObject *tmp_add_expr_right_68;
        PyObject *tmp_add_expr_left_69;
        PyObject *tmp_add_expr_right_69;
        PyObject *tmp_add_expr_left_70;
        PyObject *tmp_add_expr_right_70;
        PyObject *tmp_add_expr_left_71;
        PyObject *tmp_add_expr_right_71;
        PyObject *tmp_add_expr_left_72;
        PyObject *tmp_add_expr_right_72;
        PyObject *tmp_add_expr_left_73;
        PyObject *tmp_add_expr_right_73;
        PyObject *tmp_add_expr_left_74;
        PyObject *tmp_add_expr_right_74;
        PyObject *tmp_add_expr_left_75;
        PyObject *tmp_add_expr_right_75;
        PyObject *tmp_add_expr_left_76;
        PyObject *tmp_add_expr_right_76;
        PyObject *tmp_add_expr_left_77;
        PyObject *tmp_add_expr_right_77;
        PyObject *tmp_add_expr_left_78;
        PyObject *tmp_add_expr_right_78;
        PyObject *tmp_add_expr_left_79;
        PyObject *tmp_add_expr_right_79;
        PyObject *tmp_add_expr_left_80;
        PyObject *tmp_add_expr_right_80;
        PyObject *tmp_add_expr_left_81;
        PyObject *tmp_add_expr_right_81;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_called_value_56;
        PyObject *tmp_called_value_57;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_called_value_80;
        PyObject *tmp_called_value_81;
        PyObject *tmp_called_value_82;
        tmp_called_value_1 = module_var_accessor_idna$$36$uts46data$_seg_0(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[95]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 8599;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8599;
        tmp_add_expr_left_81 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_add_expr_left_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8599;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = module_var_accessor_idna$$36$uts46data$_seg_1(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[96]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_81);

            exception_lineno = 8600;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8600;
        tmp_add_expr_right_81 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_add_expr_right_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_81);

            exception_lineno = 8600;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_80 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_81, tmp_add_expr_right_81);
        Py_DECREF(tmp_add_expr_left_81);
        Py_DECREF(tmp_add_expr_right_81);
        if (tmp_add_expr_left_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8600;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = module_var_accessor_idna$$36$uts46data$_seg_2(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[97]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_80);

            exception_lineno = 8601;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8601;
        tmp_add_expr_right_80 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_add_expr_right_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_80);

            exception_lineno = 8601;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_80, tmp_add_expr_right_80);
        Py_DECREF(tmp_add_expr_left_80);
        Py_DECREF(tmp_add_expr_right_80);
        if (tmp_add_expr_left_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8601;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = module_var_accessor_idna$$36$uts46data$_seg_3(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[98]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_79);

            exception_lineno = 8602;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8602;
        tmp_add_expr_right_79 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_add_expr_right_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_79);

            exception_lineno = 8602;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_78 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_79, tmp_add_expr_right_79);
        Py_DECREF(tmp_add_expr_left_79);
        Py_DECREF(tmp_add_expr_right_79);
        if (tmp_add_expr_left_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8602;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = module_var_accessor_idna$$36$uts46data$_seg_4(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[99]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_78);

            exception_lineno = 8603;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8603;
        tmp_add_expr_right_78 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
        if (tmp_add_expr_right_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_78);

            exception_lineno = 8603;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_77 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_78, tmp_add_expr_right_78);
        Py_DECREF(tmp_add_expr_left_78);
        Py_DECREF(tmp_add_expr_right_78);
        if (tmp_add_expr_left_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8603;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = module_var_accessor_idna$$36$uts46data$_seg_5(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[100]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_77);

            exception_lineno = 8604;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8604;
        tmp_add_expr_right_77 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        if (tmp_add_expr_right_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_77);

            exception_lineno = 8604;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_76 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_77, tmp_add_expr_right_77);
        Py_DECREF(tmp_add_expr_left_77);
        Py_DECREF(tmp_add_expr_right_77);
        if (tmp_add_expr_left_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8604;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = module_var_accessor_idna$$36$uts46data$_seg_6(tstate);
        if (unlikely(tmp_called_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[101]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_76);

            exception_lineno = 8605;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8605;
        tmp_add_expr_right_76 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        if (tmp_add_expr_right_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_76);

            exception_lineno = 8605;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_75 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_76, tmp_add_expr_right_76);
        Py_DECREF(tmp_add_expr_left_76);
        Py_DECREF(tmp_add_expr_right_76);
        if (tmp_add_expr_left_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8605;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = module_var_accessor_idna$$36$uts46data$_seg_7(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[102]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_75);

            exception_lineno = 8606;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8606;
        tmp_add_expr_right_75 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        if (tmp_add_expr_right_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_75);

            exception_lineno = 8606;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_74 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_75, tmp_add_expr_right_75);
        Py_DECREF(tmp_add_expr_left_75);
        Py_DECREF(tmp_add_expr_right_75);
        if (tmp_add_expr_left_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8606;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = module_var_accessor_idna$$36$uts46data$_seg_8(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[103]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_74);

            exception_lineno = 8607;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8607;
        tmp_add_expr_right_74 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        if (tmp_add_expr_right_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_74);

            exception_lineno = 8607;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_74, tmp_add_expr_right_74);
        Py_DECREF(tmp_add_expr_left_74);
        Py_DECREF(tmp_add_expr_right_74);
        if (tmp_add_expr_left_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8607;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = module_var_accessor_idna$$36$uts46data$_seg_9(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[104]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_73);

            exception_lineno = 8608;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8608;
        tmp_add_expr_right_73 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        if (tmp_add_expr_right_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_73);

            exception_lineno = 8608;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_72 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_73, tmp_add_expr_right_73);
        Py_DECREF(tmp_add_expr_left_73);
        Py_DECREF(tmp_add_expr_right_73);
        if (tmp_add_expr_left_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8608;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = module_var_accessor_idna$$36$uts46data$_seg_10(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[105]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_72);

            exception_lineno = 8609;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8609;
        tmp_add_expr_right_72 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        if (tmp_add_expr_right_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_72);

            exception_lineno = 8609;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_71 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_72, tmp_add_expr_right_72);
        Py_DECREF(tmp_add_expr_left_72);
        Py_DECREF(tmp_add_expr_right_72);
        if (tmp_add_expr_left_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8609;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = module_var_accessor_idna$$36$uts46data$_seg_11(tstate);
        if (unlikely(tmp_called_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[106]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_71);

            exception_lineno = 8610;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8610;
        tmp_add_expr_right_71 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
        if (tmp_add_expr_right_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_71);

            exception_lineno = 8610;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_70 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_71, tmp_add_expr_right_71);
        Py_DECREF(tmp_add_expr_left_71);
        Py_DECREF(tmp_add_expr_right_71);
        if (tmp_add_expr_left_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8610;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = module_var_accessor_idna$$36$uts46data$_seg_12(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[107]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_70);

            exception_lineno = 8611;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8611;
        tmp_add_expr_right_70 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
        if (tmp_add_expr_right_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_70);

            exception_lineno = 8611;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_69 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_70, tmp_add_expr_right_70);
        Py_DECREF(tmp_add_expr_left_70);
        Py_DECREF(tmp_add_expr_right_70);
        if (tmp_add_expr_left_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8611;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = module_var_accessor_idna$$36$uts46data$_seg_13(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[108]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_69);

            exception_lineno = 8612;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8612;
        tmp_add_expr_right_69 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
        if (tmp_add_expr_right_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_69);

            exception_lineno = 8612;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_68 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_69, tmp_add_expr_right_69);
        Py_DECREF(tmp_add_expr_left_69);
        Py_DECREF(tmp_add_expr_right_69);
        if (tmp_add_expr_left_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8612;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = module_var_accessor_idna$$36$uts46data$_seg_14(tstate);
        if (unlikely(tmp_called_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[109]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_68);

            exception_lineno = 8613;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8613;
        tmp_add_expr_right_68 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
        if (tmp_add_expr_right_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_68);

            exception_lineno = 8613;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_67 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_68, tmp_add_expr_right_68);
        Py_DECREF(tmp_add_expr_left_68);
        Py_DECREF(tmp_add_expr_right_68);
        if (tmp_add_expr_left_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8613;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = module_var_accessor_idna$$36$uts46data$_seg_15(tstate);
        if (unlikely(tmp_called_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[110]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_67);

            exception_lineno = 8614;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8614;
        tmp_add_expr_right_67 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_16);
        if (tmp_add_expr_right_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_67);

            exception_lineno = 8614;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_66 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_67, tmp_add_expr_right_67);
        Py_DECREF(tmp_add_expr_left_67);
        Py_DECREF(tmp_add_expr_right_67);
        if (tmp_add_expr_left_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8614;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = module_var_accessor_idna$$36$uts46data$_seg_16(tstate);
        if (unlikely(tmp_called_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[111]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_66);

            exception_lineno = 8615;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8615;
        tmp_add_expr_right_66 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
        if (tmp_add_expr_right_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_66);

            exception_lineno = 8615;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_65 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_66, tmp_add_expr_right_66);
        Py_DECREF(tmp_add_expr_left_66);
        Py_DECREF(tmp_add_expr_right_66);
        if (tmp_add_expr_left_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8615;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = module_var_accessor_idna$$36$uts46data$_seg_17(tstate);
        if (unlikely(tmp_called_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[112]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_65);

            exception_lineno = 8616;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8616;
        tmp_add_expr_right_65 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_18);
        if (tmp_add_expr_right_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_65);

            exception_lineno = 8616;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_64 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_65, tmp_add_expr_right_65);
        Py_DECREF(tmp_add_expr_left_65);
        Py_DECREF(tmp_add_expr_right_65);
        if (tmp_add_expr_left_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8616;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = module_var_accessor_idna$$36$uts46data$_seg_18(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[113]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_64);

            exception_lineno = 8617;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8617;
        tmp_add_expr_right_64 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_19);
        if (tmp_add_expr_right_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_64);

            exception_lineno = 8617;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_63 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_64, tmp_add_expr_right_64);
        Py_DECREF(tmp_add_expr_left_64);
        Py_DECREF(tmp_add_expr_right_64);
        if (tmp_add_expr_left_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8617;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = module_var_accessor_idna$$36$uts46data$_seg_19(tstate);
        if (unlikely(tmp_called_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[114]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_63);

            exception_lineno = 8618;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8618;
        tmp_add_expr_right_63 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
        if (tmp_add_expr_right_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_63);

            exception_lineno = 8618;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_62 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_63, tmp_add_expr_right_63);
        Py_DECREF(tmp_add_expr_left_63);
        Py_DECREF(tmp_add_expr_right_63);
        if (tmp_add_expr_left_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8618;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = module_var_accessor_idna$$36$uts46data$_seg_20(tstate);
        if (unlikely(tmp_called_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[115]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_62);

            exception_lineno = 8619;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8619;
        tmp_add_expr_right_62 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
        if (tmp_add_expr_right_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_62);

            exception_lineno = 8619;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_62, tmp_add_expr_right_62);
        Py_DECREF(tmp_add_expr_left_62);
        Py_DECREF(tmp_add_expr_right_62);
        if (tmp_add_expr_left_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8619;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = module_var_accessor_idna$$36$uts46data$_seg_21(tstate);
        if (unlikely(tmp_called_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[116]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_61);

            exception_lineno = 8620;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8620;
        tmp_add_expr_right_61 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
        if (tmp_add_expr_right_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_61);

            exception_lineno = 8620;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_60 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_61, tmp_add_expr_right_61);
        Py_DECREF(tmp_add_expr_left_61);
        Py_DECREF(tmp_add_expr_right_61);
        if (tmp_add_expr_left_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8620;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = module_var_accessor_idna$$36$uts46data$_seg_22(tstate);
        if (unlikely(tmp_called_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[117]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_60);

            exception_lineno = 8621;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8621;
        tmp_add_expr_right_60 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_23);
        if (tmp_add_expr_right_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_60);

            exception_lineno = 8621;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_59 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_60, tmp_add_expr_right_60);
        Py_DECREF(tmp_add_expr_left_60);
        Py_DECREF(tmp_add_expr_right_60);
        if (tmp_add_expr_left_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8621;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = module_var_accessor_idna$$36$uts46data$_seg_23(tstate);
        if (unlikely(tmp_called_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[118]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_59);

            exception_lineno = 8622;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8622;
        tmp_add_expr_right_59 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_24);
        if (tmp_add_expr_right_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_59);

            exception_lineno = 8622;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_58 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_59, tmp_add_expr_right_59);
        Py_DECREF(tmp_add_expr_left_59);
        Py_DECREF(tmp_add_expr_right_59);
        if (tmp_add_expr_left_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8622;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = module_var_accessor_idna$$36$uts46data$_seg_24(tstate);
        if (unlikely(tmp_called_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_58);

            exception_lineno = 8623;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8623;
        tmp_add_expr_right_58 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_25);
        if (tmp_add_expr_right_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_58);

            exception_lineno = 8623;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_58, tmp_add_expr_right_58);
        Py_DECREF(tmp_add_expr_left_58);
        Py_DECREF(tmp_add_expr_right_58);
        if (tmp_add_expr_left_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8623;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = module_var_accessor_idna$$36$uts46data$_seg_25(tstate);
        if (unlikely(tmp_called_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[120]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_57);

            exception_lineno = 8624;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8624;
        tmp_add_expr_right_57 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_26);
        if (tmp_add_expr_right_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_57);

            exception_lineno = 8624;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_57, tmp_add_expr_right_57);
        Py_DECREF(tmp_add_expr_left_57);
        Py_DECREF(tmp_add_expr_right_57);
        if (tmp_add_expr_left_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8624;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = module_var_accessor_idna$$36$uts46data$_seg_26(tstate);
        if (unlikely(tmp_called_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[121]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_56);

            exception_lineno = 8625;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8625;
        tmp_add_expr_right_56 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_27);
        if (tmp_add_expr_right_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_56);

            exception_lineno = 8625;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_55 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_56, tmp_add_expr_right_56);
        Py_DECREF(tmp_add_expr_left_56);
        Py_DECREF(tmp_add_expr_right_56);
        if (tmp_add_expr_left_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8625;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = module_var_accessor_idna$$36$uts46data$_seg_27(tstate);
        if (unlikely(tmp_called_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[122]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_55);

            exception_lineno = 8626;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8626;
        tmp_add_expr_right_55 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
        if (tmp_add_expr_right_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_55);

            exception_lineno = 8626;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_55, tmp_add_expr_right_55);
        Py_DECREF(tmp_add_expr_left_55);
        Py_DECREF(tmp_add_expr_right_55);
        if (tmp_add_expr_left_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8626;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = module_var_accessor_idna$$36$uts46data$_seg_28(tstate);
        if (unlikely(tmp_called_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[123]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_54);

            exception_lineno = 8627;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8627;
        tmp_add_expr_right_54 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_29);
        if (tmp_add_expr_right_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_54);

            exception_lineno = 8627;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_54, tmp_add_expr_right_54);
        Py_DECREF(tmp_add_expr_left_54);
        Py_DECREF(tmp_add_expr_right_54);
        if (tmp_add_expr_left_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8627;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = module_var_accessor_idna$$36$uts46data$_seg_29(tstate);
        if (unlikely(tmp_called_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[124]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_53);

            exception_lineno = 8628;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8628;
        tmp_add_expr_right_53 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_30);
        if (tmp_add_expr_right_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_53);

            exception_lineno = 8628;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_53, tmp_add_expr_right_53);
        Py_DECREF(tmp_add_expr_left_53);
        Py_DECREF(tmp_add_expr_right_53);
        if (tmp_add_expr_left_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8628;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = module_var_accessor_idna$$36$uts46data$_seg_30(tstate);
        if (unlikely(tmp_called_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[125]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_52);

            exception_lineno = 8629;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8629;
        tmp_add_expr_right_52 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_31);
        if (tmp_add_expr_right_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_52);

            exception_lineno = 8629;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_52, tmp_add_expr_right_52);
        Py_DECREF(tmp_add_expr_left_52);
        Py_DECREF(tmp_add_expr_right_52);
        if (tmp_add_expr_left_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8629;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = module_var_accessor_idna$$36$uts46data$_seg_31(tstate);
        if (unlikely(tmp_called_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[126]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_51);

            exception_lineno = 8630;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8630;
        tmp_add_expr_right_51 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
        if (tmp_add_expr_right_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_51);

            exception_lineno = 8630;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_51, tmp_add_expr_right_51);
        Py_DECREF(tmp_add_expr_left_51);
        Py_DECREF(tmp_add_expr_right_51);
        if (tmp_add_expr_left_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8630;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = module_var_accessor_idna$$36$uts46data$_seg_32(tstate);
        if (unlikely(tmp_called_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_50);

            exception_lineno = 8631;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8631;
        tmp_add_expr_right_50 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_33);
        if (tmp_add_expr_right_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_50);

            exception_lineno = 8631;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_50, tmp_add_expr_right_50);
        Py_DECREF(tmp_add_expr_left_50);
        Py_DECREF(tmp_add_expr_right_50);
        if (tmp_add_expr_left_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8631;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = module_var_accessor_idna$$36$uts46data$_seg_33(tstate);
        if (unlikely(tmp_called_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[128]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_49);

            exception_lineno = 8632;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8632;
        tmp_add_expr_right_49 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_34);
        if (tmp_add_expr_right_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_49);

            exception_lineno = 8632;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_48 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_49, tmp_add_expr_right_49);
        Py_DECREF(tmp_add_expr_left_49);
        Py_DECREF(tmp_add_expr_right_49);
        if (tmp_add_expr_left_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8632;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = module_var_accessor_idna$$36$uts46data$_seg_34(tstate);
        if (unlikely(tmp_called_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[129]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_48);

            exception_lineno = 8633;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8633;
        tmp_add_expr_right_48 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_35);
        if (tmp_add_expr_right_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_48);

            exception_lineno = 8633;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_48, tmp_add_expr_right_48);
        Py_DECREF(tmp_add_expr_left_48);
        Py_DECREF(tmp_add_expr_right_48);
        if (tmp_add_expr_left_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8633;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = module_var_accessor_idna$$36$uts46data$_seg_35(tstate);
        if (unlikely(tmp_called_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[130]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_47);

            exception_lineno = 8634;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8634;
        tmp_add_expr_right_47 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_36);
        if (tmp_add_expr_right_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_47);

            exception_lineno = 8634;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_47, tmp_add_expr_right_47);
        Py_DECREF(tmp_add_expr_left_47);
        Py_DECREF(tmp_add_expr_right_47);
        if (tmp_add_expr_left_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8634;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = module_var_accessor_idna$$36$uts46data$_seg_36(tstate);
        if (unlikely(tmp_called_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[131]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_46);

            exception_lineno = 8635;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8635;
        tmp_add_expr_right_46 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_37);
        if (tmp_add_expr_right_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_46);

            exception_lineno = 8635;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_46, tmp_add_expr_right_46);
        Py_DECREF(tmp_add_expr_left_46);
        Py_DECREF(tmp_add_expr_right_46);
        if (tmp_add_expr_left_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8635;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = module_var_accessor_idna$$36$uts46data$_seg_37(tstate);
        if (unlikely(tmp_called_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[132]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_45);

            exception_lineno = 8636;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8636;
        tmp_add_expr_right_45 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_38);
        if (tmp_add_expr_right_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_45);

            exception_lineno = 8636;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_45, tmp_add_expr_right_45);
        Py_DECREF(tmp_add_expr_left_45);
        Py_DECREF(tmp_add_expr_right_45);
        if (tmp_add_expr_left_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8636;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = module_var_accessor_idna$$36$uts46data$_seg_38(tstate);
        if (unlikely(tmp_called_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[133]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 8637;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8637;
        tmp_add_expr_right_44 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_39);
        if (tmp_add_expr_right_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_44);

            exception_lineno = 8637;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_44, tmp_add_expr_right_44);
        Py_DECREF(tmp_add_expr_left_44);
        Py_DECREF(tmp_add_expr_right_44);
        if (tmp_add_expr_left_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8637;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = module_var_accessor_idna$$36$uts46data$_seg_39(tstate);
        if (unlikely(tmp_called_value_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[134]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 8638;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8638;
        tmp_add_expr_right_43 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
        if (tmp_add_expr_right_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_43);

            exception_lineno = 8638;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_43, tmp_add_expr_right_43);
        Py_DECREF(tmp_add_expr_left_43);
        Py_DECREF(tmp_add_expr_right_43);
        if (tmp_add_expr_left_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8638;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = module_var_accessor_idna$$36$uts46data$_seg_40(tstate);
        if (unlikely(tmp_called_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[135]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 8639;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8639;
        tmp_add_expr_right_42 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_41);
        if (tmp_add_expr_right_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_42);

            exception_lineno = 8639;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_42, tmp_add_expr_right_42);
        Py_DECREF(tmp_add_expr_left_42);
        Py_DECREF(tmp_add_expr_right_42);
        if (tmp_add_expr_left_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8639;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = module_var_accessor_idna$$36$uts46data$_seg_41(tstate);
        if (unlikely(tmp_called_value_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[136]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_41);

            exception_lineno = 8640;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8640;
        tmp_add_expr_right_41 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_42);
        if (tmp_add_expr_right_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_41);

            exception_lineno = 8640;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_41, tmp_add_expr_right_41);
        Py_DECREF(tmp_add_expr_left_41);
        Py_DECREF(tmp_add_expr_right_41);
        if (tmp_add_expr_left_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8640;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = module_var_accessor_idna$$36$uts46data$_seg_42(tstate);
        if (unlikely(tmp_called_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[137]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 8641;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8641;
        tmp_add_expr_right_40 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_43);
        if (tmp_add_expr_right_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_40);

            exception_lineno = 8641;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_40, tmp_add_expr_right_40);
        Py_DECREF(tmp_add_expr_left_40);
        Py_DECREF(tmp_add_expr_right_40);
        if (tmp_add_expr_left_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8641;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = module_var_accessor_idna$$36$uts46data$_seg_43(tstate);
        if (unlikely(tmp_called_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[138]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 8642;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8642;
        tmp_add_expr_right_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_44);
        if (tmp_add_expr_right_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_39);

            exception_lineno = 8642;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_39, tmp_add_expr_right_39);
        Py_DECREF(tmp_add_expr_left_39);
        Py_DECREF(tmp_add_expr_right_39);
        if (tmp_add_expr_left_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8642;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = module_var_accessor_idna$$36$uts46data$_seg_44(tstate);
        if (unlikely(tmp_called_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[139]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_38);

            exception_lineno = 8643;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8643;
        tmp_add_expr_right_38 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_45);
        if (tmp_add_expr_right_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_38);

            exception_lineno = 8643;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_38, tmp_add_expr_right_38);
        Py_DECREF(tmp_add_expr_left_38);
        Py_DECREF(tmp_add_expr_right_38);
        if (tmp_add_expr_left_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8643;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = module_var_accessor_idna$$36$uts46data$_seg_45(tstate);
        if (unlikely(tmp_called_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[140]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 8644;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8644;
        tmp_add_expr_right_37 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_46);
        if (tmp_add_expr_right_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_37);

            exception_lineno = 8644;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_37, tmp_add_expr_right_37);
        Py_DECREF(tmp_add_expr_left_37);
        Py_DECREF(tmp_add_expr_right_37);
        if (tmp_add_expr_left_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8644;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = module_var_accessor_idna$$36$uts46data$_seg_46(tstate);
        if (unlikely(tmp_called_value_47 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[141]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 8645;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8645;
        tmp_add_expr_right_36 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_47);
        if (tmp_add_expr_right_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_36);

            exception_lineno = 8645;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_36, tmp_add_expr_right_36);
        Py_DECREF(tmp_add_expr_left_36);
        Py_DECREF(tmp_add_expr_right_36);
        if (tmp_add_expr_left_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8645;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = module_var_accessor_idna$$36$uts46data$_seg_47(tstate);
        if (unlikely(tmp_called_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[142]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_35);

            exception_lineno = 8646;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8646;
        tmp_add_expr_right_35 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_48);
        if (tmp_add_expr_right_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_35);

            exception_lineno = 8646;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_35, tmp_add_expr_right_35);
        Py_DECREF(tmp_add_expr_left_35);
        Py_DECREF(tmp_add_expr_right_35);
        if (tmp_add_expr_left_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8646;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = module_var_accessor_idna$$36$uts46data$_seg_48(tstate);
        if (unlikely(tmp_called_value_49 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[143]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_34);

            exception_lineno = 8647;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8647;
        tmp_add_expr_right_34 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_49);
        if (tmp_add_expr_right_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_34);

            exception_lineno = 8647;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_34, tmp_add_expr_right_34);
        Py_DECREF(tmp_add_expr_left_34);
        Py_DECREF(tmp_add_expr_right_34);
        if (tmp_add_expr_left_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8647;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = module_var_accessor_idna$$36$uts46data$_seg_49(tstate);
        if (unlikely(tmp_called_value_50 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[144]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_33);

            exception_lineno = 8648;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8648;
        tmp_add_expr_right_33 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_50);
        if (tmp_add_expr_right_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_33);

            exception_lineno = 8648;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_33, tmp_add_expr_right_33);
        Py_DECREF(tmp_add_expr_left_33);
        Py_DECREF(tmp_add_expr_right_33);
        if (tmp_add_expr_left_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8648;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = module_var_accessor_idna$$36$uts46data$_seg_50(tstate);
        if (unlikely(tmp_called_value_51 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[145]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_32);

            exception_lineno = 8649;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8649;
        tmp_add_expr_right_32 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_51);
        if (tmp_add_expr_right_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_32);

            exception_lineno = 8649;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_32, tmp_add_expr_right_32);
        Py_DECREF(tmp_add_expr_left_32);
        Py_DECREF(tmp_add_expr_right_32);
        if (tmp_add_expr_left_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8649;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = module_var_accessor_idna$$36$uts46data$_seg_51(tstate);
        if (unlikely(tmp_called_value_52 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[146]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_31);

            exception_lineno = 8650;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8650;
        tmp_add_expr_right_31 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_52);
        if (tmp_add_expr_right_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_31);

            exception_lineno = 8650;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_31, tmp_add_expr_right_31);
        Py_DECREF(tmp_add_expr_left_31);
        Py_DECREF(tmp_add_expr_right_31);
        if (tmp_add_expr_left_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8650;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = module_var_accessor_idna$$36$uts46data$_seg_52(tstate);
        if (unlikely(tmp_called_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[147]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 8651;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8651;
        tmp_add_expr_right_30 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_53);
        if (tmp_add_expr_right_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_30);

            exception_lineno = 8651;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_30, tmp_add_expr_right_30);
        Py_DECREF(tmp_add_expr_left_30);
        Py_DECREF(tmp_add_expr_right_30);
        if (tmp_add_expr_left_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8651;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = module_var_accessor_idna$$36$uts46data$_seg_53(tstate);
        if (unlikely(tmp_called_value_54 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[148]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 8652;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8652;
        tmp_add_expr_right_29 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_54);
        if (tmp_add_expr_right_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_29);

            exception_lineno = 8652;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_29, tmp_add_expr_right_29);
        Py_DECREF(tmp_add_expr_left_29);
        Py_DECREF(tmp_add_expr_right_29);
        if (tmp_add_expr_left_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8652;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = module_var_accessor_idna$$36$uts46data$_seg_54(tstate);
        if (unlikely(tmp_called_value_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[149]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_28);

            exception_lineno = 8653;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8653;
        tmp_add_expr_right_28 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_55);
        if (tmp_add_expr_right_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_28);

            exception_lineno = 8653;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_28, tmp_add_expr_right_28);
        Py_DECREF(tmp_add_expr_left_28);
        Py_DECREF(tmp_add_expr_right_28);
        if (tmp_add_expr_left_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8653;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = module_var_accessor_idna$$36$uts46data$_seg_55(tstate);
        if (unlikely(tmp_called_value_56 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[150]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_27);

            exception_lineno = 8654;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8654;
        tmp_add_expr_right_27 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_56);
        if (tmp_add_expr_right_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_27);

            exception_lineno = 8654;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_27, tmp_add_expr_right_27);
        Py_DECREF(tmp_add_expr_left_27);
        Py_DECREF(tmp_add_expr_right_27);
        if (tmp_add_expr_left_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8654;

            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = module_var_accessor_idna$$36$uts46data$_seg_56(tstate);
        if (unlikely(tmp_called_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[151]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 8655;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8655;
        tmp_add_expr_right_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_57);
        if (tmp_add_expr_right_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_26);

            exception_lineno = 8655;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_26, tmp_add_expr_right_26);
        Py_DECREF(tmp_add_expr_left_26);
        Py_DECREF(tmp_add_expr_right_26);
        if (tmp_add_expr_left_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8655;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = module_var_accessor_idna$$36$uts46data$_seg_57(tstate);
        if (unlikely(tmp_called_value_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[152]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 8656;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8656;
        tmp_add_expr_right_25 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_58);
        if (tmp_add_expr_right_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_25);

            exception_lineno = 8656;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_25, tmp_add_expr_right_25);
        Py_DECREF(tmp_add_expr_left_25);
        Py_DECREF(tmp_add_expr_right_25);
        if (tmp_add_expr_left_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8656;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = module_var_accessor_idna$$36$uts46data$_seg_58(tstate);
        if (unlikely(tmp_called_value_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[153]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_24);

            exception_lineno = 8657;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8657;
        tmp_add_expr_right_24 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_59);
        if (tmp_add_expr_right_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_24);

            exception_lineno = 8657;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_24, tmp_add_expr_right_24);
        Py_DECREF(tmp_add_expr_left_24);
        Py_DECREF(tmp_add_expr_right_24);
        if (tmp_add_expr_left_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8657;

            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = module_var_accessor_idna$$36$uts46data$_seg_59(tstate);
        if (unlikely(tmp_called_value_60 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[154]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_23);

            exception_lineno = 8658;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8658;
        tmp_add_expr_right_23 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_60);
        if (tmp_add_expr_right_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_23);

            exception_lineno = 8658;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_23, tmp_add_expr_right_23);
        Py_DECREF(tmp_add_expr_left_23);
        Py_DECREF(tmp_add_expr_right_23);
        if (tmp_add_expr_left_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8658;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = module_var_accessor_idna$$36$uts46data$_seg_60(tstate);
        if (unlikely(tmp_called_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[155]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 8659;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8659;
        tmp_add_expr_right_22 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_61);
        if (tmp_add_expr_right_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_22);

            exception_lineno = 8659;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_22, tmp_add_expr_right_22);
        Py_DECREF(tmp_add_expr_left_22);
        Py_DECREF(tmp_add_expr_right_22);
        if (tmp_add_expr_left_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8659;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = module_var_accessor_idna$$36$uts46data$_seg_61(tstate);
        if (unlikely(tmp_called_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[156]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_21);

            exception_lineno = 8660;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8660;
        tmp_add_expr_right_21 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_62);
        if (tmp_add_expr_right_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_21);

            exception_lineno = 8660;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_21, tmp_add_expr_right_21);
        Py_DECREF(tmp_add_expr_left_21);
        Py_DECREF(tmp_add_expr_right_21);
        if (tmp_add_expr_left_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8660;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = module_var_accessor_idna$$36$uts46data$_seg_62(tstate);
        if (unlikely(tmp_called_value_63 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[157]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 8661;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8661;
        tmp_add_expr_right_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_63);
        if (tmp_add_expr_right_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_20);

            exception_lineno = 8661;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
        Py_DECREF(tmp_add_expr_left_20);
        Py_DECREF(tmp_add_expr_right_20);
        if (tmp_add_expr_left_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8661;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = module_var_accessor_idna$$36$uts46data$_seg_63(tstate);
        if (unlikely(tmp_called_value_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[158]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 8662;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8662;
        tmp_add_expr_right_19 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_64);
        if (tmp_add_expr_right_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_19);

            exception_lineno = 8662;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
        Py_DECREF(tmp_add_expr_left_19);
        Py_DECREF(tmp_add_expr_right_19);
        if (tmp_add_expr_left_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8662;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = module_var_accessor_idna$$36$uts46data$_seg_64(tstate);
        if (unlikely(tmp_called_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[159]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 8663;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8663;
        tmp_add_expr_right_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_65);
        if (tmp_add_expr_right_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_18);

            exception_lineno = 8663;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
        Py_DECREF(tmp_add_expr_left_18);
        Py_DECREF(tmp_add_expr_right_18);
        if (tmp_add_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8663;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = module_var_accessor_idna$$36$uts46data$_seg_65(tstate);
        if (unlikely(tmp_called_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[160]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 8664;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8664;
        tmp_add_expr_right_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_66);
        if (tmp_add_expr_right_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_17);

            exception_lineno = 8664;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
        Py_DECREF(tmp_add_expr_left_17);
        Py_DECREF(tmp_add_expr_right_17);
        if (tmp_add_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8664;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = module_var_accessor_idna$$36$uts46data$_seg_66(tstate);
        if (unlikely(tmp_called_value_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[161]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 8665;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8665;
        tmp_add_expr_right_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_67);
        if (tmp_add_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_16);

            exception_lineno = 8665;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        Py_DECREF(tmp_add_expr_right_16);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8665;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = module_var_accessor_idna$$36$uts46data$_seg_67(tstate);
        if (unlikely(tmp_called_value_68 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[162]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 8666;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8666;
        tmp_add_expr_right_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_68);
        if (tmp_add_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_15);

            exception_lineno = 8666;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8666;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = module_var_accessor_idna$$36$uts46data$_seg_68(tstate);
        if (unlikely(tmp_called_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[163]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 8667;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8667;
        tmp_add_expr_right_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_69);
        if (tmp_add_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_14);

            exception_lineno = 8667;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8667;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = module_var_accessor_idna$$36$uts46data$_seg_69(tstate);
        if (unlikely(tmp_called_value_70 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[164]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 8668;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8668;
        tmp_add_expr_right_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_70);
        if (tmp_add_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_13);

            exception_lineno = 8668;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8668;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = module_var_accessor_idna$$36$uts46data$_seg_70(tstate);
        if (unlikely(tmp_called_value_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[165]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 8669;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8669;
        tmp_add_expr_right_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_71);
        if (tmp_add_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_12);

            exception_lineno = 8669;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        Py_DECREF(tmp_add_expr_right_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8669;

            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = module_var_accessor_idna$$36$uts46data$_seg_71(tstate);
        if (unlikely(tmp_called_value_72 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[166]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 8670;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8670;
        tmp_add_expr_right_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_72);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_11);

            exception_lineno = 8670;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8670;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = module_var_accessor_idna$$36$uts46data$_seg_72(tstate);
        if (unlikely(tmp_called_value_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[167]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 8671;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8671;
        tmp_add_expr_right_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_73);
        if (tmp_add_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_10);

            exception_lineno = 8671;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        Py_DECREF(tmp_add_expr_right_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8671;

            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = module_var_accessor_idna$$36$uts46data$_seg_73(tstate);
        if (unlikely(tmp_called_value_74 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[168]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 8672;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8672;
        tmp_add_expr_right_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_74);
        if (tmp_add_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_9);

            exception_lineno = 8672;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8672;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = module_var_accessor_idna$$36$uts46data$_seg_74(tstate);
        if (unlikely(tmp_called_value_75 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[169]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 8673;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8673;
        tmp_add_expr_right_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_75);
        if (tmp_add_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_8);

            exception_lineno = 8673;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8673;

            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = module_var_accessor_idna$$36$uts46data$_seg_75(tstate);
        if (unlikely(tmp_called_value_76 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[170]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 8674;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8674;
        tmp_add_expr_right_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_76);
        if (tmp_add_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_7);

            exception_lineno = 8674;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8674;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = module_var_accessor_idna$$36$uts46data$_seg_76(tstate);
        if (unlikely(tmp_called_value_77 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[171]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 8675;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8675;
        tmp_add_expr_right_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_77);
        if (tmp_add_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_6);

            exception_lineno = 8675;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        Py_DECREF(tmp_add_expr_right_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8675;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = module_var_accessor_idna$$36$uts46data$_seg_77(tstate);
        if (unlikely(tmp_called_value_78 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[172]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 8676;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8676;
        tmp_add_expr_right_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_78);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_5);

            exception_lineno = 8676;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8676;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = module_var_accessor_idna$$36$uts46data$_seg_78(tstate);
        if (unlikely(tmp_called_value_79 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[173]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 8677;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8677;
        tmp_add_expr_right_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_79);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 8677;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8677;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = module_var_accessor_idna$$36$uts46data$_seg_79(tstate);
        if (unlikely(tmp_called_value_80 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[174]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 8678;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8678;
        tmp_add_expr_right_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_80);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 8678;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8678;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = module_var_accessor_idna$$36$uts46data$_seg_80(tstate);
        if (unlikely(tmp_called_value_81 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[175]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 8679;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8679;
        tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_81);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 8679;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8679;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = module_var_accessor_idna$$36$uts46data$_seg_81(tstate);
        if (unlikely(tmp_called_value_82 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[176]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 8680;

            goto frame_exception_exit_1;
        }
        frame_frame_idna$uts46data->m_frame.f_lineno = 8680;
        tmp_add_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_82);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 8680;

            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8680;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8598;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_idna$uts46data, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_91);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_idna$uts46data, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_idna$uts46data->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_idna$uts46data, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_idna$uts46data);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("idna$uts46data", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "idna.uts46data" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_idna$uts46data);
    return module_idna$uts46data;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_idna$uts46data, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("idna$uts46data", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
