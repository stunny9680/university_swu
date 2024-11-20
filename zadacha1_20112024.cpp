#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Въведете естествено число N";
	cin >> N;

	if (N <= 0)
	{
		cout << "Числото трябва да е естествено";
		return 1;
	}
	int sum;
	sum = 0;
	int count = 0;
	int temp;
	temp = N;

	do
	{
		sum += temp % 10;
		temp /= 10;
		count++;
	}
	while (temp > 0);
	double average = static_cast<double>(sum) / count;
	cout << "Средно аритметично на цифрите в числото N=" << N << " e:" << average << endl;
	return 0;
}
