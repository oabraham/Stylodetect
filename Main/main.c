#include<stdio.h>
#include<time.h>

int main(void){
	clock_t startTime = (float)clock()/CLOCKS_PER_SEC;

	for(int a=0; a<100000; a++){
		for(int b=0; b<100000; b++){
			int meh = a + b;
		}
	}
	clock_t endTime = (float)clock()/CLOCKS_PER_SEC;
	clock_t timeElapsed = endTime - startTime;
	printf("The time: %ld", timeElapsed);
	return 0;
}
