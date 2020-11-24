#include <stdio.h>

int n, k, q;
int a[100010];
int main(void) {
	scanf("%d %d %d", &n, &k, &q);
	for (int i = 1; i <= q; i++) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}

	for(int i = 1; i <= n; i++) {
		if (k - q + a[i] > 0) printf("Yes\n");
		else printf("No\n");
	}
}