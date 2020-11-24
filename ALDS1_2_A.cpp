/*
バブルソートはその名前が表すように、泡（Bubble）が水面に上がっていくように
配列の要素が動いていきます。バブルソートは次のようなアルゴリズムで数列を
昇順に並び替えます。

1 bubbleSort(A, N) // N 個の要素を含む 0-オリジンの配列 A
2   flag = 1 // 逆の隣接要素が存在する
3   while flag
4     flag = 0
5     for j が N-1 から 1 まで
6       if A[j] < A[j-1]
7         A[j] と A[j-1] を交換
8         flag = 1

数列Aを読み込み、バブルソートで昇順に並び替え出力するプログラムを作成してください。
また、バブルソートで行われた要素の交換回数も報告してください。
*/

/*
＜入力＞
入力の最初の行に、数列の長さを表す整数Nが与えられます。２行目に、N個の整数が
空白区切りで与えられます。

＜出力＞
出力は２行からなります。１行目に整列された数列を１行に出力してください。数列の
連続する要素は１つの空白で区切って出力してください。２行目に交換回数を
出力してください。

＜制約＞
・1<=N<=100
・0<=Aの要素<=100

*/

/*
＜入力例１＞
5
5 3 2 4 1

＜出力例１＞
1 2 3 4 5
8

＜入力例２＞
6
5 2 4 6 1 3

＜出力例２＞
1 2 3 4 5 6
9

*/

#include<iostream>
using namespace std;

//flagを用いたバブルソート//
int bubbleSort(int A[], int N) {
    int sw = 0;
    bool flag = 1;
    for ( int i = 0; flag; i++ ) {
        flag = 0;
        for ( int j = N - 1; j >= i + 1; j-- ) {
            if ( A[j] < A[j - 1] ) {
            //隣接要素を交換する
            swap(A[j], A[j - 1]);
            flag = 1;
            sw++;
        }
    }
}
return sw;
}

int main() {
    int A[100], N, sw;
    cin >> N;
    for ( int i = 0; i < N; i++ ) cin >> A[i];

    sw = bubbleSort(A, N);

    for ( int i = 0; i < N; i++ ) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << sw << endl;

    return 0;
}