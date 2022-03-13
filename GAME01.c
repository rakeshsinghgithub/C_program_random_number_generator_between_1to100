//game geass the number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int num,geass,n_geass=1;
	srand(time(0));
	num=rand()%20+1;
//	printf("The number is %d ",num);
	printf("Enter the number between 1 to 20 \n  ");
	do{
	//printf("Enter the number between 1 to 20  ");
	scanf("%d",&geass);
	if(geass<num)
		printf("please enter grater!\t\n");
	else if(geass>num)
	     printf("Please enter lower!\t\n");
	else
	printf("LUCKY You geass in %d atteamp",n_geass);
	n_geass++;	
      }while(num!=geass);
	return 0;
}
