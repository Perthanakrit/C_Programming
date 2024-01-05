import os
from ctypes import cdll, c_float
os.add_dll_directory(os.getcwd()) # add dll directory to path
clib = cdll.LoadLibrary("libcfunc.")
clib.cfunc.restype = c_float
clib.cfunc.argtypes = [c_float]
clib.cfunc(123.5)