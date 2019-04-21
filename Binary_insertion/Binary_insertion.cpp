//要把m的二进制值插入m的第j位到第i位，只需要把n先左移j位，然后再进行或运算（|）即可
class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		//           i  j
		//m:1024：10000000000
		//n:19 ：     10011  //左移两位就在后面补两个零
		return (m << j) | n;
	}
};