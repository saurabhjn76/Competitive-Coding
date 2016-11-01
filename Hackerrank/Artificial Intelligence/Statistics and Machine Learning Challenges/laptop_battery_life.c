#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char line[64];
    while(fgets(line, 64, stdin)) {
        float input = atof(line);
        float output = input*2;
        output = output>8?8:output;
        printf("%f\n", output);
    }    
    return 0;
}