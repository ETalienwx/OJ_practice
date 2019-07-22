#include <iostream>
#include <vector>
class Solution {
public:
	int getFirstUnFormedNum(std::vector<int> &arr, int length) {
		int sum = 0, min = arr[0];
		int i, j;
		for (int i = 0; i < length; i++)
		{
			sum += arr[i];
			min = arr[i] < min ? arr[i] : min;
		} 
		std::vector<int> dp(sum + 1, 0);
		for (i = 0; i < length; i++){//��length������--��length���׶�
			//{2�� 3�� 5}
			//i=0--d[10]=2 d[9]=2 d[8]=2 d[7]=2...d[2]=2
			//i=1--d[10]=5 d[9]=5...d[5]=5 d[4]=3 d[3]=3
			//i=2--d[10]=10 d[9]=8 d[8]=8 d[7]=7 d[6]=5 d[5]=5
			for (j = sum; j >= arr[i]; j--){
				//�����жϱ����������ܹ����������
				//��������ֻ��2��ʱ�򣬱������ش�2-10�����Է���2����ֵ
				//�������з���2��3��ʱ�򣬱������ش�5-10���Է���5��3-4����3��2ֻ�ܷ���2
				//�������з���2��3��5ʱ����������10����10��8-9����8��7����7��5-6����5...
				//dp[j-arr[i]]��˼�Ǳ�������Ϊjʱ������Ѿ�������arr[i]���������ܷ��õ��������
				if (dp[j] < dp[j - arr[i]] + arr[i])//��ÿ�����ؼ��㵱ǰ����ܷ�������
					dp[j] = dp[j - arr[i]] + arr[i];//���±������ܹ���������ֵ
				else
					dp[j] = dp[j];
			}
		} 
		// ��󵱳���Ϊnʱ�������������Ϊn����Ϊ����󲻿����
		for (i = min; i <= sum; i++)
		{
			if (i != dp[i])
				return i;
		} 
		return sum + 1;
	}
};