#include <stdio.h>

int main() {
  int n;
  int fibonacci[1000001]={ 0, 1 };
  scanf("%d", &n);

  for(int i=2; i<=n; i++) {
    fibonacci[i]=(fibonacci[i-2]+fibonacci[i-1])%1000000007;
  }

  printf("%d\n", fibonacci[n]);

  return 0;
}