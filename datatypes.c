#include<stdio.h>
int main()
{
	//Different Data Types in C are ::
	/*int i; 4
	float f; 4
	char c; 1
	double d; 8  
	unsigned int ui; 4    //we can also use these variables to know the sizeof data type as they are declared with that datatype.
	unsigned char uc; 1
	long int li; 4
	unsigned long int uli; 4
	long long int lli; 8
	short int si; 2
	long double ld; 16
	unsigned long long int ulli; 8
	*/
		printf("size of interger data type is : %lu\n",sizeof(int));
		printf("size of float data type is : %lu\n",sizeof(float));
		printf("size of character data type is : %lu\n",sizeof(char));
		printf("size of double data type is : %lu\n",sizeof(double));
		printf("size of unsigned int data type is : %lu\n",sizeof(unsigned int));
		printf("size of long interger data type is : %lu\n",sizeof(long int));
		printf("size of short interger data type is : %lu\n",sizeof(short int));
		printf("size of long double data type is : %lu\n",sizeof(long double));
		printf("size of short double data type is : %lu\n",sizeof(long long int));
		
		//here %lu is format specifier for unsigned long
	
	
	
	
}
