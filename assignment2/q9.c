#include<stdio.h>
void peak(int a[],int s){
for(int i=0;i<s;i++){
    if(i==0){
        if(a[i]>a[i+1])
        printf("Peak value at %d; %d\n",i,a[i]);
    }
    else if(i==s-1){
        if(a[i]>a[i-1])
        printf("Peak value at %d; %d\n",i,a[i]);
    }
    else{
        if(a[i]>a[i+1] && a[i]>a[i-1])
        printf("Peak value at %d; %d\n",i,a[i]);
    }
}
}
int main(){
    int s;
    printf("Enter size of array : ");
    scanf("%d",&s);
    int a[s];   
    printf("Enter values of array: ");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    peak(a,s);
}