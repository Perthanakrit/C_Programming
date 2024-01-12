# Shared Library C to Python

### 1. Create a shared library in C

สร้างฟังก์ชันเพื่อนำไปใช้ใน python แล้ว compile เป็น **.o ก่อนแล้ว ค่อยเป็นไฟล์ .so (unix) หรือ .dll (windows) or .dylib (mac)**

- macOS
  ```
  gcc -c example.c
  gcc -shared -o libexample.dylib example.o
  ```
- Windows
  ```
  gcc -c example.c
  gcc -shared -o libexample.dll -Wl,--out-implib,libexample.dll.a example.o
  ```

### 2. Call C function from Python

สร้างไฟล์แล้วเขียนpython เพื่อเรียกใช้งานฟังก์ชันที่เราสร้างขึ้นมา โดยใช้ **' ctypes'**

```
// อันนี้ mac ใช้ได้แน่ๆ (ถาม chatgpt มา)
import ctypes

# Load the shared library
libexample = ctypes.CDLL('./libexample.dylib')

libexample.greet()
```

or \*\*\*\*

```
import os
from ctypes import cdll

os.add_dll_directory(os.getcwd())
clib = cdll.LoadLibrary("libexample.dll")
clib.cfunc.restype = ctypes.c_int
clib.cfunc.argtypes = [ctypes.c_int]
clib.greet(5)
```

```
import ctypes

# Load the shared library
libexample = ctypes.CDLL('./libexample.dylib')

libexample.greet()
```

**/ If the function takes arguments, you need to specify the argument types when defining the function in Python. For example:**

```
libexample.greet.argtypes = [ctypes.c_int]
libexample.greet.restype = None
libexample.greet(5)
```
