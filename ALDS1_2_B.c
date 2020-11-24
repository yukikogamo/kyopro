/*
選択ソートは、各計算ステップで１つの最小値を「選択」していく、直感的な
アルゴリズムです。

1 selectionSort(A, N) // N個の要素を含む0-オリジンの配列A
2   for i が 0 から N-1 まで
3     minj = i
4     for j が i から N-1 まで
5       if A[j] < A[minj]
6         minj = j
7     A[i] と A[minj] を交換

数列Aを読み込み、選択ソートのアルゴリズムで昇順に並び替え出力するプログラムを
作成してください。上の擬似コードに従いアルゴリズムを実装してください。

擬似コード７行目で、iとminjが異なり実際に交換が行われた回数も出力してください。

*/

/*
＜入力＞
入力の最初の行に、数列の長さを表す整数Nが与えられます。２行目に、N個の
整数が空白区切りで与えられます。

＜出力＞
出力は２行からなります。１行目に整列された数列を１行に出力してください。
数列の連続する要素は１つの空白で区切って出力してください。２行目に交換回数を
出力してください。

＜制約＞
・1 <= N <= 100
・0 <= Aの要素 <= 100

＜入力例１＞
6
5 6 4 2 1 3

＜出力例１＞
1 2 3 4 5 6
4

＜入力例２＞
6
5 2 4 6 1 3

＜出力例２＞
1 2 3 4 5 6
3

*/

#include<stdio.h>

/*選択ソート(0オリジン)*/
int selectionSort(int A[], int N) {
    int i, j, t, sw = 0, minj;
    for ( i = 0; i < N - 1; i++ ) {
        minj = i;
        for ( j = i; j < N; j++ ) {
            if ( A[j] < A[minj] ) minj = j;
        }
        t = A[i]; A[i] = A[minj]; A[minj] = t;
        if ( i != minj ) sw++;
    }
    return sw;
}

int main() {
    int A[100], N, i, sw;

    scanf("%d", &N);
    for ( i = 0; i < N; i++ ) scanf("%d", &A[i]);

    sw = selectionSort(A, N);

    for ( i = 0; i < N; i++ ) {
        if ( i > 0 ) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    printf("%d\n", sw);

    return 0;
}