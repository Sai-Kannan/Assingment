#include<stdio.h>
/*  specifier  default value   memory segment   scope    life time  linkage
     auto        garbage        stack         within block  block     no

int main()
{
	int a;//by default it will be auto if we dont specify any storage classes
	auto int b;
	printf("%d  %d",a,b);
}

/*  specifier  default value   memory segment   scope    life time  linkage
     register       garbage        cpu/stack    within block  block     no

int main()
{
  register int r;//it is applicable only to local variable.register data is faster than all the data
  printf("%d\n",r);
  printf("%p",&r);//generally we cannot get the access to adress of variable,if we get then it might be stored in stack	
}

/*  specifier         default value   memory segment   scope    life time         linkage
    implicit static       zero         DS          within block  entire program     no

void fun()
{
	static int a =10;//if we dont use static the o/p will be 11,11,11
	printf("%d",++a);
}
int main()
{
	fun();
	fun();
	fun();
}
/*  specifier         default value   memory segment   scope    life time             linkage
    explicit static       zero         DS          entire program  entire program     internal linkage

static int a=10;
void fun()
{
	//if we dont use static the o/p will be 11,11,11
	printf("%d",++a);
}
int main()
{
	fun();
	fun();
	fun();
}
/*  specifier         default value   memory segment   scope    life time        linkage
    extern       zero         DS          entire program  entire program     internal & external linkage

//internal linkage i.e with in the program
int a=10;
int main()
{
	int a=20;
	printf("%d",a);
	printf("%d",a);
	{
	extern int a;	
	printf("%d",a);
    }
} */
//external linkage i.e which links one file with another file
static int a =8;
const int i = 5;
void fun()
{
	printf("%d %d \n", a,i);
}
/*
int main()
{
	fun();
	int a=2;
	printf("%d", a);
}
*/
BELOW IS FOR EXTERNAL LINKAGE TO OTHER FILES
#include<stdio.h>
#include"stoarage class.cpp"
int main()
{
	fun();
	int a =5;
	printf("%d",a);
}
