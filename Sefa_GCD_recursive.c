// GCD Recursive
#include <stdio.h>

int gcd(int a, int b) {
	if (b != 0) {
		return gcd(b, a%b);
	}
	return a;
}


void main() {
	int a = 96, b = 40; 
	int gcd_a_b = gcd(a, b);
	return 0;
}