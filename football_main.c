#include "football.h"

int main(int argc, char *argv[]) {
    int score;
    while (1) {
        printf("Enter 0 or 1 to STOP\nEnter the NFL score: ");
        scanf("%d", &score);

        // stop the program if less or equal than 1
        if (score <= 1) {
            printf("Program terminated.\n");
            break;
        }

        // calls function
        count_combinations(score);
    }
    return 0;
}