#include<stdio.h>
int main() // Use int main() for proper return type
{
    int n, r, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n; // Assign 'n' to 'temp' after input is read

    // Reverse the number using a for loop
    for (; n != 0; n /= 10) {
        r = n % 10;          // Extract the last digit
        sum = sum * 10 + r;  // Build the reversed number
    }

    // Check if the original number (temp) and reversed number (sum) are the same
    if (temp == sum)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

