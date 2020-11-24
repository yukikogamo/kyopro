#include<stdio.h>

int main(void) {
  int n, s = 0;
  scanf("%d", &n);

  for (int i = n; i; i /= 10) s += i % 10;
  
  printf(n % s == 0 ? "Yes" : "No");

  return 0;
}
