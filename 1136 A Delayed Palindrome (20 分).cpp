//#include<iostream>
//#include<string>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//bool isPalind(string str)//�ж��Ƿ��ǻ��������ж�����ת���Ƿ������ȼ���
//{
//	string temp = str;
//	reverse(temp.begin(), temp.end());
//	if (temp == str)
//	{
//		return true;
//	}
//	else return false;
//}
//string add(string str1, string str2)//��Ӻ���������string��ע�����еĹ��̲���ʹ��int����λ���ܴ�ʱ��𰸴���
//{
//	int length = str1.length();
//	int i = length - 1;
//	int temp = 0;
//	string st = "";
//	while (i >= 0)//ģ���������
//	{
//		int n = (str1[i] - '0') + (str2[i] - '0') + temp;
//		temp = 0;
//		while (n >= 10)
//		{
//			n -= 10;
//			temp++;
//		}
//		st.append(to_string(n));//�Ӻ����n
//		i--;
//	}
//	if (temp != 0)
//	{
//		st.append(to_string(temp));//�Ӻ����temp
//	}
//	reverse(st.begin(), st.end());//st�ǰ��ӵ�λ����λ���еģ�����Ҫת�á�
//	return st;
//}
//int main(void)
//{
//	string str;
//	cin >> str;
//	for (int i = 0; i < 10; i++)
//	{
//		if (isPalind(str))//���һ��ʼ�����str���ǻ��ģ���ֱ���������
//		{
//			cout << str << " is a palindromic number." << endl;
//			break;
//		}
//		string temp = str;
//		reverse(temp.begin(), temp.end());
//		string tmp = add(str, temp);
//		cout << str << " + " << temp << " = " << tmp << endl;
//		if (isPalind(tmp))
//		{
//			cout << tmp << " is a palindromic number." << endl;
//			break;
//		}
//		str = tmp;
//		if (i == 9)
//		{
//			cout << "Not found in 10 iterations." << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}