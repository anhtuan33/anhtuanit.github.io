#include<stdio.h>
void main(){
    int n, donvi;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So dao cua %d la ", n);
    while (n > 0)
    {
        donvi = n % 10;
        n = n / 10;
        printf("%d", donvi);
    }
}