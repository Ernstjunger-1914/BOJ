#include <stdio.h>

int factorial(int n) {
  if(n>1) {
    n*=factorial(n-1);

    return n;
  } else {
    return 1;
  }
}

int main() {
  int n_=0;
  scanf("%d", &n_);
  printf("%d\n", factorial(n_));

  return 0;
}