#include <stdio.h>

int main() {
  int star;

  scanf("%d", &star);

  // 줄 반복
  for(int i=1; i<star+1; i++) {
    // 공백 출력을 star-i 만큼 반복
    for(int j=1; j<=star-i; j++) {
      printf(" ");
    }

    // * 출력 반복
    for(int k=1; k<i+1; k++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}