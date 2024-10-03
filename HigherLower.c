#include <stdio.h>
#include <stdbool.h> 
#include "sodium.h"
#include <stdlib.h>  // For exit() and EXIT_FAILURE
#include <string.h>  // For strtok

int getRandomNumber();
const int MAX_TRIES = 3;

int main() {
    int guessed = 0;
    int toGuess = getRandomNumber();
    bool isNotGuessed = true;
    int attempt = 1;
   
    while (isNotGuessed && attempt <= MAX_TRIES) {
        printf("Input a Number:\n");
        scanf("%d", &guessed);
        if (guessed > toGuess){
            printf("To High\n");
        } else if (guessed < toGuess){
            printf("To Low\n");
        } else {
            printf("Got It\n");
            isNotGuessed = false;
        }
        attempt++;
    }

}

int getRandomNumber()
{
    uint32_t myInt;

    if (sodium_init() < 0) {
        /* panic! the library couldn't be initialized, it is not safe to use */
        return 1; 
    }
    /* myInt will be a random number between 0 and 9 */
    myInt = randombytes_uniform(10);
    return myInt;
}