// Program to find maximum and minimum of
// two numbers without using loop and any
// condition.
#include<bits/stdc++.h>

int main ()
{
  int a = 30, b = 20;
  printf("max number = %d\n", ((a + b) + abs(a - b)) / 2);
  printf("min  number= %d", ((a + b) - abs(a - b)) / 2);
  return 0;
}


//output
// max number = 30
// min number = 20
