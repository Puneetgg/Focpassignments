#include<stdio.h>
void first(int mark[],int s){
    int c=0;
for(int i=0;i<s;i++){
    if(mark[i]==99){
        c++;
        printf("%d Student in array got 99\n",i+1);
    }
}
printf("Total %d students got 99!",c);
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