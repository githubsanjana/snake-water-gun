#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char computer) {
    if (you == computer) {
        return 0;
    }
    
    if (you == 's' && computer == 'w') {
        return 1;
    } else if (you == 'w' && computer == 's') {
        return -1;
    }
    
    if (you == 's' && computer == 'g') {
        return -1;
    } else if (you == 'g' && computer == 's') {
        return 1;
    }
    
    if (you == 'w' && computer == 'g') {
        return 1;
    } else if (you == 'g' && computer == 'w') {
        return -1;
    }
}

int main() {
    int number;
    char you, computer;
    
    srand(time(0));
    number = rand() % 100 + 1;
    
    if (number < 33) {
        computer = 's';
    } else if (number >= 33 && number < 66) {
        computer = 'w';
    } else {
        computer = 'g';
    }
    
    printf("Enter 's' for snake, 'w' for water, and 'g' for gun: ");
    scanf(" %c", &you); // Use %c to scan a character, and add a space before %c to consume the newline character.
    
    int result = snakewatergun(you, computer);
    
    printf("You chose %c, and computer chose %c\n", you, computer); // Changed "print" to "printf" and added newline character.
    
    if (result == 0) {
        printf("Game draw\n");
    } else if (result == 1) {
        printf("You won\n");
    } else {
        printf("You lose\n");
    }
    
    return 0;
}
