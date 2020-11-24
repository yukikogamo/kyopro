#include<bits/stdc++.h>

using namespace std;

int main(void) {
	long long n, ans;
	scanf("%lld", &n);
    ans = n - 1;
	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
            ans = n / i + i - 2;
		}
	}
    cout << ans << "\n";
} 