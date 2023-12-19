# Function

### 1. Funciton Defintion

```
return-type Name( param-list)
{

}
```

> void : No return \
> ไม่สารมารถเรียก function before define เว้นแต่ declared ไว้

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

### 2. Function Call - Call by Value

parameter จะถูกแปลงเป็น value ก่อน

> สามารถจำลอง call by reference ได้

### C standard Lib and Math Library
