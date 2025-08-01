// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction(PyObject *func, PyObject *const *args, int count);



PyObject *CALL_FUNCTION_WITH_ARGS11(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 11); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 11 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 11; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 11 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 11 * sizeof(PyObject *));
            memcpy(python_pars + 11, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 11);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 11);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 11 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[11 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 11; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 11 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 11 * sizeof(PyObject *));
                memcpy(python_pars+1 + 11, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 11);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
#if PYTHON_VERSION >= 0x380
#ifdef _NUITKA_FULL_COMPAT
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }
#endif

        int flags = PyCFunction_GET_FLAGS(called);

        PyObject *result;

        if (!(flags & METH_VARARGS)) {
            vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

            assert(func != NULL);
            result = func(called, args, 11, NULL);

            CHECK_OBJECT_X(result);
        } else {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(tstate, args, 11);

            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)(void(*)(void))method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
        }

#ifdef _NUITKA_FULL_COMPAT
        Py_LeaveRecursiveCall();
#endif
        CHECK_OBJECT_X(result);

        return Nuitka_CheckFunctionResult(tstate, called, result);
#else
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (11 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (11 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 11);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 11);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 11, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 11);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 11);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 11);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#endif
#if PYTHON_VERSION < 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            11
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 11, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(tstate, args, 11);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 11);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS11(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(tstate, args, 11);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 11);
        } else {
            result = CALL_FUNCTION_WITH_ARGS11(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 11, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(tstate, args, 11);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}



PyObject *CALL_FUNCTION_WITH_ARGS17(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 17); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 17 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 17; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 17 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 17 * sizeof(PyObject *));
            memcpy(python_pars + 17, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 17);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 17);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 17 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[17 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 17; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 17 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 17 * sizeof(PyObject *));
                memcpy(python_pars+1 + 17, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 17);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
#if PYTHON_VERSION >= 0x380
#ifdef _NUITKA_FULL_COMPAT
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }
#endif

        int flags = PyCFunction_GET_FLAGS(called);

        PyObject *result;

        if (!(flags & METH_VARARGS)) {
            vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

            assert(func != NULL);
            result = func(called, args, 17, NULL);

            CHECK_OBJECT_X(result);
        } else {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);

            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)(void(*)(void))method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
        }

#ifdef _NUITKA_FULL_COMPAT
        Py_LeaveRecursiveCall();
#endif
        CHECK_OBJECT_X(result);

        return Nuitka_CheckFunctionResult(tstate, called, result);
