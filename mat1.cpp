
#include <iostream>

int sumPodz(int x);
int sumPierw(int x);

int main()
{
  int x = 5;
  int result = sumPodz(x);
  int result1 = sumPierw(x);
  printf("%d\n%d", result, result1);
  return 0;
}

// W£ASNE
int sumPodz(int x)
{
  int sum = 1 + x;
  int p = 2;
  while(p < sqrt(x))
  {
    if(x % p == 0)
    {
      sum += p;
      int t = x / p;
      if(t!=p) sum += t;
    }
    p++;
  }

  return sum;
}

// W£ASNE
int sumPierw(int x)
{
  int sum = 0;
  int p = 2;
  while(p < sqrt(x))
  {
    if(x % p == 0)
    {
      sum += p;
      int t = x / p;
      if(t != p) sum += t;
      x = t;
    }
    p++;
  }
  return sum;
}