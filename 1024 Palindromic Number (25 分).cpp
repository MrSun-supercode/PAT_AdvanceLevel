//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//bool is_Palindromic(string n);
//string repeated(string n);
//int main(void)
//{
//	string n;
//	int k;
//	cin >> n >> k;
//	int cnt = 0;
//	while (cnt <= k)
//	{
//		if (is_Palindromic(n)) {//���n�ǻ�������ֱ�����
//			cout << n << endl;
//			cout << cnt;
//			break;
//		}
//		cnt++;//˳�����Ҫ,������֮ǰ����Ϊ֮ǰ�����cnt���´���Ҳ������������Ļ������if�жϲ�������
//		if (cnt <= k) {//������cnt<=kʱ�Ŷ�n����repeated����Ȼ���cnt>k����µ�n���repeatedһ��
//			n = repeated(n);
//		}
//	}
//	if (cnt > k) {
//		cout << n << endl;
//		cout << k;
//	}
//	system("pause");
//	return 0;
//}
//bool is_Palindromic(string n)//֮ǰ���Ե�135��ͨ������Ϊ��������������⣬������forѭ��Ȼ��ǰ���������ȶ��жϣ�ֱ����reverse�жϸ���Ҳ�����״�
//{
//	string temp = n;//ֱ�ӽ�temp��ֵΪn����reverse���ж�temp�Ƿ��n���
//	reverse(temp.begin(), temp.end());
//	if (temp == n) {
//		return true;
//	}
//	else return false;
//}
//string repeated(string n)//ֱ��ʹ�ô����ӷ�
//{
//	string temp = n;
//	reverse(temp.begin(), temp.end());//temp��nһ����λ��
//	int flag = 0;//��λ��
//	string str = "";//Ŀ���ַ���
//	for (int i = 0; i < n.length(); i++)
//	{
//		int a = n[i] - '0';
//		int b = temp[i] - '0';
//		int sum = a + b + flag;
//		flag = 0;
//		while (sum >= 10) {//sum������λ��flag����ʮλ
//			sum -= 10;
//			flag++;
//		}
//		str += sum + '0';
//	}
//	reverse(str.begin(), str.end());
//	if (flag > 0) {//���flag>0����ʾ���н�λ���������Ҫ���Ͻ�λ
//		return to_string(flag) + str;
//	}
//	else return str;
//}