///*
//算法：拆分左右数，详情见编程之美136页
//*/
//#include<iostream>
//using namespace std;
//int CountOnes(int n);
//int main(void)
//{
//	int n;
//	cin >> n;
//	cout << CountOnes(n) << endl;
//	system("pause");
//	return 0;
//}
//int CountOnes(int n)
//{
//	int currentnum, lownum, highnum;
//	int factor = 1;
//	int cnt = 0;
//	while (n / factor != 0)
//	{
//		lownum = n - (n / factor)*factor;
//		currentnum = (n / factor) % 10;
//		highnum = n / (factor * 10);
//		switch (currentnum) {
//		case 0:
//			cnt += highnum*factor;
//			break;
//		case 1:
//			cnt += highnum*factor + lownum + 1;
//			break;
//		default:
//			cnt += (highnum + 1)*factor;
//			break;
//		}
//		factor *= 10;
//	}
//	return cnt;
//}