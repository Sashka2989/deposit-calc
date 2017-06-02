#include <stdio.h>

int CheckInp (int sum, int days)
{
    if (sum < 10000) {
		return 0;
	}
    if ((days < 0) || (days > 365)) {
		return 0;
	}
	return 1;
}

int CheckSum (int sum, int days)
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
	return sum;
}
