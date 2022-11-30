#include <conio.h>
#include <stdio.h>

int test(int k)
{
 int i,test=1;
 
 for (i=2;i<k;i++)
  if  (k%i==0)
   test=0;
return test;
}

main()
{
 int n,s=0;
 printf("\t- Nhap vao gia tri N= "); scanf("%d",&n);
 printf("\t=> Cac so nguyen to be hon N: \n");
 
 
 for (int i=2;i<=n;i++)
  if (test(i))
  {
   printf("%6d",i);
   s+=i;
  }
 printf("\n\t=> Tong cac so nguyen to be hon N =  %d",s);
 
 getch();
 return 0;
}