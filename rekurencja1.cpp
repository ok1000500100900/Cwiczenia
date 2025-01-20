
#include <iostream>
#define N 5
#define X 2

int fib(int n);
int silnia(int n);
int newton(int n, int x);

int main()
{
  int result = fib(N);
  int result1 = silnia(N);
  int result2 = newton(N, X);
  printf("%d\n%d\n%d", result, result1, result2);
  return 0;
}

// ciag Fibonacciego
int fib(int n) 
{
  if(n == 0) return 0;
  if(n == 1)return 1;
  return fib(n - 2) + fib(n - 1);
}

// silnia
int silnia(int n)
{
  if(n == 0 || n == 1) return 1;
  return silnia(n-1)*n;
}

// dwumian Newtona
int newton(int n, int x)
{
  if(x == 0 || x == n) return 1;
  return newton(n-1, x - 1) + newton(n - 1, x);
}