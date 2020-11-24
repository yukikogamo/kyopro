#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void) {
    ll n, ans = 0;
    cin >> n;

	unordered_map<string, ll> m;
	for (int i = 0; i < n; i++) {
        string s;
		cin >> s;
		sort(s.begin(), s.end());
        
		m[s]++;
		
	}

	for(auto x:m) {
        ans += x.second * (x.second - 1) / 2;
    }

	cout << ans << endl;

    return 0;
}