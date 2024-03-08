#include<stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int sum = 0;
	while (a < 4000000) {
		int temp = b;
		b = a + b;
		a = temp;
		if (b % 2 == 0) {
			sum+=b;
		}
	}

	printf("%d", sum);
	return sum;
}
