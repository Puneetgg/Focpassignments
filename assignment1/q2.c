#include<stdio.h>
int HCF(int a,int b)
{
   int min=(a>b)?a:b;
   while(min>0)
   {
    if(a%min==0 && b%min==0)
    break;
    min--;
   }
return min;
}

int main()
{
    int num1,num2,h,l;
    printf("Provide 2 numbers");
    scanf("%d %d",&num1,&num2);
    h=HCF(num1,num2);
    printf("HCF= %d",h);
    return 0;
}