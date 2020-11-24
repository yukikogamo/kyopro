#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];

void push(int x) {
    /* top を加算してからその位置へ挿入 */
    S[++top] = x;
}

int pop() {
    top--;
    /* top が指していた要素を返す */
    return S[top+1];
}

int main() {
    int a, b;
    top = 0;
    char s[100];


while ( scanf("%s", s) != EOF ) {
    if ( s[0] == '+' ) {
        a = pop();
        b = pop();
        push(a + b);
    } else if ( S[0] == '-' ) {
        b = pop();
        a = pop();
        push(a - b);
    } else if ( s[0] == '*' ) {
        a = pop();
        b = pop();
        push(a * b);
    } else {
        push(atoi(s));
    }
}
printf("%d\n", pop());

return 0;

}