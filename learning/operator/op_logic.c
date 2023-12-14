#include <stdio.h>

int main()
{
  int a = 1, b = 1, c = 1;
  c = (1 > 0) && a++ && (2 > 3) && b++;
  printf("a=%d, b=%d,c=%d\n", a, b, c);
  char ch;
  ch = getchar();
  printf("%c : +1 => ", ch);
  ch += 1;
  putchar(ch);
  printf("%d\n", ch + 1);
  printf("%d\n", 0 != 5);
  printf("%d\n", 12 / 5);
  printf("%d\n", 1 + 2 - 3 * 4 / 5);
}
