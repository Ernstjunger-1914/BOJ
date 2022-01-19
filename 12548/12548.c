#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  for(int i=1; i<=t; i++) {
    int k;
    size_t c, r=0, s=0;
    scanf("%d %zu", &k, &c);

    while(s<k*c) {
      r++;
      s+=s/k+1;
    }
    printf("Case #%d: %zu\n", i, r);
  }
  return 0;
}