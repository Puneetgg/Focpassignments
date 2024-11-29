#include<stdio.h>
void max(int a[],int s){
int max=a[0];
for(int i=0;i<s;i++){
    if(a[i]>max)
    max=a[i];
}
printf("Maximum Value is %d\n",max);
}
void min(int a[],int s){
int min=a[0];
for(int i=0;i<s;i++){
    if(a[i]<min)
    min=a[i];
}
printf("Minimum Value is %d\n",min);
}
int main(){
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int a[s];
    printf("Enter Values: ");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    max(a,s);
    min(a,s);
}