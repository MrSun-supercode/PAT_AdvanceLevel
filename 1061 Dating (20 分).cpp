///*
//˼·���ܼ򵥣�������Ϳ�����⣬��һ���ط���Ҫע�⣬��Ϊһ�����ھ�7�죬���Ա�ʾ���ڵ���ĸ��ൽG���жϵ�ʱ�����жϴ�A��Z,Ҫ�жϴ�A��G
//*/
//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//bool isLetter(char c) {
//	if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
//	{
//		return true;
//	}
//	else return false;
//}
//bool isDigitOrLetter(char c) {
//	if (c >= '0'&&c <= '9' || c >= 'A'&&c <= 'N')
//	{
//		return true;
//	}
//	else return false;
//}
//int main(void)
//{
//	string s1, s2, s3, s4;
//	cin >> s1 >> s2 >> s3 >> s4;
//	map<char, string>P;
//	map<char, int>M;
//	P['A'] = "MON";
//	P['B'] = "TUE";
//	P['C'] = "WED";
//	P['D'] = "THU";
//	P['E'] = "FRI";
//	P['F'] = "SAT";
//	P['G'] = "SUN";
//	M['0'] = 0;
//	M['1'] = 1;
//	M['2'] = 2;
//	M['3'] = 3;
//	M['4'] = 4;
//	M['5'] = 5;
//	M['6'] = 6;
//	M['7'] = 7;
//	M['8'] = 8;
//	M['9'] = 9;
//	M['A'] = 10;
//	M['B'] = 11;
//	M['C'] = 12;
//	M['D'] = 13;
//	M['E'] = 14;
//	M['F'] = 15;
//	M['G'] = 16;
//	M['H'] = 17;
//	M['I'] = 18;
//	M['J'] = 19;
//	M['K'] = 20;
//	M['L'] = 21;
//	M['M'] = 22;
//	M['N'] = 23;
//	int index1 = s1.size() > s2.size() ? s2.size() : s1.size();
//	bool flag = false;
//	for (int i = 0; i < index1; i++)
//	{
//		if (s1[i] == s2[i] && flag&&isDigitOrLetter(s1[i]) && isDigitOrLetter(s2[i]))
//		{
//			printf("%02d:", M[s1[i]]);
//			break;
//		}
//		if (s1[i] == s2[i] && !flag&&s1[i] <= 'G'&&s1[i] >= 'A')//��Ϊs1[i]==s2[i]������дһ������
//		{//һ���������죬��ൽG��������д��Z,��Ȼ�����������Ե����
//			cout << P[s1[i]] << ' ';
//			flag = true;
//		}
//	}
//	int index2 = s3.size() > s4.size() ? s4.size() : s3.size();
//	for (int i = 0; i <= index2; i++)
//	{
//		if (s3[i] == s4[i] && isLetter(s3[i]) && isLetter(s4[i]))
//		{
//			printf("%02d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}