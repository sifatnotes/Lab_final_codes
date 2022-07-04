#include <stdio.h>
int main()
{
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("How many subject? ");
    scanf("%d", &n);



    for (i = 0; i < n; i++)
    {
        printf("%d. Enter the marks: ", i + 1);
        scanf("%f", &num[i]);
        sum =sum + num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
