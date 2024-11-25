#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int createRandomNumber(int min, int max) {
    srand(time(NULL));
    int random_number = min + rand() % (max - min + 1);
    return random_number;
}


int main(void) {

    int minInput = 0;
    printf("Merci de choisir un nombre minimum : \n");
    scanf("%d", &minInput);

    int maxInput = 0;
    printf("Merci de choisir un nombre maximum : \n");
    scanf("%d", &maxInput);

    int randomNumber = createRandomNumber(minInput, maxInput);

    int userInput;
    int nbTry = 0;
    int result = 0; //0 => false; 1 => true

    while ( result == 0 ) {
        nbTry++;
        printf("Donnez une proposition : \n");
        scanf("%d", &userInput);
        if (userInput == randomNumber ) {
            printf("Win, en %d coups\n", nbTry);
            result = 1;
        } else if (userInput > randomNumber ) {
            printf("Proposez un nombre plus bas : \n");
        } else if ( userInput < randomNumber ) {
            printf("Proposez un nombre plus haut : \n");
        }
    }
    return 0;
}