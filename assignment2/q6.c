#include<stdio.h>
void avg(int m[],int s);
void input(int s){
int m[s];
for(int i=0;i<s;i++){
printf("Enter marks of Student %d: ",i+1);
scanf("%d",&m[i]);
}
avg(m,s);
}
void avg(int m[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
    sum=sum+m[i];
    }
    printf("Average of marks is %d",sum/s);
}
int main(){
    int s;
    printf("Enter number of students : ");
    scanf("%d",&s);
    input(s);
}