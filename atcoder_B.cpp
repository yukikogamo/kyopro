#include <bits/stdc++.h>
 
using namespace std;

int main (void) {
    int n;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        if (s.size() % 2 == 1) cnt++;
    }

    printf("%d", cnt);
    
    return 0;
}