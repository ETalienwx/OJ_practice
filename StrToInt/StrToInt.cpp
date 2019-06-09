#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
enum State
{
	VALID,
	INVALID
};
enum State state = INVALID;//初始化状态值

int my_atoi(const char* str)
{
	//考虑的太少了
	//assert(str);
	//int ret = 0;
	//while (*str != '\0')
	//{
	//	ret = ret * 10 + *str - '0';
	//	++str;
	//}
	//return ret;

	long long ret = 0;//定义为long long是为了考虑越界情况
	int flag = 1;
	//空指针
	assert(str);
	//空字符串
	if (*str == '\0')
		return 0;
	//过滤空白字符
	while (isspace(*str))
	{
		str++;
	}
	//正负号
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		str++;
		flag = -1;
	}
	while (*str != '\0')
	{
		if (isdigit(*str))//如果是数字字符
		{
			ret = ret * 10 + flag * (*str - '0');//保证源头是正负数
			if (ret > INT_MAX || ret < INT_MIN)//溢出情况
			{
				return 0;
			}
		}
		else
		{
			state = VALID;
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}
int main()
{
	char *p = "    -acs1111";
	int ret = my_atoi(p);
	if (state==VALID)
	    printf("%d\n", ret);
	system("pause");
	return 0;
}