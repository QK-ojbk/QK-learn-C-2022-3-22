//1.条件操作符（exp1?exp2:exp3）
#define _CRT_SECURE_NO_WARNINGS 1
//条件操作符(三目操作符)
//exp1 ? exp2 : exp3
//表达式1如果是真，则执行表达式2，表达式2的结果是整个表达式的结果
//表达式1如果是假，则执行表达式3，表达式3的结果是整个表达式的结果
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int max=0;
	max=(a>b? a:b);
	printf("%d\n",max);
	return 0;
}

//2.函数调用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20;
	int sum=0;
	sum=Add(a,b);//函数调用符
	printf("%d\n",sum);
	return 0;
}*/

//3.关键词typedef
/*#define _CRT_SECURE_NO_WARNINGS 1
//只要是整数，内存中存储的都是二进制的补码
//正数——原码，反码，补码都相同
//负数——存的是补码
//原码————————————————————>反码————————————————>补码
//直接按照正负写出的二进制序列就是原码。——>原码的符号位不变，其他位按位取法得到——>反码+1
//例如：-2的原码是10000000000000000000000000000010；第一位是符号
//其反码是：11111111111111111111111111111101；
//其补码是：11111111111111111111111111111110；

#include<stdio.h>
int main()
{
	typedef unsigned int u_int;//原本要定义unsigned int,但觉得他有点长，可以利用重定义，来使其缩短以使用
	//关键词typedef——类型定义——类型重定义
	unsigned int a=20;
	u_int b=30;//此处定义的a,b两个类型其实是一样的，u_int是unsigned int的别名
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}*/

//4.局部变量及其生命周期
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test()
{
	static int a=1;
	//此处的a，因为test（）函数在while中，所以a是局部变量,加上static后变成静态局部变量
	//static修饰局部变量，局部变量的生命周期变长
	a++;
	printf("a=%d\n",a);
}

int main()
{
	int i=0;
	while(i<5)
	{
		test();
		i++;
	}
	return 0;
}*/

//5.关键词static
/*#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void test()
{
	static int a=1;
	//此处的a，因为test（）函数在while中，所以a是局部变量,加上static后变成静态局部变量
	//static修饰局部变量，局部变量的生命周期变长
	a++;
	printf("a=%d\n",a);
}

int main()
{
	int i=0;
	while(i<5)
	{
		test();
		i++;
	}
	return 0;
}*/
