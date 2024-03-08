#include<stdio.h>

const int N = 1000;

int main()
{
	int sum = 0;
	int n = 1;
	while (n < N) {
		if (n % 3 == 0 || n % 5 == 0) {
			sum+=n;
		}
		n++;
	}
	
	printf("%d", sum);
	return sum;
}
			