#else
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (17 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (17 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 17, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 17);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#endif
#if PYTHON_VERSION < 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            17
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 17, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(tstate, args, 17);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 17);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS17(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(tstate, args, 17);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 17);
        } else {
            result = CALL_FUNCTION_WITH_ARGS17(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 17, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}



PyObject *CALL_FUNCTION_WITH_ARGS20(PyThreadState *tstate, PyObject *called, PyObject *const *args) {
    CHECK_OBJECT(called);
     CHECK_OBJECTS(args, 20); 

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 20 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 20; i++) {
                Py_INCREF(args[i]);
            }
            result = function->m_c_code(tstate, function,  (PyObject **)args );
        } else if (function->m_args_simple && 20 + function->m_defaults_given == function->m_args_positional_count) {
            NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

            memcpy(python_pars, args, 20 * sizeof(PyObject *));
            memcpy(python_pars + 20, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(tstate, function, python_pars);
        } else {
            result = Nuitka_CallFunctionPosArgs(tstate, function, args, 20);
        }

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        if (method->m_object == NULL) {
            PyObject *self = args[0];

            int res = PyObject_IsInstance(self, method->m_class);

            if (unlikely(res < 0)) {
                return NULL;
            } else if (unlikely(res == 0)) {
                PyErr_Format(PyExc_TypeError,
                             "unbound compiled_method %s%s must be called with %s instance as first argument (got %s "
                             "instance instead)",
                             GET_CALLABLE_NAME((PyObject *)method->m_function),
                             GET_CALLABLE_DESC((PyObject *)method->m_function), GET_CLASS_NAME(method->m_class),
                             GET_INSTANCE_CLASS_NAME(tstate, (PyObject *)self));

                return NULL;
            }

            PyObject *result = Nuitka_CallFunctionPosArgs(tstate, method->m_function, args, 20);

            CHECK_OBJECT_X(result);

            return result;
        } else {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 20 + 1 == function->m_args_positional_count) {
                PyObject *python_pars[20 + 1];

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 20; i++) {
                    python_pars[i + 1] = args[i];
                    Py_INCREF(args[i]);
                }
                result = function->m_c_code(tstate, function, python_pars);
            } else if (function->m_args_simple && 20 + 1 + function->m_defaults_given == function->m_args_positional_count) {
                NUITKA_DYNAMIC_ARRAY_DECL(python_pars, PyObject *, function->m_args_positional_count);

                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 20 * sizeof(PyObject *));
                memcpy(python_pars+1 + 20, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(tstate, function, python_pars);
            } else {
                result = Nuitka_CallMethodFunctionPosArgs(tstate, function, method->m_object, args, 20);
            }

            Py_LeaveRecursiveCall();

            CHECK_OBJECT_X(result);

            return result;
        }
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_CFUNCTION_CALL_OPT)
    } else if (PyCFunction_CheckExact(called)) {
#if PYTHON_VERSION >= 0x380
#ifdef _NUITKA_FULL_COMPAT
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }
#endif

        int flags = PyCFunction_GET_FLAGS(called);

        PyObject *result;

        if (!(flags & METH_VARARGS)) {
            vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

            assert(func != NULL);
            result = func(called, args, 20, NULL);

            CHECK_OBJECT_X(result);
        } else {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(tstate, args, 20);

            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)(void(*)(void))method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
        }

#ifdef _NUITKA_FULL_COMPAT
        Py_LeaveRecursiveCall();
#endif
        CHECK_OBJECT_X(result);

        return Nuitka_CheckFunctionResult(tstate, called, result);
#else
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (unlikely(flags & METH_NOARGS)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (unlikely(flags & METH_O)) {
            SET_CURRENT_EXCEPTION_TYPE0_FORMAT1(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
        } else if (flags & METH_VARARGS) {
            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *result;

#if PYTHON_VERSION < 0x360
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 20);
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }

            Py_DECREF(pos_args);
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 20);
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            Py_DECREF(pos_args);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 0x370
                result = (*(_PyCFunctionFast)method)(self, (PyObject **)args, 20, NULL);
#else
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 20);
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 20);
            Py_DECREF(pos_args);
