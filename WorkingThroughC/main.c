#include <stdio.h>

/*prints a farenheit to celcius conversion table */

/// @brief prints a farenheit to celsius conversion table
void main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;          /* defines the lower limit of the temperature*/
    upper = 300;        /*defines the upper limit of the temperature*/
    step = 20;          /* the size of the step between measurements*/

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr , celsius);
        fahr = fahr + step;
    }
}