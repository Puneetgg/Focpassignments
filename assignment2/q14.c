#include<stdio.h>
void input();
void dup();
void input(int s){
    int a[s];
    printf("Enter values of array: ");
    for(int i=0;i<s;i++){
    scanf("%d",&a[i]);
    }
    printf("Your array: ");
    for(int i=0;i<s;i++){
    printf(" %d",a[i]);
    }
    dup(a,s);
 }
 void dup(int a[],int s){
    int c=0;
    for(int i=0;i<s;i++){
        int temp=a[i];
        if(temp==-1)
        continue;
        for(int j=0;j<s;j++){
            if(a[j]==temp && a[j]!=-1 && i!=j){
            c++;
            a[j]=-1;
            }
        }
    }
    if(c==0)
    printf("-1, No duplicates");
    else{
    printf("\nDuplicates Are: ");
        for(int i=0;i<s;i++){
            if(a[i]!=-1)
            printf("%d ",a[i]);
        }
        printf("\nYour array: ");
    for(int i=0;i<s;i++){
    printf("%d ",a[i]);
    }
    }
 }
int main(){
    int s;
    printf("Enter size of array :");
    scanf("%d",&s);
    input(s);
}