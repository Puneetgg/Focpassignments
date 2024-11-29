#include<stdio.h>
void rotate();
void input();
void input(int s){
    int a[s];
    printf("Enter values of array: ");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("Your Array: \n");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    rotate(a,s);
}
void rotate(int a[],int s){
    int temp=a[s-1];
    for(int i=s-1;i>=0;i--){
    a[i]=a[i-1];
    }
a[0]=temp;
 printf("\nUpdated Array: \n");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    input(s);
}