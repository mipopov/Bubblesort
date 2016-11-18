#include <iostream>

void bubblesort(double *a, int size);

int main()
{
	int n;
	std::cin >> n;
	double *a = new double[n];
	for (int i = 0; i < n; ++i)
		std::cin >> a[i];
	system("pause");
	return 0;
}
void bubblesort(double *a, int size)
{
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
		{
			if (abs(a[i]) > abs(a[j]))
			{
				double t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
}