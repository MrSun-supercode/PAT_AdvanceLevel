///*
//�ҵ�˼·��
//����str�ĵ�һ��P��λ�ã�Ȼ�����ҵ�һ��A��λ�ã�Ȼ�������A֮�������T�ĸ���cnt,���ӵ�sum�У�Ȼ��������һ��A��λ�ã�
//������õ�һ��A����һ��A֮���T�ĸ�����Ȼ��sum+=cnt-֮���T�ĸ�����Ȼ���õ�һ��A������������һ��A��������һֱ����һ��A�����ڣ���ͱ�����һ����
//Ȼ��ȡ�ڶ���p,�������ƣ�ֻҪ��str�ĵ�һ���ַ�����ΪP���ɣ�������P,��ȥ��һֱ��P����
//���S����˼·������A��Ȼ����Aǰ������P�ĸ�����A�������T�ĸ�������˼ӵ�sum�У��Դ�����
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
////			str = str.substr(1, str.size() - 1);//ȥ����һ��P
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
////		//��������ַ�����һ����ĸһ����P
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