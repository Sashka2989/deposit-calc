#include <stdio.h>

void CheckInp (int n, int m);

void CheckSum (int n, int m);

int main()
{
  int a;
  long int b;

  printf("Enter the deposit amount: ");
  scanf("%li",&b);
  printf("Enter the number days less then 365: ");
  scanf("%d",&a);
  
  CheckInp (b,a);
  return (0);
}

void CheckInp (int n, int m)
{
  if (n<10000) {
    printf("Deposit amount is incorrected\n");
  }
  if (m<0 || m>365) {
    printf ("number days is incorrected\n");
  }
}

void CheckSum (int n, int m)
{
if (n < 100000) {
		if (m >= 0 && m <= 30) {
			n = n - (n * 10 / 100);
		}
		if (m >= 31 && m <= 120) {
			n = n + (n * 2 / 100);
		}
		if (m >= 121 && m < 240) {
			n = n + (n * 6 / 100);
		}
		if (m >= 241 && m <= 365) {
			n = n + (n * 12 / 100);
		}
	}
}
