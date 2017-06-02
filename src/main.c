#include <stdio.h>
#include "deposit.h"

int main()
{
    int sum;
    int days;
	int deposit;

    printf("Enter the deposit amount: ");
    scanf("%d", &sum);
    printf("Enter the number days less then 365: ");
    scanf("%d", &days);
    if (CheckInp(sum, days) == 0) {
		return 0;
	} else {
		printf("Deposit amount or number days is incorrected\n");
	}
    deposit = CheckSum(sum, days);
	printf("The amount for the period of %d days: %d \n", days, deposit);
    return 0;
}

