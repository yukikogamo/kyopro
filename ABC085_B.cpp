#include <bits/stdc++.h>
 
using namespace std;

int main (void) {
    int n;
    scanf("%d", &n);

    set<int> s;
    for (int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        s.insert(d);
    }
    
    printf("%d", s.size());
    return 0;
}