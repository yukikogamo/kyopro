#include<stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d", &a, &b);

  if (b % 10 == b) c = 10 * a + b;
  else if (b % 100 == b) {
    c = 100 * a + b;
  }
  else {
    c = 1000 * a + b;
  }

  for (int i = 0; i < 1000; i++) {
    if (c == i * i) {
      printf("Yes");
      return 0;
    }
  }

  printf("No");

  return 0;
}
