#include <stdio.h>


int isPrime(int n)
{
  int i, isPrime = 1;

  if (n == 0 || n == 1) 
  {
    isPrime = 0;
  }
  else 
  {
    for(i = 2; i <= n/2; ++i) 
    {
      if(n % i == 0) 
      {
        isPrime = 0;
        break;
      }
    }
  }

  return isPrime;
}

int main() 
{
  int n, i, flag = 0;
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) 
  {
    if (isPrime(i) == 1) 
    {
      if (isPrime(n - i) == 1) 
      {
        printf("%d  %d\n", i, n - i);
        flag = 1;
      }
    }
  }

  if (flag == 0)
    printf("Impossible\n");

  return 0;
}


