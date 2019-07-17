//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	cin >> n;
//	vector <int> v(n);//创建一个大小为n的vector
//	int temp = 0, tempindex = 0, leftindex = 0, rightindex = n - 1, sum = -1;//初始化一些参数，rightindex是vector最后一个数，sum要设置的较小
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//		temp += v[i];//temp就是当前子序列的加和
//		if (temp < 0)
//		{
//			temp = 0;//如果temp比0小，将从tempindex到i的子序列舍弃，因为有负数，对最大值会有影响，但是sum已经记录了这个子序列中是否有子序列存在最大的加和
//			tempindex = i + 1;//tempindex从下一位开始重新进行加和计算
//		}
//		else if (temp > sum)
//		{
//			sum = temp;//更新sum
//			leftindex = tempindex;
//			rightindex = i;
//		}
//	}
//	if (sum<0)
//	{
//		sum = 0;//如果vector全是负数，输出0
//	}
//	cout << sum << ' ' << v[leftindex] << ' ' << v[rightindex] << endl;
//	system("pause");
//	return 0;
//}