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
enum State state = INVALID;//��ʼ��״ֵ̬

int my_atoi(const char* str)
{
	//���ǵ�̫����
	//assert(str);
	//int ret = 0;
	//while (*str != '\0')
	//{
	//	ret = ret * 10 + *str - '0';
	//	++str;
	//}
	//return ret;

	long long ret = 0;//����Ϊlong long��Ϊ�˿���Խ�����
	int flag = 1;
	//��ָ��
	assert(str);
	//���ַ���
	if (*str == '\0')
		return 0;
	//���˿հ��ַ�
	while (isspace(*str))
	{
		str++;
	}
	//������
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
		if (isdigit(*str))//����������ַ�
		{
			ret = ret * 10 + flag * (*str - '0');//��֤Դͷ��������
			if (ret > INT_MAX || ret < INT_MIN)//������
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