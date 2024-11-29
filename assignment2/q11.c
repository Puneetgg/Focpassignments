#include<stdio.h>

void rear(int a[],int s){
printf("Enter number you want to insert: ");
int in;
scanf("%d",&in);
a[s]=in;
printf("Updated Array: \n");
for(int i=0;i<=s;i++){
    printf("%d ",a[i]);
}
}
void btw(int a[],int s){
printf("Enter number you want to insert: ");
int in;
scanf("%d",&in);
int p;
printf("Enter position where you want to insert your number: ");
scanf("%d",&p);
for(int i=s-1;i>=p;i--){
    a[i+1]=a[i];
}
a[p]=in;
printf("Updated Array: \n");
for(int i=0;i<=s;i++){
    printf("%d ",a[i]);
}
}
void front(int a[],int s){
printf("Enter number you want to insert: ");
int in;
scanf("%d",&in);
for(int i=s;i>=0;i--){
    a[i+1]=a[i];
}
a[0]=in;
printf("Updated Array: \n");
for(int i=0;i<=s;i++){
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

    printf("\n1. Front Insertion\n2. Rear Insertion\n3. Between Insertion");
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
}