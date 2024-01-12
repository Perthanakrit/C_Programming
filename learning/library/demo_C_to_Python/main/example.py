import ctypes

# Load the shared library
libexample = ctypes.CDLL('../lib/libexample.dylib')

libexample.greet.argtypes = [ctypes.c_int]
libexample.greet.restype = None
libexample.greet(5)