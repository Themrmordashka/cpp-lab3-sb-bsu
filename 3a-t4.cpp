#include<iostream>

int main()
{
	using namespace std;


	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;
	if (k == 0)
	{
		cout << "Your sum is 0 ";
	}
	else
	{
		do {
			cout << "Enter integer nr. " << i << ": ";
			cin >> number;
			sum_k += number; i++;
		} while (i <= k);
		cout << " The total sum of " << k << " integers is: " << sum_k;
	}

	return 0;
}
