#include <stdio.h>
#include <math.h>

int main(){

	float a,b,c,answer1,answer2,answer,complex_answer;;

	printf("Enter the coefficients: ");
	scanf("%f%f%f",&a,&b,&c);

	if((b*b-4*a*c)>=0){

		answer1=(-b+sqrt(b*b-4*a*c))/2*a;
		answer2=(-b-1*sqrt(b*b-4*a*c))/2*a;

		printf("The solutions are %.2f and %.2f.\n",answer1,answer2);

			return 0;
		}
	if((b*b-4*a*c)<0){

		answer=-b/2*a;

		complex_answer=(sqrt(4*a*c-b*b))/2*a;
	 	
		printf("The solutions are %.2f+%.2fi and %.2f-%.2fi.\n",answer,complex_answer,answer,complex_answer);
		}
	
return 0;
}
