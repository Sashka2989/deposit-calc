#include <stdio.h>

void CheckInp (int n, int m);

int main()
{
  int a;
  long int b;

  printf("Enter the deposit amount: ");
  scanf("%li",&b);
  printf("Enter the number days less then 365");
  scanf("%d",&a);
  
  return (0);
}

void CheckInp (int n, int m)
{
  if (b<10000) {
    printf("Deposit amount is incorrected");
  }
  if (a<0 || a>365) {
    printf ("number days is incorrected");
  }
}