#endif
            } else {
            PyObject *pos_args = MAKE_TUPLE(tstate, args, 20);
                result = (*method)(self, pos_args);
            Py_DECREF(pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
#endif
#if PYTHON_VERSION < 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_UNCOMPILED_FUNCTION_CALL_OPT)
    } else if (PyFunction_Check(called)) {
#if PYTHON_VERSION < 0x3b0
        PyObject *result = callPythonFunction(
            called,
            args,
            20
        );
#else
        PyObject *result = _PyFunction_Vectorcall(called, args, 20, NULL);
#endif
        CHECK_OBJECT_X(result);

        return result;
#endif
#if !defined(_NUITKA_EXPERIMENTAL_DISABLE_TYPE_CREATION_OPT)
    } else if (PyType_Check(called)) {
        PyTypeObject *type = Py_TYPE(called);

        if (type->tp_call == PyType_Type.tp_call) {
            PyTypeObject *called_type = (PyTypeObject *)(called);


            if (unlikely(called_type->tp_new == NULL)) {
                PyErr_Format(PyExc_TypeError, "cannot create '%s' instances", called_type->tp_name);
                return NULL;
            }

            PyObject *pos_args = NULL;
            PyObject *obj;

            if (called_type->tp_new == PyBaseObject_Type.tp_new) {
                if (unlikely(called_type->tp_flags & Py_TPFLAGS_IS_ABSTRACT)) {
                    formatCannotInstantiateAbstractClass(tstate, called_type);
                    return NULL;
                }

                obj = called_type->tp_alloc(called_type, 0);
                CHECK_OBJECT(obj);
            } else {
                pos_args = MAKE_TUPLE(tstate, args, 20);
                obj = called_type->tp_new(called_type, pos_args, NULL);
            }

            if (likely(obj != NULL)) {
                if (!Nuitka_Type_IsSubtype(obj->ob_type, called_type)) {
                    Py_DECREF(pos_args);
                    return obj;
                }

                // Work on produced type.
                type = Py_TYPE(obj);

                if (NuitkaType_HasFeatureClass(type) && type->tp_init != NULL) {
                    if (type->tp_init == default_tp_init_wrapper) {
                        Py_XDECREF(pos_args);
                        pos_args = NULL;

                        PyObject *init_method = Nuitka_TypeLookup(type, const_str_plain___init__);

                        // Not really allowed, since we wouldn't have the default wrapper set.
                        assert(init_method != NULL);

                        bool is_compiled_function = false;
                        bool init_method_needs_release = false;

                        if (likely(init_method != NULL)) {
                            descrgetfunc func = Py_TYPE(init_method)->tp_descr_get;

                            if (func == Nuitka_Function_Type.tp_descr_get) {
                                is_compiled_function = true;
                            } else if (func != NULL) {
                                init_method = func(init_method, obj, (PyObject *)(type));
                                init_method_needs_release = true;
                            }
                        }

                        if (unlikely(init_method == NULL)) {
                            if (!HAS_ERROR_OCCURRED(tstate)) {
                                SET_CURRENT_EXCEPTION_TYPE0_VALUE0(tstate, PyExc_AttributeError, const_str_plain___init__);
                            }

                            return NULL;
                        }

                        PyObject *result;
                        if (is_compiled_function) {
                            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 20);
                        } else {
                            result = CALL_FUNCTION_WITH_ARGS20(tstate, init_method, args);
                            if (init_method_needs_release) {
                                Py_DECREF(init_method);
                            }
                        }


                        if (unlikely(result == NULL)) {
                            Py_DECREF(obj);
                            return NULL;
                        }

                        Py_DECREF(result);

                        if (unlikely(result != Py_None)) {
                            Py_DECREF(obj);

                            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
                            return NULL;
                        }
                    } else {
                        if (pos_args == NULL) {
                            pos_args = MAKE_TUPLE(tstate, args, 20);
                        }

                        if (unlikely(type->tp_init(obj, pos_args, NULL) < 0)) {
                            Py_DECREF(obj);
                            Py_XDECREF(pos_args);
                            return NULL;
                        }
                    }
                }
            }

            Py_XDECREF(pos_args);

            CHECK_OBJECT_X(obj);

            return obj;
        }
#endif
#if PYTHON_VERSION < 0x300
    } else if (PyClass_Check(called)) {
        PyObject *obj = PyInstance_NewRaw(called, NULL);

        PyObject *init_method = FIND_ATTRIBUTE_IN_CLASS((PyClassObject *)called, const_str_plain___init__);

        if (unlikely(init_method == NULL)) {
            if (unlikely(HAS_ERROR_OCCURRED(tstate))) {
                Py_DECREF(obj);
                return NULL;
            }

            Py_DECREF(obj);

            SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "this constructor takes no arguments");
            return NULL;
        }

        bool is_compiled_function = false;

        descrgetfunc descr_get = Py_TYPE(init_method)->tp_descr_get;

        if (descr_get == NULL) {
            Py_INCREF(init_method);
        } else if (descr_get == Nuitka_Function_Type.tp_descr_get) {
            is_compiled_function = true;
        } else if (descr_get != NULL) {
            PyObject *descr_method = descr_get(init_method, obj, called);

            if (unlikely(descr_method == NULL)) {
                return NULL;
            }

            init_method = descr_method;
        }

        PyObject *result;
        if (is_compiled_function) {
            result = Nuitka_CallMethodFunctionPosArgs(tstate, (struct Nuitka_FunctionObject const *)init_method, obj, args, 20);
        } else {
            result = CALL_FUNCTION_WITH_ARGS20(tstate, init_method, args);
            Py_DECREF(init_method);
        }
        if (unlikely(result == NULL)) {
            return NULL;
        }

        Py_DECREF(result);

        if (unlikely(result != Py_None)) {
            SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("__init__() should return None, not '%s'", result);
            return NULL;
        }

        CHECK_OBJECT_X(obj);

        return obj;
