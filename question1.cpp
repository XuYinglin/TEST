#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, detla;
	scanf("%lf %lf %lf",&a,&b,&c);
	detla = b*b-4*a*c;
	double root1, root2;	
	if(a != 0)
	{
		if(detla > 0)
		{
			root1 = (-b + sqrt(detla))/ (2*a);
			root2 = (-b - sqrt(detla))/ (2*a);
			printf("root1 = %lf, root2 = %lf\n",root1,root2);
		}
		else if(detla < 0)
		{
			printf("The quation has no real roots\n");
		}
		else
		{
			root1 = (-b)/ (2*a);
			printf("There is one root: %lf\n",root1);
		}
	}
	else
		{
		if(b==0)
		{
			printf("This is not an equation\n");
		}
		else{
			printf("x = %lf",(-c)/b);
		}	
		printf(a+b=c)
	}
	return 0;
} 
