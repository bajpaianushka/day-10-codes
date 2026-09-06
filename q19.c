#include <stdio.h>
int main() {
	int a = 2;
	int b = 3;
	int c = 4;
	scanf("%d %d %d", &a, &b, &c);

	if(a == b && b == c){
		printf("Equilateral");
	}
	else if(a == b || b == c || a == c){
		printf("Isosceles");
	}
	else{
		printf("Scalene");
	}

	return 0;
}
