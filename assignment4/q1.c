#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int comp=rand()%101;
    int ch,choice=1;
    int u[3];int c[3];
    printf("Welcome to Rock Paper Scissors!\n");
    printf("Enter 0-33 to choose Rock\n33-66 to choose Paper\n66-100 to choose Scissors");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    if(ch>=0 && ch<33){
        u[0]=1;
        printf("You Chose Rock\n");
    }else if(ch>=33 && ch<66){
        u[1]=1;
        printf("You Chose Paper\n");
    }
    else if(ch>=66 && ch<=100){
        u[2]=1;
        printf("You Chose Scissors\n");
    }

    if(comp>=0 && comp<33){
        c[0]=1;
        printf("Computer Chose Rock\n");
    }else if(comp>=33 && comp<66){
        c[1]=1;
        printf("Computer Chose Paper\n");
    }
    else if(comp>=66 && comp<=100){
        c[2]=1;
        printf("Computer Chose Scissors\n");
    }
    if(u[0]==1){
        if(c[0]==1)
        printf("Draw");
        else if(c[1]==1)
        printf("Computer Wins!");
        else if(c[2]==1)
        printf("You Win!");
    }
    else if(u[1]==1){
        if(c[1]==1)
        printf("Draw");
        else if(c[2]==1)
        printf("Computer Wins!");
        else if(c[0]==1)
        printf("You Win!");
    }
    if(u[2]==1){
        if(c[2]==1)
        printf("Draw");
        else if(c[0]==1)
        printf("Computer Wins!");
        else if(c[1]==1)
        printf("You Win!");
    }
}