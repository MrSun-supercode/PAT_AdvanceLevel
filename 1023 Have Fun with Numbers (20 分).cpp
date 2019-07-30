//#include<iostream>
//#include<string>
//using namespace std;
//int a[10] = { 0 };//从0-9,下标对应每个位上的数字。
//int b[10] = { 0 };
//int main(void)
//{
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.length(); i++) {
//		a[s[i] - '0']++;//统计s所有位在0-9出现数字的次数，存入a数组
//	}
//	int temp;
//	int flag = 0;//flag为进位数
//	string s_temp = "";//新字符串表示原数*2后的数（20多位用longlongint肯定超了）
//	for (int i = s.length() - 1; i >= 0; i--) {
//		temp = s[i] - '0';//从s最低位开始从后往前求，temp表示s在i这一位的数字
//		int sum = 2 * temp + flag;//sum为*2并且加上进位后的数字
//		flag = 0;//重新初始化flag，每经过一次循环都要初始，因为进位从0开始。
//		while (sum >= 10) {//之前写成sum>10，导致234测试点过不去，粗心！
//			sum -= 10;//如果sum比10大，则只保留sum的个位数字，并且将十位数字给flag表示给下一位的进位数
//			flag++;
//		}
//		b[sum]++;//sum即为最后求得数字，在b数组中统计出现的次数。
//		s_temp += sum + '0';//s_temp加上sum
//	}
//	bool flg = false;
//	for (int i = 0; i <= 9; i++) {
//		if (a[i] != b[i]) {//如果次数不一样，输出no，否则是yes
//			flg = true;
//			break;
//		}
//	}
//	if (!flg) {
//		cout << "Yes" << endl;
//	}
//	else cout << "No" << endl;
//	if (flag != 0) {//如果最后flag不为0，表示原数s最高位可能大于等于5，乘2后需要进位，则先输出该进位数，再输出求得的数据s_temp
//		cout << flag;
//	}
//	for (int i = s.length()-1; i >= 0; i--) {//注意，s_temp保存的是s*2计算结果的反，（原因是使用的s_temp+=sum-'0',低位反而变成了高位）
//		cout << s_temp[i];
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}