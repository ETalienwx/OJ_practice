#include <iostream>
#include <cstdio>
int main()
{
	long long d[22] = { 0, 0, 1 }; // ����������Ԥ����һ��Ϊ0����������������n
	long long f[22] = { 0, 1, 2 }; // �� ��
	for (int i = 3; i < 22; i++)
	{
		d[i] = (i - 1) * (d[i - 1] + d[i - 2]); //���ŵĵ��ƹ�ʽ
		f[i] = i * f[i - 1]; //�׳˵ĵ��ƹ�ʽ
	} 
	int n;
	while (std::cin >> n)
	{
		printf("%.2f%%\n", 100.0 * d[n] / f[n]); //��100.0���ѽ�������double��������λС��
	} 
	return 0;
}