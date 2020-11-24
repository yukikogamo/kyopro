#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main (void) {
    int n, h[1000000], ans = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
        if (h[i] <= h[i + 1]) h[i]++;
        ans = 0;
    }

    printf("%d", ans);
    
    return 0;
}
