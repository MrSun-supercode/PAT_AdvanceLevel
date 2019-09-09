//#include<iostream>
//#include<string>
//#include<cctype>
//using namespace std;
//int main(void)
//{
//	string type_in, type_out;
//	getline(cin, type_in);
//	getline(cin, type_out);
//	int front = 0, back = 0;
//	string ans = "";//注意这里不可以使用set集合，因为集合会自动排好位置，比如测试点1的7TI会输出7IT；
//	/*
//	一样两者都加1，不一样的话输出type_in对应的字符,只front加1
//	*/
//	while (front < type_in.size())//保证输入结束了（不需要保证back<type_out.size()，因为我们是用front对应的，万一back走到头了front不一定走到头，front走到头back一定走到头）
//	{
//		if (type_in[front] == type_out[back])//若两个字符串的当前位置一样，则同步更新下标值
//		{
//			front++;
//			back++;
//		}
//		else {//如果不一样，一定是front的值没有打印出来造成的，所以ans加入type_in[front]，别忘front++
//			if (type_in[front] <= 'z'&&type_in[front] >= 'a')
//			{
//				type_in[front] = toupper(type_in[front]);//变为大写
//			}
//			if (ans.find(type_in[front]) == string::npos)//如果ans中不存在type_in[front]再加入，否则输出会有重复单词
//			{
//				ans += type_in[front++];
//			}
//			else front++;//如果ans中存在type_in[front]，别忘了front++
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}