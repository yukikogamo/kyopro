#include<stdio.h>

int main(void) {
  int a, b, tmp = 1, cnt = 0;
  scanf("%d %d", &a, &b);

  while (tmp < b) {
    cnt++;
    tmp += a - 1;
  }
  
  printf("%d", cnt);

  return 0;
}

