#include<stdio.h>
void decimalToBinary(int n)
{
    if (n > 1)

        decimalToBinary(n / 2);

    printf("%d", n % 2);
}

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) 
        printf("Please enter a positive number.\n");
    
    else if (num == 0) 
        printf("0");

    else
        printf("The binary representation of %d is: ", num);
    decimalToBinary(num);

    return 0;

 }