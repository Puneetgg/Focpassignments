#include<stdio.h>
void marks(int m[],int s);
void input(int s){
int m[s];
for(int i=0;i<s;i++){
printf("Enter Marks of Student %d: ",i+1);
scanf("%d",&m[i]);
}
marks(m,s);
}
void marks(int m[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
    sum=sum+m[i];
    }
    printf("Sum of marks is %d",sum);
}
int main(){
    int s;
    printf("Enter number of students : ");
    scanf("%d",&s);
    input(s);
}