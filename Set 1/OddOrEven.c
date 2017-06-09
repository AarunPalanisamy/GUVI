#include <stdio.h>

int main(void) {
	// your code goes here
	long long int num;
	scanf("%lld",&num);
	if(num&1)
	printf("Odd");
	else
	printf("Even");
	return 0;
}
