#include <stdio.h>

int main()
{
    int n, b, sum=0, min, max;
    float aver;
    printf("How many numbers do you want to enter: \n");
    scanf_s("%i", &n);
    if (n <= 0) {
        printf("Error. Wrong number");
    }
    else {
        printf("Enter the numbers: \n");
        for (int a = 0; a < n; a++) {
            scanf_s("%i", &b);
            if (a == 0) min = max = b;
            if (b > max) max = b;
            else if (b < min) min = b;
            sum = sum + b;
        }
        printf("Maximum entered number: %i", max);
        printf("\n");
        printf("Minimum entered number: %i", min);
        printf("\n");
        printf("SUM = %i", sum);
        printf("\n");
        aver = (float)sum / (float)n;
        printf("AVERAGE = %f", aver);
    }
    return 0;
}