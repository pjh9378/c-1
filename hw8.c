#include <stdio.h>
#include <math.h>


double calculateStandardDeviation(double arr[], int n)
{
    double mean = 0.0, sum = 0.0;

    
    for (int i = 0; i < n; ++i)
    {
        mean += arr[i];
    }
    mean /= n;

    
    for (int i = 0; i < n; ++i)
    {
        sum += pow(arr[i] - mean, 2);
    }

    
    double standardDeviation = sqrt(sum / n);

    return standardDeviation;
}

int main()
{
   
    double numbers[5];

    
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i)
    {
        scanf_s("%lf", &numbers[i]);
    }

    
    double stdDev = calculateStandardDeviation(numbers, 5);


    printf("Standard Deviation = %.3f\n", stdDev);

    return 0;
}
