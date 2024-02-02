# File Handing

- ขั้นตอน

1.  เปิดไฟล์ `fopen()`
2.  read / write ่using functions
3.  always close file using `fclose()`

### Command

_ส่วนใหญ่ขึ้นต้นด้วย `f`_

### เปิดไฟล์

```C
FILE *fp;
```

- `fopen` : ส่วนใหญ่ถูกใช้เปิดไฟล์

```C
fopen("file_name", "mode");
```

#### Mode

| Mode      | Description                | File Position after opening |
| --------- | -------------------------- | --------------------------- |
| r         | read (Existed file)        | beginning                   |
| rb        | read binary (Existed file) | beginning                   |
| r+        | read                       | beginning                   |
| rb+ / r+b | read binary                | beginning                   |
| w         | write                      | beginning                   |

**file position indicator** คือตำแหน่งของ pointer ที่ชี้ไปยังตำแหน่งของไฟล์

#### Stand file pointer

>

#### Relative functions

- `fseek()` : ใช้ในการเลื่อนตำแหน่งของ pointer ไปยังตำแหน่งที่ต้องการ

  ```c
  fseek(fp, offset, origin);
  ```

  - `fp` : file pointer
  - `offset` : จำนวน byte ที่ต้องการเลื่อน
  - `origin` : ตำแหน่งที่ต้องการเลื่อนไป มี 3 ตำแหน่ง คือ _`SEEK_SET`, `SEEK_CUR`, `SEEK_END`_

- `SEEK_SET` : ตำแหน่งเริ่มต้นของไฟล์
- `SEEK_CUR` : ตำแหน่งปัจจุบันของ pointer
- `SEEK_END` : ตำแหน่งสุดท้ายของไฟล์
- `ftruncate()` : ใช้ในการลบข้อมูลในไฟล์

  ```c
  ftruncate(int fd, off_t length);
  ```

  - `fd` : file descriptor
  - `length` : จำนวน byte ที่ต้องการลบ

- `fflush` :
  ```c
  fflush(FILE *fp);
  ```

#### file texual กับ binary file

#### File with Regular expression

### Plain Text Portable PixMap File Format
