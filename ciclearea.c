#include<stdio.h>
#include<math.h>
#define pi 3.141 // here instead of this we can also use builtin fun called M_PI(3.141...)
int main()
{
	float rad;
	printf("enter any value for radius of circle\n");
	scanf("%f",&rad);
	//As we have used macro we can get that value of pi whenever pi variable is given
	printf("Area of circle is %f\n",(pi * pow(rad,2)));
	printf("Circumfurence of circle is %f",(2 * pi * rad));
	return 0;
}

