#include<stdio.h>
int dao(int n)
{
    int k = 0, du;
    while (n != 0)
    {
        du = n%10;
        k = (k * 10) + du;
        n = n/10;
    }
    return k;
}
void main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    if (n == dao(n))
        printf("Day la so doi xung");
    else
        printf("So nay khong doi xung");
}
