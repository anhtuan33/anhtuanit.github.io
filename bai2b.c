#include<stdio.h>
void main(){
    int n, i, s;
    printf("Nhap n:");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i <= n; i++){
         s = s + i*i;
    }
   
printf("1^2 + 2^2 + ... + %d^2 = %d", n, s);
}
