#include <stdio.h>
#include "deposit.h"

int main()
{
    int sum;
    int days;

    printf("Enter the deposit amount: ");
    scanf("%d", &sum);
    printf("Enter the number days less then 365: ");
    scanf("%d", &days);
    CheckInp(sum, days);
    CheckSum(sum, days);
    return 0;
}

