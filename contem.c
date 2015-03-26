#include <stdio.h>

void CtoF()
{
    float temp;

    printf("\nPlease iuput the temperature in Celsius : ");
    scanf("%f", &temp);

    printf("%.2f C = %.2f F\n", temp, ((float)(temp*9/5)+32));    
}


void FtoC()
{
    float temp;

    printf("\nPlease iuput the temperature in Fahrenheit : ");
    scanf("%f", &temp);

    printf("%.2f F = %.2f C\n", temp, ((float)(temp - 32))*5/9);    
}


void main() 
{
    int way;

    printf("\n");

    while(1){
        printf("\nInput 1(C-->F) or 2(F-->C) to select temperature convert. 3 to leave. : ");
        scanf("%d", &way);

        if(way == 1)
            CtoF();
        else if(way == 2)
            FtoC();
        else if(way == 3)
            break;
        else
            printf("Please input 1 or 2 !");
    }

    printf("\n");
}

