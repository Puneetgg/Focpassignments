#include<stdio.h>
int main(){
    char a[3][3];int t=0;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=' ';
            }
        }
    printf("Welcome to Tic Tac Toe!\nEnter numbers from 1-9 in order to fill the box");
    printf("\nPlay your turn by entering numbers 1-9 as per the matrix here:\n");
    printf("1 2 3\n4 5 6\n7 8 9");
    printf("\nFirst player to start is O!\n");
    while(t<9){
        int ch;char fill;
        if(t%2==0){
        printf("Player 1's turn! ");
        fill='O';
        scanf("%d",&ch);
        }
        else{
        printf("Player 2's turn! ");
        fill='X';
        scanf("%d",&ch);
        }
        switch(ch){
            case 1:
            a[0][0]=fill;
            break;
            case 2:
            a[0][1]=fill;
            break;
            case 3:
            a[0][2]=fill;
            break;
            case 4:
            a[1][0]=fill;
            break;
            case 5:
            a[1][1]=fill;
            break;
            case 6:
            a[1][2]=fill;
            break;
            case 7:
            a[2][0]=fill;
            break;
            case 8:
            a[2][1]=fill;
            break;
            case 9:
            a[2][2]=fill;
            break;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%c ",a[i][j]);
            }
            printf("\n");
        }
        if(((a[0][0]!=' ' && a[1][1]!=' ' && a[2][2]!=' ')&&(a[0][0]==a[1][1] && a[1][1]==a[2][2])) || ((a[0][2]!=' ' && a[1][1]!=' ' && a[2][0]!=' ')&&(a[0][2]==a[1][1] && a[1][1]==a[2][0]))){
            //Diagonal Same
            (t%2==0)?printf("Player 1 Wins!"):printf("Player 2 Wins!");
            break;
        }
        else if(((a[0][0]!=' ' && a[0][1]!=' ' && a[0][2]!=' ')&&(a[0][0]==a[0][1] && a[0][1]==a[0][2])) || ((a[1][0]!=' ' && a[1][1]!=' ' && a[1][2]!=' ')&&(a[1][0]==a[1][1] && a[1][1]==a[1][2])) || ((a[2][0]!=' ' && a[2][1]!=' ' && a[2][2]!=' ')&&(a[2][0]==a[2][1] && a[2][1]==a[2][2]))){
            //Horizontal Element Same
            (t%2==0)?printf("Player 1 Wins!"):printf("Player 2 Wins!");
            break;
    }
        else if(((a[0][0]!=' ' && a[1][0]!=' ' && a[2][0]!=' ')&&(a[0][0]==a[1][0] && a[1][0]==a[2][0])) || ((a[0][1]!=' ' && a[1][1]!=' ' && a[2][1]!=' ')&&(a[0][1]==a[1][1] && a[1][1]==a[2][1])) || ((a[0][2]!=' ' && a[1][2]!=' ' && a[2][2]!=' ')&&(a[0][2]==a[1][2] && a[1][2]==a[2][2]))){
            //Vertical Element Same
            (t%2==0)?printf("Player 1 Wins!"):printf("Player 2 Wins!");
            break;
        }
        t++;
    }
    if(t==9)
    printf("Tie");
}