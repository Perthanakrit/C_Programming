#include <Python.h>

int main()
{
    PyObject *pName, *pModule, *pFunc, *pArgs, *pValue;
    char *result;
    Py_Initialize();
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('.')");
    pName = PyUnicode_FromString("py_hello");
    pModule = PyImport_Import(pName);
    pFunc = PyObject_GetAttrString(pModule, "hello");
    pArgs = PyTuple_Pack(1, PyUnicode_FromString("World"));
    if (PyCallable_Check(pFunc))
    {
        pValue = PyObject_CallObject(pFunc, pArgs);
        result = (char *)PyUnicode_AsUTF8(pValue);
        printf("%s\n", result);
    }
    pFunc = PyObject_GetAttrString(pModule, "cube");
    pArgs = PyTuple_Pack(1, PyFloat_FromDouble(3.0));
    if (PyCallable_Check(pFunc))
    {
        pValue = PyObject_CallObject(pFunc, pArgs);
        printf("%f\n", PyFloat_AsDouble(pValue));
    }
    Py_Finalize();
    return 0;
}