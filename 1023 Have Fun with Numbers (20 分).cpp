//#include<iostream>
//#include<string>
//using namespace std;
//int a[10] = { 0 };//��0-9,�±��Ӧÿ��λ�ϵ����֡�
//int b[10] = { 0 };
//int main(void)
//{
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.length(); i++) {
//		a[s[i] - '0']++;//ͳ��s����λ��0-9�������ֵĴ���������a����
//	}
//	int temp;
//	int flag = 0;//flagΪ��λ��
//	string s_temp = "";//���ַ�����ʾԭ��*2�������20��λ��longlongint�϶����ˣ�
//	for (int i = s.length() - 1; i >= 0; i--) {
//		temp = s[i] - '0';//��s���λ��ʼ�Ӻ���ǰ��temp��ʾs��i��һλ������
//		int sum = 2 * temp + flag;//sumΪ*2���Ҽ��Ͻ�λ�������
//		flag = 0;//���³�ʼ��flag��ÿ����һ��ѭ����Ҫ��ʼ����Ϊ��λ��0��ʼ��
//		while (sum >= 10) {//֮ǰд��sum>10������234���Ե����ȥ�����ģ�
//			sum -= 10;//���sum��10����ֻ����sum�ĸ�λ���֣����ҽ�ʮλ���ָ�flag��ʾ����һλ�Ľ�λ��
//			flag++;
//		}
//		b[sum]++;//sum��Ϊ���������֣���b������ͳ�Ƴ��ֵĴ�����
//		s_temp += sum + '0';//s_temp����sum
//	}
//	bool flg = false;
//	for (int i = 0; i <= 9; i++) {
//		if (a[i] != b[i]) {//���������һ�������no��������yes
//			flg = true;
//			break;
//		}
//	}
//	if (!flg) {
//		cout << "Yes" << endl;
//	}
//	else cout << "No" << endl;
//	if (flag != 0) {//������flag��Ϊ0����ʾԭ��s���λ���ܴ��ڵ���5����2����Ҫ��λ����������ý�λ�����������õ�����s_temp
//		cout << flag;
//	}
//	for (int i = s.length()-1; i >= 0; i--) {//ע�⣬s_temp�������s*2�������ķ�����ԭ����ʹ�õ�s_temp+=sum-'0',��λ��������˸�λ��
//		cout << s_temp[i];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}