///*
//自己写的第一遍，到后面做不动了，要考虑的情况太多太复杂了
//*/
////#include<iostream>
////#include<string>
////#include<map>
////using namespace std;
////int main(void)
////{
////	string str;
////	cin >> str;
////	bool flag = true;
////	if (str[0] == '-') {
////		flag = false;
////	}
////	map<char, string>P;
////	P['1'] = "yi";
////	P['2'] = "er";
////	P['3'] = "san";
////	P['4'] = "si";
////	P['5'] = "wu";
////	P['6'] = "liu";
////	P['7'] = "qi";
////	P['8'] = "ba";
////	P['9'] = "jiu";
////	string num[10] = { "Ling","Ge","Shi","Bai","Qian","Wan","Shi","Bai","Qian","Yi" };
////	if (flag)
////	{
////		int index = str.size();
////		if (str.size() <= 5)
////		{
////			for (int i = 0; i < str.size(); i++)
////			{
////				if (i != 0)
////				{
////					cout << ' ';
////				}
////				if (str[i] != '0')
////				{
////					cout << P[str[i]] << ' ' << num[index--];
////				}
////				else {
////					cout << "ling";
////				}
////			}
////		}
////		else if (str.size() >= 6 && str.size() <= 8)
////		{
////			bool fg = false;
////			for (int i = 0; i < str.size() - 5; i++)
////			{
////				if (str[i] != '0')
////				{
////					cout << P[str[i]] << ' ' << num[index--];
////				}
////				for (int j = i + 1; j < str.size() - 5; j++)
////				{
////					if (str[j] != '0')
////					{
////						fg = true;
////					}
////				}
////				if (str[i] == '0' && !fg)
////				{
////					cout << "ling";
////					index--;
////				}
////				if (!fg)
////				{
////					break;
////				}
////			}
////			bool flg = false;
////			while (index != str.size() - 5)
////			{
////				index--;
////			}
////			for (int i = str.size() - 5; i < str.size(); i++)
////			{
////				if (str[str.size() - 5] == '0' && !flg)
////				{
////					cout << " Wan";
////					flg = true;
////					index--;
////					continue;
////				}
////				if (flg)
////				{
////					bool f = false;
////					if (str[i] != '0')
////					{
////						cout << P[str[i]] << ' ' << num[index--];
////					}
////					for (int j = i + 1; j < str.size(); j++)
////					{
////						if (str[j] != '0')
////						{
////							f = true;
////							break;
////						}
////					}
////					if (!f)
////					{
////						break;
////					}
////					if (str[i] == '0')
////					{
////						cout << " ling ";
////						index--;
////					}
////				}
////			}
////		}
////		else {//size==9
////			bool fg = false;
////			cout << P[str[0]] << ' ' << num[index--];
////			for (int i = 1; i < str.size() - 5; i++)
////			{
////				if (str[i] != '0')
////				{
////					cout << ' ' << P[str[i]] << ' ' << num[index--];
////				}
////				for (int j = i + 1; j < str.size() - 5; j++)
////				{
////					if (str[j] != '0')
////					{
////						fg = true;
////					}
////				}
////				if (str[i] == '0')
////				{
////					cout << " ling";
////					index--;
////				}
////				if (!fg)
////				{
////					break;
////				}
////			}
////			bool flg = false;
////			for (int i = str.size() - 5; i < str.size(); i++)
////			{
////				if (str[str.size() - 5] == '0' && !flg)
////				{
////					cout << " Wan";
////					flg = true;
////					index--;
////					continue;
////				}
////				else if (str[str.size() - 5] != '0' && !flg)
////				{
////					cout << ' ' << P[str[i]] << ' ' << num[index--];
////					flg = true;
////					continue;
////					index--;
////				}
////				if (flg)
////				{
////					bool f = false;
////					if (str[i] != '0')
////					{
////						if (i == str.size() - 1)
////						{
////							cout << ' ' << P[str[i]];
////						}
////						else {
////							cout << ' ' << P[str[i]] << ' ' << num[index--];
////						}
////					}
////					for (int j = i + 1; j < str.size(); j++)
////					{
////						if (str[j] != '0')
////						{
////							f = true;
////							break;
////						}
////					}
////					if (!f)
////					{
////						break;
////					}
////					if (str[i] == '0')
////					{
////						cout << " ling";
////						index--;
////					}
////				}
////			}
////		}
////	}
////	else {
////		int index = str.size() - 1;
////		cout << "Fu";
////		for (int i = 1; i < str.size(); i++)
////		{
////
////		}
////	}
////	system("pause");
////	return 0;
////}
///*
//参考网友的思路，csdn：https://blog.csdn.net/qq_41562704/article/details/86655676
//他的思路是先分析，分治法，将大问题化成小问题，然后再解决小问题，最后考虑一下大问题和小问题结合时又会出现的一些问题
//总结的非常好，给我的启发很大
//*/
//#include<iostream>
//#include<string>
//#include<map>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//string sum = "", ans;
//string num[11] = { "","yi","er","san","si","wu","liu","qi","ba","jiu","shi" };
//string book[6] = { "","Shi","Bai","Qian","Wan","Yi" };
//void readpart(string temp, int len)//读取字符串输出对应的位数
//{
//	bool flag = false;//flag标识符用来表示是否0串后面有非0数字
//	/*
//	像0001（读一个0），1000（一个不读），1001（读一个0）；也是三种情况，前面的0，中间的0，后边的0。
//	只要0串（注意是0串！！！）的后面还有非0的数，就把该串读一个0
//	*/
//	for (int i = 0; i < len; i++)
//	{
//		if (temp[i] != '0')
//		{
//			if (flag)
//			{
//				sum += "ling ";//若有非零数字，则需要添加“ling ”，注意，所有的添加后面都需要多加一个空格，最后再删去
//			}
//			sum += num[temp[i] - '0'] + ' ';
//			if (i != len - 1)//如果i不为整个字符串的最后一位（最后一位即个位不需要输出单位），则输出对应单位
//			{
//				sum += book[len - 1 - i] + ' ';
//			}
//			flag = false;//flag最后需要归默认值
//		}
//		else {
//			flag = true;
//		}
//	}
//}
//int main(void)
//{
//	cin >> ans;
//	if (ans[0] == '-')
//	{
//		cout << "Fu ";//有负就直接输出
//	}
//	int i = 0;
//	while (ans[i] == '0' || ans[i] == '-')//如果ans的前部分为0或者是-，则删去
//	{
//		ans.erase(ans.begin());
//	}
//	int len = ans.size();
//	if (len >= 9)//len最大9位，所以处理一次就够了
//	{
//		sum += num[ans[i] - '0'] + ' ' + book[5] + ' ';
//		i++;
//	}
//	if (len >= 5)
//	{
//		int temp = min(4, len - 4);//找到这个字符串从万，十万，百万，千万含有的字符串（例如100800的对应字符串位数是2（10））
//		string target = ans.substr(i, temp);//将这一部分字符串分离出来
//		readpart(target, temp);//进行字符串读取输出
//		i += temp;// 处理完这一部分后，i跳到下一部分的开头
//		sum += book[4] + ' ';//别忘了输出“Wan”
//	}
//	if (len >= 1)
//	{
//		/*
//		两个part之间：主要是万的4位与个的四位之间，这里又有三种情况：
//		10001111（在readpart中，该0串没有读，所以需要读一个0）；
//		10000001（在readpart中，前3个0的串没有读，但是后三个0的串需要读一个，所以不需要读）；
//		11110001（在readpart中已读，不需要再读）。我们只需考虑万位后面有0串，个位前面没有0串这一种情况。
//		*/
//		if (len >= 5 && ans[i] != '0'&&ans[i - 1] == '0')//很关键的一步，具体看博客中这一部分：（上面）
//		{//如果len的长度比5大（说明可能万位单位以上可能有0）并且当前千位的数字不是0，且万位数字为0，那么得读一个0（上面的第一种情况）
//			sum += "ling ";
//		}
//		int temp = min(4, len);//同len>=5相似
//		string target = ans.substr(i, temp);
//		readpart(target, temp);
//	}
//	if (len == 0)//如果长度为0，则输出0，对应测试点3
//	{
//		sum += "ling ";
//	}
//	sum.pop_back();//删除多余的空格
//	cout << sum;
//	system("pause");
//	return 0;
//}