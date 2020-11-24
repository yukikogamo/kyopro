#include <cstdio>

int h, w, cnt;
char a[55][55];

int main(void) {
    int i, j, x, y;
    scanf("%d %d", &h, &w);
    for (i = 1; i <= h; i++) scanf("%s", &a[i][1]);
    for (i = 1; i <= h; i++, puts("")) for (j = 1; j <= w; j++) {
        if (a[i][j] == '#') {printf("#"); continue;}
        cnt = 0;
        for (x = i-1; x <= i+1; x++) for (y = j - 1; y <= j+1; y++) if (a[x][y] == '#') cnt++;
        printf("%d", cnt);
    }
    return 0;
}
