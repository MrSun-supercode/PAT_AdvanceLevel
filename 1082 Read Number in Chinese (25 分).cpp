///*
//�Լ�д�ĵ�һ�飬�������������ˣ�Ҫ���ǵ����̫��̫������
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
//�ο����ѵ�˼·��csdn��https://blog.csdn.net/qq_41562704/article/details/86655676
//����˼·���ȷ��������η����������⻯��С���⣬Ȼ���ٽ��С���⣬�����һ�´������С������ʱ�ֻ���ֵ�һЩ����
//�ܽ�ķǳ��ã����ҵ������ܴ�
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
//void readpart(string temp, int len)//��ȡ�ַ��������Ӧ��λ��
//{
//	bool flag = false;//flag��ʶ��������ʾ�Ƿ�0�������з�0����
//	/*
//	��0001����һ��0����1000��һ����������1001����һ��0����Ҳ�����������ǰ���0���м��0����ߵ�0��
//	ֻҪ0����ע����0�����������ĺ��滹�з�0�������ͰѸô���һ��0
//	*/
//	for (int i = 0; i < len; i++)
//	{
//		if (temp[i] != '0')
//		{
//			if (flag)
//			{
//				sum += "ling ";//���з������֣�����Ҫ��ӡ�ling ����ע�⣬���е���Ӻ��涼��Ҫ���һ���ո������ɾȥ
//			}
//			sum += num[temp[i] - '0'] + ' ';
//			if (i != len - 1)//���i��Ϊ�����ַ��������һλ�����һλ����λ����Ҫ�����λ�����������Ӧ��λ
//			{
//				sum += book[len - 1 - i] + ' ';
//			}
//			flag = false;//flag�����Ҫ��Ĭ��ֵ
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
//		cout << "Fu ";//�и���ֱ�����
//	}
//	int i = 0;
//	while (ans[i] == '0' || ans[i] == '-')//���ans��ǰ����Ϊ0������-����ɾȥ
//	{
//		ans.erase(ans.begin());
//	}
//	int len = ans.size();
//	if (len >= 9)//len���9λ�����Դ���һ�ξ͹���
//	{
//		sum += num[ans[i] - '0'] + ' ' + book[5] + ' ';
//		i++;
//	}
//	if (len >= 5)
//	{
//		int temp = min(4, len - 4);//�ҵ�����ַ�������ʮ�򣬰���ǧ���е��ַ���������100800�Ķ�Ӧ�ַ���λ����2��10����
//		string target = ans.substr(i, temp);//����һ�����ַ����������
//		readpart(target, temp);//�����ַ�����ȡ���
//		i += temp;// ��������һ���ֺ�i������һ���ֵĿ�ͷ
//		sum += book[4] + ' ';//�����������Wan��
//	}
//	if (len >= 1)
//	{
//		/*
//		����part֮�䣺��Ҫ�����4λ�������λ֮�䣬�����������������
//		10001111����readpart�У���0��û�ж���������Ҫ��һ��0����
//		10000001����readpart�У�ǰ3��0�Ĵ�û�ж������Ǻ�����0�Ĵ���Ҫ��һ�������Բ���Ҫ������
//		11110001����readpart���Ѷ�������Ҫ�ٶ���������ֻ�迼����λ������0������λǰ��û��0����һ�������
//		*/
//		if (len >= 5 && ans[i] != '0'&&ans[i - 1] == '0')//�ܹؼ���һ�������忴��������һ���֣������棩
//		{//���len�ĳ��ȱ�5��˵��������λ��λ���Ͽ�����0�����ҵ�ǰǧλ�����ֲ���0������λ����Ϊ0����ô�ö�һ��0������ĵ�һ�������
//			sum += "ling ";
//		}
//		int temp = min(4, len);//ͬlen>=5����
//		string target = ans.substr(i, temp);
//		readpart(target, temp);
//	}
//	if (len == 0)//�������Ϊ0�������0����Ӧ���Ե�3
//	{
//		sum += "ling ";
//	}
//	sum.pop_back();//ɾ������Ŀո�
//	cout << sum;
//	system("pause");
//	return 0;
//}