#endif
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            PyObject *result = func(called, args, 20, NULL);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_NEW_LINE();
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    PyObject *pos_args = MAKE_TUPLE(tstate, args, 20);

    PyObject *result = CALL_FUNCTION(tstate, called, pos_args, NULL);

    Py_DECREF(pos_args);

    CHECK_OBJECT_X(result);

    return result;
}



PyObject *CALL_FUNCTION_WITH_ARGS17_KW_SPLIT(PyThreadState *tstate, PyObject *called, PyObject *const *args, PyObject *const *kw_values, PyObject *kw_names) {
     CHECK_OBJECTS(args, 17); 
    CHECK_OBJECT(kw_names);
    assert(PyTuple_CheckExact(kw_names));
    CHECK_OBJECT(called);

    Py_ssize_t nkwargs = PyTuple_GET_SIZE(kw_names);

    CHECK_OBJECTS(kw_values, PyTuple_GET_SIZE(kw_names));

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;

        PyObject *result = Nuitka_CallFunctionPosArgsKwSplit(tstate, function, args, 17, kw_values, kw_names);

        Py_LeaveRecursiveCall();

        CHECK_OBJECT_X(result);

        return result;
#if PYTHON_VERSION >= 0x380 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_VECTORCALL_USAGE)
    } else if (PyType_HasFeature(Py_TYPE(called), _Py_TPFLAGS_HAVE_VECTORCALL)) {
        vectorcallfunc func = *((vectorcallfunc *)(((char *)called) + Py_TYPE(called)->tp_vectorcall_offset));

        if (likely(func != NULL)) {
            NUITKA_DYNAMIC_ARRAY_DECL(vectorcall_args, PyObject *, 17 + nkwargs);

            memcpy(vectorcall_args, args, 17*sizeof(PyObject *));
            memcpy(&vectorcall_args[17], kw_values, nkwargs*sizeof(PyObject *));

            PyObject *result = func(called, vectorcall_args, 17, kw_names);

            CHECK_OBJECT_X(result);

            return Nuitka_CheckFunctionResult(tstate, called, result);
        }
#endif
    }

#if 0
    PRINT_STRING("FALLBACK");
    PRINT_ITEM(called);
    PRINT_NEW_LINE();
#endif

    ternaryfunc call_slot = Py_TYPE(called)->tp_call;

    if (unlikely(call_slot == NULL)) {
        SET_CURRENT_EXCEPTION_TYPE_COMPLAINT("'%s' object is not callable", called);

        return NULL;
    }

    if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
        return NULL;
    }

    PyObject *pos_args = MAKE_TUPLE(tstate, args, 17);

    PyObject *named_args = _PyDict_NewPresized(nkwargs);

    for (Py_ssize_t i = 0; i < nkwargs; i++) {
        PyObject *key = PyTuple_GET_ITEM(kw_names, i);

        PyObject *value = kw_values[i];

        CHECK_OBJECT(key);
        CHECK_OBJECT(value);

        DICT_SET_ITEM(named_args, key, value);
    }

    PyObject *result = (*call_slot)(called, pos_args, named_args);

    Py_DECREF(pos_args);
    Py_DECREF(named_args);

    Py_LeaveRecursiveCall();

    CHECK_OBJECT_X(result);

    return Nuitka_CheckFunctionResult(tstate, called, result);
}

