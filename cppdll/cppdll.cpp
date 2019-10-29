// cppdll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

using namespace std;
extern "C" {
	/**
	* Mixed Program Demonstrate Method
	**/
	__declspec(dllexport) char* HiPython(char* msg);

	/**
	* Mixed Program Demonstrate Method about not argument
	**/
	__declspec(dllexport) int HiPythonInt(int b);
}

/**
 * Mixed Program Demonstrate Method 1111
 **/
char* HiPython(char* msg)
{
	cout << "[output on cpp] from python message : " << msg << endl;
	
	char ret_c[] = "c++callback [i like 拆腻子]";
	return ret_c;
}

/**
* Mixed Program Demonstrate Method about not argument 111
**/
int HiPythonInt(int b) 
{
	cout << "[output on cpp] from python message : 系数:"<< b << endl;

	return 5 * b;
}