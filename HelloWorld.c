#include <stdio.h>
#include <stdbool.h> 
//tuto https://www.youtube.com/watch?v=87SH2Cn0s9A
// Function prototype
int calcInt(int a, int b);
float calcFloat(float a, float b);
double calcDouble(double a, double b);
char stringBuilder(char a, char b);
const float PI = 3.14; 
bool ans = true;
bool isBig(int a, int b);

int main() {
  printf("Hello World!\n");
  printf("%d\n", calcInt(1, 3));
  printf("%f\n", calcFloat(1.2, 4.7));
  printf("%lf", calcDouble(1.3, 8.9));
  printf("%c\n", 'D');
  char fakeString[] = "I am a String";
  printf("%s\n", fakeString );
  printf("%d\n", ans);
  printf("%d\n", isBig(3, 1));
  return 0;
}

// Function definition
int calcInt(int a, int b) {
    return a + b;
}

float calcFloat(float a, float b){
    return a + b;
}

double calcDouble(double a, double b){
    return a + b;
}

bool isBig(int a, int b){
    if (a > b){
        return true;
    }
    return false;

    
}
