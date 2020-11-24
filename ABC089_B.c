#include<stdio.h>

int main(void) {
  int n, ans = 0;
  char s;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
      scanf("%c", &s);
      if (s == 'Y') ans = 1;
  }

  printf(ans == 0 ? "Three" : "Four");
  
  return 0;
}
