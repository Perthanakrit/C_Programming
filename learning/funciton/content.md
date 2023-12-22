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
