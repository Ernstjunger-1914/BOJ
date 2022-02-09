#include <stdio.h>

int main() {
	int star;
	
	scanf("%d", &star);
	
	for(int i=1; i<star+1; i++) {	// 줄 반복 
		for(int j=1; j<i+1; j++) {	// * 찍기 반복 
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}