#include <cstdio>

double getRzeczywista()
{
  char c; 
  double res = 0;
  int sign = 0;

  //białe znaki
  while((c = getchar()) == ' ' || c == '\t' || c == '\n');
  ungetc(c, stdin);

  //+
  if((c = getchar()) == '-') sign = 1;
  else if(c != '+')
    ungetc(c, stdin);

  //wartosc
  while((c = getchar()) >= '0' && c <= '9')
    res = res * 10 + (c - '0');

  //przecinek
  if(c == '.')
  {
    double coef = 0.1;
    while((c = getchar()) >= '0' && c <= '9')
    {
      res += (c - '0') * coef;
      coef *=0.1;
    }
  }

  ungetc(c, stdin);
  if(sign) res = -res; 
  return res;
}
