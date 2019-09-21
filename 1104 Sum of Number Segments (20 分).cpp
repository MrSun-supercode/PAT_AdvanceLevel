///*
//自己的思路：两层for循环然后递加sum，输出，但最后两个测试点超时
//大神思路：找规律，然后一遍for循环，具体看csdn的规律表：https://blog.csdn.net/qq_39557517/article/details/82184673
//*/
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	vector<double>V(n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%lf", &V[i]);
//	}
//	double sum = 0.00;
//	for (int i = 0; i < n; i++)
//	{
//		/*double temp = 0.00;
//		for (int j = i; j < n; j++)
//		{
//			temp += V[j];
//			sum += temp;
//		}*/
//		//详情见
//		sum += V[i] * (i + 1)*(n - i);
//	}
//	printf("%.2lf\n", sum);
//	system("pause");
//	return 0;
//}