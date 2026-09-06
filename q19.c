#include <stdio.h>
int main() {
	int a = 3;
	int b = 3;
	int c = 3;
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
