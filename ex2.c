/******************
Name: Davidi Bellaire
ID: 214165417
Assignment: ex2
*******************/

#include <stdio.h>
#define NEWLINE 10

int main()
{
    int choice = 0;
    while (1) {
        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");

        scanf("%d", &choice);

        if (choice < 1 || choice > 6) {
            printf("Invalid option, please try again\n");
            continue;
        }

        switch (choice) {
        case 1:
            int num, count = 0;
            printf("please enter a positive number:\n");
            scanf("%d", &num);
            while (num <= 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &num);
            }

            while(num != 0){
                if(num & 1) count++;
                num = num >> 1;
            }

            printf("Ducky earns %d corns\n", count);
            break;

        case 2:
            unsigned long long ducks = 0;
            int numDucks = 0;
            int user;
            printf("please enter the number of ducks:\n");
            scanf("%d", &numDucks);
            while(numDucks <= 0){
                printf("Invalid number, please try again\n");
                scanf("%d", &numDucks);
            }
            printf("you entered %d ducks\n", numDucks);
            for(int i = 1; i <= numDucks; i++){
                printf("duck %d do QUAK? 1 for yes, 0 for no\n", i);
                scanf("%d", &user);

                while(user != 0 && user != 1){
                    printf("Invalid number, please try again\n");
                    scanf("%d", &user);
                }

                ducks = (ducks << 1) | user;
            }

            for(int i = numDucks - 1; i >= 0; i--){
                int b = (ducks >> i) & 1;
                if(b){
                    printf("duck number %d do Quak\n", numDucks - i);
                }
                else {
                    printf("duck number %d do Sh...\n", numDucks - i);
                }
            }
            break;

        case 3:
            long long base;
            long long exp;
            long long res = 1;

            printf("please enter the number\n");
            scanf("%lld", &base);
            while(base < 0){
                printf("Invalid input, please try again\n");
                scanf("%lld", &base);
            }

            printf("please enter the exponent\n");
            scanf("%lld", &exp);
            while(exp < 0){
                printf("Invalid input, please try again\n");
                scanf("%lld", &exp);
            }

            if(exp == 0){
                printf("your power is: 1\n");
            }

            if(exp != 0){
                for(int i = 0; i < exp; i++){
                    res = res * base;
                }
                printf("your power is: %lld\n", res);
            }
            break;

        case 4:
            int duckNum = 0;

            printf("please enter number of ducks:\n");
            scanf("%d", &duckNum);
            while(duckNum < 0){
                printf("Invalid number, please try again\n");
                scanf("%d", &duckNum);
            }
            for(int firstDuck = 0; firstDuck < duckNum; firstDuck += NEWLINE)
            {
                for(int i = firstDuck; i < firstDuck + NEWLINE && i < duckNum; i++) {
                    printf("   _\t\t");
                }
                printf("\n");

                for(int i = firstDuck; i < firstDuck + NEWLINE && i < duckNum; i++) {
                    printf("__(o)>\t\t");
                }
                printf("\n");

                for(int i = firstDuck; i < firstDuck + NEWLINE && i < duckNum; i++) {
                    printf("\\___)\t\t");
                }
                printf("\n");
            }
            break;

        case 5:
            int secret, digit, tmp, found;

            printf("please enter number\n");
            scanf("%d", &secret);
            while (secret <= 0) {
                printf("Invalid number, please try again\n");
                scanf("%d", &secret);
            }
            while (secret != 0) {
                digit = secret % 10;
                tmp = secret / 10;
                found = 0;
                while (tmp != 0) {
                    if (tmp % 10 == digit) {
                        found = 1;
                    }
                    tmp /= 10;
                }
                if (found) {
                    printf("%d appears more than once!\n", digit);
                }
                secret /= 10;
            }
            break;

        case 6:
            printf("Good night! See you at the pond tomorrow.\n");
            return 0;
        }
    }
    // MAIN MENU LOOP

    // TASK 1: Ducky's Unity Game

    // TASK 2: The Memory Game

    // TASK 3: Professor Pat's Power Calculation

    // TASK 4: The Duck Parade

    // TASK 5: The Mystery of the Repeated Digits

    // TASK 6: EXIT

    // dont forget through all the necessary parts to validate invalid input.

    return 0;
}
