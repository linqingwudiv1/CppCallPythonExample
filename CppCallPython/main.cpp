// CppCallPython.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include "Python.h"
using namespace std;
int main()
{
	Py_Initialize();
	PyRun_SimpleString("import sys");
	PyRun_SimpleString("sys.path.append('./')");
	if (!Py_IsInitialized())
	{
		printf("初始化失败！");
		return 0;
	}

	PyObject * pModule = NULL;
	PyObject * pFunc = NULL;
	PyObject* pDict = NULL;
	PyObject* pClass = NULL;
	PyObject* pIns = NULL;

	pModule = PyImport_ImportModule("hello");
	assert(pModule != NULL);

	pDict = PyModule_GetDict(pModule);
	assert(pDict != NULL);

	pClass = PyDict_GetItemString(pDict, "math");
	assert(pClass != NULL);

	pIns = PyObject_CallObject(pClass, nullptr);
	assert(pIns != NULL);

	auto result = PyObject_CallMethod(pIns, "add", "(ii)", 1, 2);
	//PyObject_New();

	std::cout << "<finished>";
	Py_DECREF(pIns);
	Py_Finalize();
    std::cout << "Hello World!\n"; 
}