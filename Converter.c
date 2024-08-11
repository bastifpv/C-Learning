#include <stdio.h>
#include <stdbool.h> 

void printLine();
float convertToF(float numb);
float convertToC(float numb);

int main() {
    printLine();
    printf("%s\n", "CONVERTER");
    printLine();
    printf("Convert Fahrenheit to Celsius: 1 \n");
    printf("Convert Celsius to Fahrenheit: 2 \n");
    printf("Select: \n");
    int selection;
    scanf("%d", &selection);
    printLine();
    float numbToCalc;
    float ergebniss;
    char ergebnissEinheit;
    char ursprungseinheit;
    if (selection == 1){
        printf("Type in Celsius: \n");
        scanf("%f", &numbToCalc);
        ergebniss = convertToF(numbToCalc);
        ergebnissEinheit = 'F';
        ursprungseinheit = 'C';

    } else if (selection == 2){
        printf("Type in Fahrenheit: \n");
        scanf("%f", &numbToCalc);
        ergebniss = convertToC(numbToCalc);
        ergebnissEinheit = 'C';
        ursprungseinheit = 'F';
    } else {
        printf("Please type 1 or 2 \n");
    }
    printLine();
    printf("%f", numbToCalc);
    printf("°%c are ",ursprungseinheit);
    printf("%f", ergebniss);
    printf("°%c\n",ergebnissEinheit);
    printLine();
    return 0;
}

void printLine() {
    for (int i = 0; i < 20; i++){
       printf("%c", '-'); 
    }
    printf("\n");
}

float convertToF(float numb) {
    return (numb * 1.8) +32;
}

float convertToC(float numb) {
    return (numb - 32)*(5.0f/9.0f);
}
