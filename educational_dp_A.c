#include <stdio.h>
#include <math.h>
 
int main(void) {
  int n, h[100001], dp[100001];
  dp[0] = 0;
  scanf("%d", &n);
  
  for (int i = 0; i < n; i++) {
    scanf("%d", &h[i]);
  }
 
  for (int i = 1; i < n; i++) dp[i]=1E9;
 
  for (int i = 0; i < n; i++) {
    dp[i + 1] = fmin( dp[i + 1], dp[i] + abs(h[i] - h[i + 1]) );
    dp[i + 2] = fmin( dp[i + 2], dp[i] + abs(h[i] - h[i + 2]) );
  }
  printf("%d", dp[n - 1]);
 
  return 0;
}

