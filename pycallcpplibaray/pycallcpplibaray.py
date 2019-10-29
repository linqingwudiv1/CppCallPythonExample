#
#
#
#
#
#
import sys, platform
import ctypes, ctypes.util
from ctypes import cdll

lib = None

if platform.system() == "Windows":    
    print(f"hello python on Windows")
    lib = cdll.LoadLibrary("./dll/cppdll.dll")
elif platform.system() == "Linux":
    lib = cdll.LoadLibrary("./so/cppdll.so")
    print(f"hello python on Linux")
else:
    print(f"unknown platform.")
if lib != None:
    lib.HiPython.argtypes = [ctypes.c_char_p]
    lib.HiPython.restype = ctypes.c_char_p
    teststr = bytes("i am 拆腻子","utf8")
    ret_str = lib.HiPython(teststr).decode("utf8")
    ret_int = lib.HiPythonInt(3);
    print("HiPythonInt return : ", ret_int, "|    HiPython Return:" , ret_str)
else:
    print("input any key and enter exit:")
print("input any key and enter exit:")
input()