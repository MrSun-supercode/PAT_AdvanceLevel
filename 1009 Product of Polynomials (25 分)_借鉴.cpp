////这个题本来是可以昨天交上的但是因为最后三个测试点过不去而没打卡。其实是自己傻了最后第一个输出的是多项式的非零项个数，我输出成了最大项系数的值了。
////我的思路是设置两个double数组分别保存两个输入。然后使用两个for循环来依次进行乘法操作并将结果保存在第三个数组的对应索引的位置，（需要将索引初始化为0.0然后使用+=目的在于索引的因数不一定只有一个）
////最后输出结果即可，最后不需要多余的空格
////然后我借鉴的柳婼大佬的方法比我简单是就保存第一个输入，第二个输入边输入边计算结果放入第三个数组里，大体思路一样，这一步比我少保留第二个输入。
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	int n1, n2, a;
//	cin >> n1;
//	double b;
//	double A1[1001] = { 0.0 };
//	double arr[2001] = { 0.0 };
//	for (int i = 0; i < n1; i++)
//	{
//		cin >> a >> b;
//		A1[a] = b;
//	}
//	cin >> n2;
//	for (int i = 0; i < n2; i++)
//	{
//		cin >> a >> b;
//		for (int j = 0; j < 1001; j++)
//		{
//			arr[j + a] += A1[j] * b;//需要+=因为索引的因数不一定唯一
//		}
//	}
//	bool flag = false;
//	/*for (int i = 2000; i >= 0; i--)
//	{
//		if (arr[i] != 0.0)
//		{
//			if (!flag) {
//				cout << i;
//				printf(" %d %.1lf", i, arr[i]);
//				flag = true;
//			}
//			else  printf(" %d %.1lf", i, arr[i]);
//		}
//	}*/
//	int cnt = 0;
//	for (int i = 2000; i >= 0; i--)
//	{
//		if (arr[i] != 0.0) cnt++;
//	}
//	printf("%d", cnt);    
//	for (int i = 2000; i >= 0; i--)        
//		if (arr[i] != 0.0)            
//			printf(" %d %.1f", i, arr[i]);
//	cout << endl;
//	system("pause");
//	return 0;
//}