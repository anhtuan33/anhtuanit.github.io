#include<stdio.h>
void main(){
    int n, i, s;
    printf("Nhap n: ");
    scanf("%d", &n);
    s = 0;
    for ( i = 1; i <= n; i++)
    {
       s = s + i;
    }
    printf("1 + 2 + ... + %d = %d", n, s);
}