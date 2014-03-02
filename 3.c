/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieveOfErasthosthenes(long n);
int main(int argc, const char* argv[]){
	sieveOfErasthosthenes(13195);
  
}

void sieveOfErasthosthenes(long n) {
  int A[n];
  long i;
  for (i = 0; i < n; i++){
    A[i] = 1;
  }
  int j;
  for (i = 2; i < sqrt(n); i++){
    if (A[i] == 1) {
      for (j = (i^2); j < n; ){
        A[j] = 0;
        j += i;
      }
    }
  }

  for (i = 2; i < sqrt(n); i++){
    if (A[i] == 1){
      printf("%ld\n", i);
    }
  }
}

