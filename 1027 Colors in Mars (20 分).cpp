//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//string temp = "ABC";
//string change(int n);
//int main(void)
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << '#';
//	cout << change(a) << change(b) << change(c) << endl;
//	system("pause");
//	return 0;
//}
//string change(int n)
//{
//	string str = "";
//	while (n!=0)
//	{
//		int t = n % 13;
//		if (t>=10){
//			str += temp[t - 10];//���t>=10����Ҫ���ABC������һ���������ֻ������ּ���
//		}
//		else str += t + '0';
//		n /= 13;
//	}
//	if (str.size()==1) {//��ֹstrֻ��һλ�������ֻ���һλ��Ӧ����һλǰ���0��	
//		str += '0';
//	}
//	if (str.size()==0) {//��ֹ��0���ֵ������ʲôҲ�����	
//		str += "00";
//	}
//	reverse(str.begin(), str.end());//ʹ�����෨����������ʱ�����˷�ת
//	return str;
//}