#include<stdio.h>
void first(int mark[],int s){
for(int i=0;i<s;i++){
    if(mark[i]==99){
        printf("%d Student in array got 99 first!",i+1);
        break;
    }
}
}
void array(int s){
int a[s];
printf("Enter values: ");
for(int i=0;i<s;i++){
    scanf("%d",&a[i]);
}
first(a,s);
}
int main(){
    printf("Enter number of students : ");
    int s;
    scanf("%d",&s);
    array(s);
}