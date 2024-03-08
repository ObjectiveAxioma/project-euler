#include<stdio.h>
#include<stdint.h>

int isPrime(uint64_t n)
{
	uint64_t m = n/2;
	uint64_t i = 2;
	while (i < m) {
		if (m % i == 0) return 0;
		i+=1;
	}

	return 1;
}

int main()
{
	long long int N = 600851475143;
	printf("%d", N);
	int check = 0;
	uint64_t n = N/2;
	uint64_t m = n;
	while (m > 1) {
		if (N % m == 0) check = isPrime(m);
		if (check == 0) printf("%d", m); return m;
		m-=1;
	}

	return N;
}
