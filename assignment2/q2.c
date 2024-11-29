#include<stdio.h>
void grade(int a[],int n){
for(int i=0;i<n;i++){
    if(a[i]>=75)
    printf("\nStudent number %d get A grade for %d marks",i+1,a[i]);
    else if(a[i]>=60 && a[i]<75)
    printf("\nStudent number %d get B grade for %d marks",i+1,a[i]);
    else if(a[i]>=40 && a[i]<60)
    printf("\nStudent number %d get c grade for %d marks",i+1,a[i]);
    else if(a[i]<40)
    printf("\nStudent number %d get D grade for %d marks",i+1,a[i]);
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
    grade(a,n);
    return 0;
}