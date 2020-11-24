#include<stdio.h>

int main(void) {
  int k, x;
  scanf("%d %d", &k, &x);

  for (int i = x - k + 1; i <= x + k - 1; i++) {
      printf("%d\t", i);
  }
  
  return 0;
}
