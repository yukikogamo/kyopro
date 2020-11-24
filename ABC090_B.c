#include<stdio.h>

int main(void) {
  int a, b, cnt = 0;
  scanf("%d %d", &a, &b);

  for (int i = a; i <= b; i++) {
    if (i / 10000%10 == i / 1%10 && i / 1000%10 == i / 10%10)
    cnt++;
  }

  printf("%d", cnt);
  
  return 0;
}
