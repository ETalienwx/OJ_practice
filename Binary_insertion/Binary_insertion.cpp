//Ҫ��m�Ķ�����ֵ����m�ĵ�jλ����iλ��ֻ��Ҫ��n������jλ��Ȼ���ٽ��л����㣨|������
class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		//           i  j
		//m:1024��10000000000
		//n:19 ��     10011  //������λ���ں��油������
		return (m << j) | n;
	}
};