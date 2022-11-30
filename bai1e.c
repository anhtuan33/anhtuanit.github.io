#include<stdio.h>
void main()
{
    int n, sotruoc, sosau;
    printf("Nhap n: ");
    scanf("%d", &n);
    sotruoc = n % 10;
    do
    {
        sosau = sotruoc;
        n = n / 10;
        sotruoc = n % 10;
        } while (n != 0 && sotruoc < sosau);
    if (sotruoc < sosau)
    printf("cac chu so tang dan");
    else
    printf("cac chu so khong tang dan");
}
