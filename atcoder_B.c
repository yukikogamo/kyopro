#include<stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  for (int i = 0; i < a; i++) {
    ans = a / b + 1;
  }
  
  if (a == b){printf("1");}
  else if (a != b){printf("%d", ans);}

  return 0;
}
