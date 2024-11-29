#include<stdio.h>
void update(int a[],int n){
for(int i=0;i<n;i++){
    a[i]=a[i]+5;
}
printf("\nUpdated Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter marks of students: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    update(a,n);
    return 0;
}