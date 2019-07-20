//#include<iostream>
//#include<vector>
//using namespace std;
//int main(void)
//{
//	int list_A, list_B;
//	double list_a[1001];
//	double list_b[1001];
//	fill(list_a, list_a + 1001, 0.0);
//	fill(list_b, list_b + 1001, 0.0);
//	cin >> list_A;
//	int final_a, final_b;
//	for (int i = 0; i < list_A; i++)
//	{
//		int exponent;
//		double coefficient;
//		cin >> exponent >> coefficient;
//		if (i == 0)
//		{
//			final_a = exponent;
//		}
//		list_a[exponent] = coefficient;
//	}
//	cin >> list_B;
//	for (int i = 0; i < list_B; i++)
//	{
//		int exponent;
//		double coefficient;
//		cin >> exponent >> coefficient;
//		if (i == 0)
//		{
//			final_b = exponent;
//		}
//		list_b[exponent] = coefficient;
//	}
//	double list_c[2001];
//	fill(list_c, list_c + 2001, 0.0);
//	for (int i = final_a; i >= 0; i--)
//	{
//		for (int j = final_b; j >= 0; j--)
//		{
//			list_c[i + j] += list_a[i] * list_b[j];
//		}
//	}
//	/*for (int i = 0; i < 1001; i++)
//	{
//		for (int j = 0; j < 1001; j++)
//		{
//			list_c[i + j] += list_a[i] * list_b[j];
//		}
//	}*/
//	int cnt = 0;
//	for (int i = 2000; i >= 0; i--)
//	{
//		if (list_c[i] != 0.0)
//		{
//			cnt++;
//		}
//	}
//	cout << cnt;
//	for (int i = 2000; i >= 0; i--)
//	{
//		if (list_c[i] != 0.0)
//		{			
//			printf(" %d %.1lf", i, list_c[i]);			
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}