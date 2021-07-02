#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
	int count = 0;
	for (int i = 1; i < arr.size() - 1; i++)
	{
		if (arr[i] > arr[i - 1])
			count++;
	}
	return count;
}
int main()
{
	std::cout << "Hello World!\n";
	int m;
	int k;
	cin >> m;
	vector<vector<int>> v;

		for (int j = 0; j < m; j++)
		{
			cin >> k;
			v[i].push_back(k);
		}
	cout << peakIndexInMountainArray(v);
}