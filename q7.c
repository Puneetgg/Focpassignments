#include<stdio.h>
int convert(int);
int convertd(int);

int main() {
    int choice;
    printf("Enter 1 for binary to dec\nEnter 2 for decimal to binary:");
    scanf("%d",&choice);
    int n;
    if(choice==1){
    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("%d in binary = %d in decimal", n, convert(n));
    }
    else{
        int bin;
  
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    bin = convertd(n);
    printf("%d in decimal =  %d in binary", n, bin);
    }

    return 0;
}
int convert(int n) {

    int dec = 0;
    int i = 0, rem;

    while (n != 0) {

        rem = n % 10;
        dec += rem << i;
        n /= 10;
        ++i;
    }

    return dec;
}
int convertd(int n) {
  int bin = 0;
  int rem, i = 1;
  while (n != 0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}
