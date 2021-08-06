#include<stdio.h>
int main()
{
	int i=5,j=10;
	char c =1,d=4;
	float f=3.432,g=4.675;
	double a=8.03622,b=16.7898;
/*arithmetic operators*/
	printf("%lf\n",a+b);
	printf("%d\n",i+c);// we can add values of two different types like char and int.
	printf("%d\n",j+f);// but when we tried to add int and float and double we must provide format specifier of highest data type.
	a++;//post increment 
    ++b;//pre increment
    printf("%lf\n",a+b);
/*logical operators*/
    i=c&&d;// gives one if both are non zero values
    printf("%d\n",i);
    i=f||g;// gives one if any one value is non zero values
     printf("%d\n",i);
     i=--c && d++;//it will check from left to right if left is zero then it will give zero
      printf("%d\n",i);
/*relational operators*/
    i=(b<a);//gives one if condition is true
     printf("%d\n",i);      
    i=(b!=j);// we can even compare two diff dAta types
     printf("%d\n",i);
/*bitwise operator*/
    c=8;
    i= c | d;//converts the given value to binary and then perform the operation
    printf("%x\n",i);//it gives the output in hexa decimal value.
    i = c & d; 
    printf("%d\n",i);
    i=c ^ d;
    printf("%d\n",i);
    i=8;
    i = i | (1<<6);
    printf("%x\n",i);  
/*special operators*/
    i=(1,2,3);//3 will be assinged to i because of comma operator
	 printf("%d\n",i);
/*ternary operator*/
(a>b)?printf("a>b\n"):printf("b>a\n");//checks the condition and gives the output accordingly.	     
}
