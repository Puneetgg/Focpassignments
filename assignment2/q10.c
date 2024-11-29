#include<stdio.h>
int prime(int x){
    int c=0;
    for(int i=1;i<=x;i++){
    if(x%i==0)
    c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main(){
int s;
printf("Enter size of array: ");
scanf("%d",&s);
int a[s];
printf("Enter values in array: ");
for(int i=0;i<s;i++){
    scanf("%d",&a[i]);
}
int c=0;
printf("Prime numbers are: \n");
for(int i=0;i<s;i++){
    int t=prime(a[i]);
    if(t==1){
    c++;
    printf("%d ",a[i]);
    }
}
printf("\nTotal prime numbers present are %d",c);
return 0;
}