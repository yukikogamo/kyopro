#include<stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  char s[10];
  scanf("%s", s);

  if (a < 3200) {
    printf("red");
  }
  
  else {
    printf("%s", s);
  }
  
  return 0;
}
