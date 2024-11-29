#include<stdio.h>
#include<string.h>
#include<ctype.h>

void game(char word[]){
    int t=3;char ch;int len=strlen(word);int count=0;char dup[len];int check=0;
    for (int i = 0; i < len; i++) {
        dup[i] = '_';
    }
    printf("Welcome To Hangman!\nGuess your letter for the missing word!\n");
    printf("If you guess incorrectly, the man will suffer! You have 3 chances\n");
    do{
    printf("Enter your letter: \n");
    scanf(" %c",&ch);
    for(int i=0;i<len;i++){
    if(tolower(ch)==tolower(word[i])){
    count++;
    }
    }
    if(count==0){
    --t;
    printf("Letter %c is not present you have %d chances left\n",ch,t);
    count=0;
    }
    else if(count!=0){
    printf("You got a letter correct!\n");
    check++;
    for(int i=0;i<len;i++){
    if(tolower(ch)==tolower(word[i]))
    dup[i]=toupper(ch);
    }
    count=0;
    }
    for(int i=0;i<len;i++){
        printf("%c ",dup[i]);
    }
    if(t==0){
    printf("\nYou lost! The word was %s",word);
    break;
    }
    if(check==len){
    printf("\nYou Guessed The Word!");
    break;
    }
}
    while(t>=0);
}
int main(){
    char word[]="Pulkit";
    game(word);
}