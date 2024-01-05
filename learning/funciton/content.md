# Function

### 1. Funciton Defintion

```
return-type Name( param-list)
{

}
```

> void : No return \
> ไม่สารมารถเรียก function before define เว้นแต่ declared ไว้

### 2. Function Prototypes

เป็นการประกาศฟังก์ชั่นไว้ก่อน แต่บ้างครั้งยังไม่ define มัน ทำให้ complie ผ่านได้ แต่ อาจเกิด **warning**

> สามารถ declare ภายในบล็อก หรือ นอกบล็อกก็ได้

```
// function pototype
int isEven(int value)

int res = isEven(5);

int isEven(int value)
{
	if (value % 2 == 0)
	{
		return 1;
	}
	return 0;
}
```

### 3. Function Call - Call by Value

parameter จะถูกแปลงเป็น value ก่อน

> สามารถจำลอง call by reference ได้

### 4. C standard Lib and Math Library

- **ค่า NULL** : Symbolic constant ที่ถูกกำหนดใน stdio.h คือ

```
#define NULL 0
```

### 5 Return Values

เมื่อทำงานจยจอ return ในฟังก์ชั่น **ลำดับการทำงานของโปรแกรมจะกลับไปทำงานต่อจากจุดที่ฟังก์ชันนั้นกูกเรียกใช้**

### 6. Using Funcitons as Parameters to Funcitons

I. Gobal : จะมีการกำหนดค่าเริ่มต้นเป็น 0 (ถ้าเราไม่ inital) \
II. Local : จะมีการกำหนดค่าเริ่มต้นเป็น อะไรไม่รู้ แล้วแต่เครื่อง (ถ้าเราไม่ inital)

```
int x;
int main()
{
	int x = 100;
	printf("%d", x);
}
```

> ถ้าไม่มีตัวแปรใน global จะออกไปหาที่ global

### 7. Recursion

- เรียกใช้ตัวเอง ในรูป direct & indirect

  > **_เมื่อเรียกใช้ตนเอง โปรแกรมจะสำเนาค่าตัวแปรต่างๆ ภายในฟังก์ชัน โดยเป็นอิสระจากการถูกเรียนกใช้ครั้งก่นอหน้า_**

### 8. Funcion Call & Stack Frames

## Scope Rules

### Strorage Classes

- storage class 4 ประเภท แบ่งเป็น 2 storage duration
- **2 storage duration** - static duration : อยู่ใน memory ตลอดเวลา - automatic duration : อยู่ใน memory เมื่อ function ถูกเรียกใช้งาน และถูกลบออกเมื่อ function จบการทำงาน
  > **keyword** \
      - local: อยู่ที่ automaic โดย default \
      - auto \
      - register : ใช้เก็บตัวแปรที่ใช้บ่อย แต่ไม่สามารถใช้ & ได้ \
      - static: มีชีวิตอยู่ก่อน หรืออยู่ใน memory ก่อนโปรแกรมเริ่มทำงาน หรือ int main() \
      	- extern: คล้ายๆ static แต่เป็น global ซึ่งเป็น default ของ gloabal variable

```
float func(void)
{
	static float score; // อยู่ใน uninitialized data segment และมีค่า default เป็น 0
	score += 2;
	return score;
}
```

### Dynamic Storage Duration

### Makefile(Tool)

```
target: dependancy
-->tab--> คำสั่งที่ใช้ในการสร้าง target (recipe)
```

**_Ex_**

```
main.o: main.c
	gcc -c main
```

## Shared (Dynamic) Libraries

- Mac OS : .dylib
  ```
  gcc -shared -o libfunc.dylib func.o
  ```
