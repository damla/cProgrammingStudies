#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
int num, divisor, prime;

	for(num=2; num<10; num++){
	prime=TRUE; 
	
		for(divisor=2; divisor<=10; divisor++){
			if(((num%divisor)==0) && (num!=divisor)){
				prime=FALSE;
			}
		}
	if(prime)
		printf("The number %d is prime\n",num);

	}
	return 0;
}

