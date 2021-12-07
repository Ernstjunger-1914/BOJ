#include <stdio.h>

long long fibo[1500050]={ 0, 1 };

int main() {
  long long n;
  scanf("%lld", &n);

  for(int i=2; i<1500000; i++) {
    fibo[i]=(fibo[i-2]+fibo[i-1])%1000000;
  }

  printf("%lld\n", fibo[n%1500000]);

  return 0;
}