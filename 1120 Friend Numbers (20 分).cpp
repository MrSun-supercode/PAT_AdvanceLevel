#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
set<int>temp;
int returnDigit(int ans);
int main(void)
{
	int n, tmp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		temp.insert(returnDigit(tmp));
	}
	cout << temp.size() << endl;
	for (auto it = temp.begin(); it != temp.end(); it++)
	{
		if (it == temp.begin())
		{
			cout << *it;
		}
		else cout << ' ' << *it;
	}
	system("pause");
	return 0;
}
int returnDigit(int ans)
{
	int sum = 0;
	while (ans != 0)
	{
		sum += ans % 10;
		ans /= 10;
	}
	return sum;
}