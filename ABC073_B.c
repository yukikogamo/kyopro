#include<stdio.h>

int main(void) {
  int n, x, y, sum = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    sum += y - x + 1;
  }

  printf("%d", sum);

  return 0;
}
