/*
<挿入ソート>
挿入ソート (Insertion Sort) は、手持ちのトランプを並び替えるときに使われる、
自然で思いつきやすいアルゴリズムのひとつです。片手に持ったトランプを左から小さい順に
並べる場合、１枚ずつカードを取り出してそれをすでにソートされている並びの適切な位置に
挿入していくことによって、カードを並び替えることができます。

挿入ソートは次のようなアルゴリズムになります。
*/

/*

* insertionSort(A, N) // N個の要素を含む0-オリジンの配列A
*   for i が 1 から N-1 まで
*     v = A[i]
*     j = i - 1
*     while j >= 0 かつ A[j] > v
*       A[j+1] = A[j]
*       j--
*     A[j+1] = v

*/

/*
N個の要素を含む数列Aを昇順に並び替える挿入ソートのプログラムを作成してください。
上の擬似コードに従いアルゴリズムを実装してください。アルゴリズムの動作を確認
するため、各計算ステップでの配列（入力直後の並びと、各iの処理が終了した直後の並び）
を出力してください。
*/

/*
＜入力＞
入力の最初の行に、数列の長さを表す整数Nが与えられます。２行目に、N個の整数が空白
区切りで与えられます。

＜出力＞
出力はN行からなります。挿入ソートの各計算ステップでの途中結果を１行に出力してください。
配列の要素は１つの空白で区切って出力してください。最後の要素の後の空白など、余計な空白や
改行を含めるとPresentation Errorとなりますので注意してください。
*/

/*
＜入力例１＞
6
5 2 4 6 1 3

＜入力例１に対する出力＞
5 2 4 6 1 3
2 5 4 6 1 3
2 4 5 6 1 3
2 4 5 6 1 3
1 2 4 5 6 3
1 2 3 4 5 6

＜入力例２＞
3
1 2 3

＜入力例２に対する出力＞
1 2 3
1 2 3
1 2 3
*/

/*
A[N] //サイズがNの整数型配列
i    //未ソートの部分列の先頭を示すループ変数。
v    //A[i]の値を一時的に保存しておくための変数。
j    //ソート済み部分列からvを挿入するための位置を探すループ変数。
*/

#include<stdio.h>

/* 配列の要素を順番に出力 */
void trace(int A[], int N) {
    int i;
    for ( i = 0; i < N; i++) {
        if ( i > 0 ) printf(" "); //隣接する要素の間に１つの空白を出力
        printf("%d", A[i]);
    }
    printf("\n");
}

/* 挿入ソート（0オリジン配列）*/
void insertionSort(int A[], int N) {
    int j, i, v;
    for ( i = 1; i < N; i++ ) {
        v = A[i];
        j = i - 1;
        while ( j >= 0 && A[j] > v ) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        trace(A, N);
    }
}

int main() {
    int N, i, j;
    int A[100];

    scanf("%d", &N);
    for ( i = 0; i < N; i++ ) scanf("%d", &A[i]);

    trace(A, N);
    insertionSort(A, N);

    return 0;
}