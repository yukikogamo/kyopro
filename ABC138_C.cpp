#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main (void) {
    int n; cin >> n;
	double ans = 0;
	double v[55];

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
    
    sort(v, v+n);
	ans = (v[0] + v[1]) / 2.0;
	for (int i = 2; i < n; i++){
		ans = (ans + v[i]) / 2.0;
	}
    
	printf("%.6lf\n", ans);
    
    return 0;
}