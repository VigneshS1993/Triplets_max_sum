#include<iostream>
using namespace std;
int main()
{
	int num, A[100], i = 0, j = 0, k = 0,count = 0;
	cout << "Enter the total numbers:";
	cin >> num;
	cout << "Enter the Elements : ";
	for (int i = 0; i < num; i++)
	{
		cin >> A[i];
	}
	int max = A[0];
	for (i = 0; i < num; i++)
	{
		for (j = i+1; j < num; j++)
		{
			for (k = j + 1; k < num; k++)
			{
				cout << "possible pairs are : " << i << " " << j << " " << k << endl;
				++count;
				if (max < A[i] * A[j] * A[k])
				{
					max = A[i] * A[j] * A[k];
				}
				else
				{
					continue;
				}
			}
		}
	}
	cout << "The number of triplets are : " << count << "and max value is :" << max;
	return 0;
}
