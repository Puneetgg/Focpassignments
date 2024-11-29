#include<stdio.h>
#include<math.h>
void add();
void sub();
void mul();
void div();
void loge();
void root();

void add(){
    int a,b;
    printf("Enter two numbers to add ");
    scanf("%d",&a,&b);
    printf("%d + %d = %d",a,b,a+b);
}
void sub(){
    int a,b;
    printf("Enter two numbers to subtract ");
    scanf("%d",&a,&b);
    printf("%d - %d = %d",a,b,a-b);
}
void mul(){
    int a,b;
    printf("Enter two numbers to multiply ");
    scanf("%d",&a,&b);
    printf("%d x %d = %d",a,b,a*b);
}
void div(){
    int a,b;
    printf("Enter two numbers to divide ");
    scanf("%d",&a,&b);
    printf("%d / %d = %d",a,b,a/b);
}
void loge(){
    float a;
    printf("Enter number you want to take log of ");
    scanf("%f",&a);
    printf("log(%f)=%f",a,log(a));
}
void root(){
    float a;
    printf("Enter number you want to take root of ");
    scanf("%d",&a);
    printf("square root of %d = %d",a,pow(a,2));
}
int main(){
    int ch;
    printf("You have 6 choices:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Divison\n5. Log\n6. SQuare Root");
    printf("\nEnter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        add();
        break;
        case 2:
        sub();
        break;
        case 3:
        mul();
        break;
        case 4:
        div();
        break;
        case 5:
        loge();
        break;
        case 6:
        root();
        break;
        default:
        printf("Invalid Entry");
    }
}