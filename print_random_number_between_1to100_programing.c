#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// this is my code 
int main(){
	int num;
	srand(time(0));
	num=rand()%1000+1;
	printf("The number is %d ",num);
	return 0;
}
