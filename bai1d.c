#include<stdio.h>
void main()
{
    int n, min, max, donvi;
    printf("Moi nhap so de kiem tra: ");
    scanf("%d", &n);
    min = n % 10;
    max = min;
    n = n / 10;
    while (n > 0)
    {
      donvi = n % 10;
      n = n / 10;
      if (donvi < min) min = donvi;
      if (donvi > max) max = donvi;
    }
    printf("So nn = %d, so ln = %d", min, max);
}