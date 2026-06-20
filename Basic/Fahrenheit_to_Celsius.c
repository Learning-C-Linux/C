//C Program to Calculate Fahrenheit to Celsius
// °F = (9/5 × °C) + 32.
//	(F − 32) × 5/9 = 0°C


#include <stdio.h>
int main()
{
    float f,c;
    printf("enter the Fahrenheit Values:");
    scanf("%f",&f);
    c=(f-32.0)*5.0/9.0;
    printf("Celsius:%f",c);
    return 0;
}
