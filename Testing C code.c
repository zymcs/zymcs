#include <stdio.h>

int main() {
    int x = 5;
    int y = x;
    int z = y * x;  // This will be 25
    int input;  // Declare 'input' to store user input

    printf("What would the answer be?\n");

    // Check if scanf reads an integer and nothing else
    if (scanf("%d", &input) == 1) {
        if (input == z) {  // Check if the input matches the expected answer
            printf("You're correct!\n");  // User is correct
        } else {
            printf("You're wrong!\n");  // User is incorrect
        }
    } else {
        printf("Invalid input! Please enter an integer.\n");
    }

    return 0;  // Return statement at the end of main
}


//Chatgpt generated. my previous code was not good. but I did try.


/*

#include <stdio.h>

int main() {
    int x = 5;
    int y = x
    int z = y*x
    printf("What would the answer be?");
    scanf("input = %d")
if input == 25;
printf("you're correct!")

else if
printf("You're wrong!")
  return 0;
}
*/