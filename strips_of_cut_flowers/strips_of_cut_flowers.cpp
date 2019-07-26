#include<iostream>
#include<string>
int main()
{
	std::string s, t;
	while (std::cin >> s >> t)
	{
		int res = 0;
		size_t pos = 0;
		//依次在s中查找t即可，直到再也找不到t
		while ((pos = s.find(t, pos)) != std::string::npos)
		{
			pos += t.size(); //跳过t串整体的长度
			++res; //计数
		} 
		std::cout << res << std::endl;
	} 
	return 0;
}