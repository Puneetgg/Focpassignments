#include<stdio.h>
void evenodd();
void input(int s){
    int a[s];
    printf("Enter values : ");
    for(int i=0;i<s;i++){
    scanf("%d",&a[i]);
    }
evenodd(a,s);
}
void evenodd(int a[],int s){
    for(int i=0;i<s;i++){
        if(a[i]%2==0){
            printf("Value at index %d is Even, Value was %d\n",i,a[i]);
        }
        else
            printf("Value at index %d is Odd, Value was %d\n",i,a[i]);
    }
}
int main(){
    int s;
    printf("Enter size of array : ");
    scanf("%d",&s);
    input(s);
}