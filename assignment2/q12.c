#include<stdio.h>

void rear(int a[],int s){
a[s-1]=0;
printf("Updated Array: \n");
for(int i=0;i<s-1;i++){
    printf("%d ",a[i]);
}
}

void btw(int a[],int s){
int p;
printf("Enter position where you want to delete your number: ");
scanf("%d",&p);
for(int i=p;i<s;i++){
    a[i]=a[i+1];
}
a[s-1]=0;
printf("Updated Array: \n");
for(int i=0;i<s-1;i++){
    printf("%d ",a[i]);
}
}

void front(int a[],int s){
for(int i=0;i<=s;i++){
    a[i]=a[i+1];
}
a[s-1]=0;
printf("Updated Array: \n");
for(int i=0;i<s-1;i++){
    printf("%d ",a[i]);
}
}

int main(){
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);

    int a[s];
    printf("Enter values of array: ");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }

    printf("Your Array:\n");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }

    printf("\n1. Front Deletion\n2. Rear Deletion\n3. Between Deletion");
    printf("\nEnter choice: ");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
        front(a,s);
        break;
        case 2:
        rear(a,s);
        break;
        case 3:
        btw(a,s);
        break;
        default:
        printf("\nInvalid Input!");
    }
    return 0;
}