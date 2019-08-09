///*
//思路：设立一个临时的跟原数组等大的数组，然后将临时数组的值确定好后，将原数组构造成跟临时数组一样的数组
//这样保证n>=2时有效
//一开始我以为是单纯的交换，实际上它是将卡片移到指定位置比如从i移动到j，而不是i跟j交换
//*/
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main(void)
//{
//	string arraylist[55] = { "0","S1","S2","S3","S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13",
//	"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
//	"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
//	"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
//	"J1","J2" };
//	string templist[55];
//	int n;
//	cin >> n;
//	int order[55];
//	order[0] = 0;
//	for (int i = 1; i < 55; i++)
//	{
//		cin >> order[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 1; j < 55; j++)
//		{
//			templist[order[j]] = arraylist[j];//因为j的位置的次序数为order[j],所以临时数组的order[j]的位置就是arraylist[j]
//		}
//		for (int m = 0; m < 55; m++)
//		{
//			arraylist[m] = templist[m];
//		}
//	}
//	for (int i = 1; i < 55; i++)
//	{
//		if (i == 1)
//		{
//			cout << templist[i];
//		}
//		else cout << ' ' << templist[i];
//	}
//	system("pause");
//	return 0;
//}