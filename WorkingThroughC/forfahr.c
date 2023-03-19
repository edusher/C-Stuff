#include <stdio.h>

#define LOWER 0     /*lower limit of the table*/
#define STEP 20     /*step between each measurement*/
#define UPPER 300   /*Upper limit of the table*/



/// @brief 

int main(){
    
    printf("Farenheit Celsius Conversion table.\n");

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}