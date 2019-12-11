#include "header.h"

int* end(int arr[])
{
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] == NULL)
		{
			return &arr[i];
		}
	}
	return &arr[999];
}

int main()
{
	int student_count = 0;
	int all_pay = 0;
	int n_pay = 0;
	int arr[1000]{ 0 };
	int tmp_pay[1000]{ 0 };
	int exchange=0;

	cin >> student_count;

	for (int i = 0; i < student_count; i++)
	{
		cin >> arr[i];
		all_pay += arr[i];
	}
	sort(arr, end(arr), [] (int a,int b){return a > b; });
	for (int i = 0; i < student_count; i++)
	{
		cout << arr[i] << " ";
	}
	n_pay = all_pay / student_count;
	for (int i = 0; i < student_count; i++)
	{
		tmp_pay[i] = n_pay;
		
	}
	
	all_pay %= student_count;
	for (int i = 0; i < all_pay; i++)
	{
		tmp_pay[i]++;
	}

	for (int i = 0; i < student_count; i++)
	{
		exchange += abs(arr[i]-tmp_pay[i]);
	}
	exchange /= 2;
	cout << "$" << exchange << endl;
}