#include <bits/stdc++.h>
 
using namespace std;

int main (void) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d", max({a+b, a-b, a*b}));

    return 0;
}