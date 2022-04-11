#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <gsl_vector.h>

#include "svm_main.h"
#include "test_main.h"

PyObject* __opt(PyObject* self, PyObject* args) {
    PyObject* elements;
    int rbf;    // 1 if RBF kernel is used 0 for my kernel
	int C; 		// hyperparameter for optimization
	if (!PyArg_ParseTuple(args, "Oii", &elements, &rbf, &C))
		return NULL;

	return __get_w_b(elements, rbf, C);
}

PyObject* __test(PyObject* self, PyObject* args) {
	PyObject* elements;
	PyObject* w;
	PyObject* b;
	if (!PyArg_ParseTuple(args, "OOO", &elements, &w, &b))
		return NULL;
	return __test_t(elements, w, b);
}

static PyMethodDef methods[] = {
	{"opt", __opt, METH_VARARGS, ""},
	{"test", __test, METH_VARARGS, ""},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef c_opt = {
	PyModuleDef_HEAD_INIT,
	"C OPT",
	"C interop to optimize a custom implementation of an SVM",
	-1,
	methods
};

PyMODINIT_FUNC PyInit_c_opt() {
	return PyModule_Create(&c_opt);
}