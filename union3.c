#include<stdio.h>
#include<string.h>
#include<windows.h>
//#pragma warning(disable:4996)
union Un
{
	char c;
	int i;
};
int main()
{
	union Un un;
	un.i = 0x11223344;	//此计算机是小端，低权值位放于低地址处，为44 33 22 11
	un.c = 0x55;		//此计算机是小端，低权值位放于低地址处，55f覆盖小端44的值，为55 33 22 11
	printf("%x\n", un.i);	//取值时，也要考虑小端问题，依照小端取值
	system("pause");
	return 0;
}
