#include<stdio.h>

int main(void) {
  int n;
  double a, res = 0.0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%lf", &a);
    res += 1.0 / a;
  }

  printf("%lf", 1.0 / res);

  return 0;
}
