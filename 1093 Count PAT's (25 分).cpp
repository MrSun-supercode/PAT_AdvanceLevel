///*
//我的思路：
//先找str的第一个P的位置，然后再找第一个A的位置，然后找这个A之后的所有T的个数cnt,并加到sum中，然后再找下一个A的位置，
//并且求得第一个A和下一个A之间的T的个数，然后sum+=cnt-之间的T的个数，然后让第一个A的索引等于下一个A的索引，一直到下一个A不存在，这就遍历完一遍了
//然后取第二个p,依次类推，只要让str的第一个字符保持为P即可，若不是P,就去除一直到P出现
//柳婼大神思路：先找A，然后找A前边所有P的个数和A后边所有T的个数再相乘加到sum中，以此类推
//*/
////#include<iostream>
////#include<string>
////using namespace std;
////int main(void)
////{
////	string str;
////	cin >> str;
////	long long int sum = 0;
////	/*cout << str;*/
////	while (true)
////	{
////		int index = 0;
////		if (str[0] == 'P')
////		{
////			str = str.substr(1, str.size() - 1);//去除第一个P
////		}
////		for (int i = 0; i < str.size(); i++)
////		{
////			if (i == 0 && str[i] == 'P')
////			{
////				break;
////			}
////			if (str[i] == 'A' || str[i] == 'T')
////			{
////				index++;
////			}
////			else break;
////		}
////		str = str.substr(index, str.size() - index);
////		if (str.size() <= 2)
////		{
////			break;
////		}
////		//处理过后字符串第一个字母一定是P
////		int A_first = -1;
////		for (int i = 1; i < str.size(); i++)
////		{
////			if (str[i] == 'A')
////			{
////				A_first = i;
////				break;
////			}
////		}
////		while (A_first)
////		{
////			int A_next = -1;
////			for (int i = A_first + 1; i < str.size(); i++)
////			{
////				if (str[i] == 'A')
////				{
////					A_next = i;
////					break;
////				}
////			}
////			int cnt = 0;
////			for (int i = A_first + 1; i < str.size(); i++)
////			{
////				if (str[i] == 'T')
////				{
////					cnt++;
////				}
////			}
////			if (A_next == -1)
////			{
////				sum += cnt;
////				break;
////			}
////			int cnt_betweenTwoA = 0;
////			for (int i = A_first + 1; i < A_next; i++)
////			{
////				if (str[i] == 'T')
////				{
////					cnt_betweenTwoA++;
////				}
////			}
////			sum += cnt + (cnt - cnt_betweenTwoA);
////			A_first = A_next;
////		}
////	}
////	cout << sum % 1000000007;
////	system("pause");
////	return 0;
////}
//#include<iostream>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string str;
//	cin >> str;
//	int cntP = 0, cntT = 0, result = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == 'T')
//		{
//			cntT++;
//		}
//	}
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] == 'P')
//		{
//			cntP++;
//		}
//		if (str[i] == 'T')
//		{
//			cntT--;
//		}
//		if (str[i] == 'A')
//		{
//			result = (result + (cntP*cntT)) % 1000000007;
//		}
//	}
//	cout << result;
//	system("pause");
//	return 0;
//}