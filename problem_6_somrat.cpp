#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter  the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c*1.8)+32;
    printf("The Fahrenheit temperature is : %f" , f);


    return 0;

}
