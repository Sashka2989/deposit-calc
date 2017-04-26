#include <stdio.h>

void CheckInp (int sum, int days)
{
    if (sum < 10000) {
        printf("Deposit amount is incorrected\n");
    }
    if ((days < 0) || (days > 365)) {
        printf ("number days is incorrected\n");
    }
}

void CheckSum (int sum, int days)
{
    if (sum < 100000) {
        if ((days >= 0) && (days <= 30)) {
	    sum = sum - (sum * 10 / 100);
        }
        if ((days >= 31) && (days <= 120)) {
	    sum = sum + (sum * 2 / 100);
        }
        if ((days >= 121) && (days <= 240)) {
            sum = sum + (sum * 6 / 100);
        }
        if ((days >= 241) && (days <= 365)) {
            sum = sum + (sum * 12 / 100);
        }
    } else {
        if ((days >= 0) && (days <= 30)) {
            sum = sum - (sum * 10 / 100);
        }
        if ((days >= 31) && (days <= 120)) {
            sum = sum + (sum * 3 / 100);
        }
        if ((days >= 121) && (days <= 240)) {
            sum = sum + (sum * 8 / 100);
        }
        if ((days >= 241) && (days <= 365)) {
            sum = sum + (sum * 15 / 100);
        }
    }
    printf("The amount for the period of %d days: %d \n", days, sum);
}
