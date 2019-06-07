#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void bit_set(unsigned char* p_date,int pos,int flag)
{
	assert(p_date);
	assert(pos >= 1 && pos <= 8);
	if (flag == 1)
	{
		*p_date |= (1 << (pos - 1));
	}
	else if (flag == 0)
	{
		*p_date &= ~(1 << (pos - 1));
	}
}
int main()
{
	unsigned char num = 15;//1111
	bit_set(&num, 3, 0);//1111-->1011-->&1011-->0100È¡·´
	printf("%d\n", num);
	bit_set(&num, 3, 1);//1011-->1111-->|0100
	printf("%d\n", num);
	system("pause");
	return 0;
}