#include<stdio.h>

int main(void) {
  int i;
  char s[3], t[3];
  scanf("%s %s", &s, &t);

  if (s[0] != t[0] && s[1] != t[1] && s[2] != t[2]) printf("0");
  else if (s[0] == t[0] && s[1] != t[1] && s[2] != t[2]) printf("1");
  else if (s[1] == t[1] && s[0] != t[0] && s[2] != t[2]) printf("1");
  else if (s[2] == t[2] && s[0] != t[0] && s[1] != t[1]) printf("1");
  else if (s[0] == t[0] && s[1] == t[1] && s[2] != t[2]) printf("2");
  else if (s[0] == t[0] && s[2] == t[2] && s[1] != t[1]) printf("2");
  else if (s[1] == t[1] && s[2] == t[2] && s[0] != t[0]) printf("2");
  else {printf("3");}
  
  return 0;
}
