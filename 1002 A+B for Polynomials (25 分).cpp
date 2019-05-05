///*
//1002 A+B for Polynomials (25 分)
//This time, you are supposed to find A+B where A and B are two polynomials.
//
//Input Specification:
//Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:
//
//K N
//​1
//​​  a
//​N
//​1
//​​
//​​  N
//​2
//​​  a
//​N
//​2
//​​
//​​  ... N
//​K
//​​  a
//​N
//​K
//​​
//​​
//
//where K is the number of nonzero terms in the polynomial, N
//​i
//​​  and a
//​N
//​i
//​​
//​​  (i=1,2,⋯,K) are the exponents and coefficients, respectively. It is given that 1≤K≤10，0≤N
//​K
//​​ <⋯<N
//​2
//​​ <N
//​1
//​​ ≤1000.
//
//Output Specification:
//For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.
//
//Sample Input:
//2 1 2.4 0 3.2
//2 2 1.5 1 0.5
//Sample Output:
//3 2 1.5 1 2.9 0 3.2
//链接：https://pintia.cn/problem-sets/994805342720868352/problems/994805526272000000
//*/
///*
//思路：就创建一个double类型的数组，然后将下标对应的值加入到对应索引的数组内，然后输出数组内
//有效的数值的个数以及反向遍历数组即可。
//注意最后要输出保留小数点后一位有效数字，一开始都没有注意。导致错了很多测试点
//*/
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	double arraylist[2002] = { 0.00 };
//	int maxindex = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		int temp;
//		cin >> temp;
//		for (int j = 0; j < temp; j++)
//		{
//			int index;
//			double goal;
//			cin >> index >> goal;
//			arraylist[index] += goal;
//			if (index > maxindex)
//			{
//				maxindex = index;
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i <= maxindex; i++)
//	{
//		if (arraylist[i] != 0)
//		{
//			sum++;
//		}
//	}
//	cout << sum;
//	for (int i = maxindex; i >= 0; i--)
//	{
//		if (arraylist[i] != 0)
//		{
//			cout << ' ' << i << ' ';
//			printf("%.1f", arraylist[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}