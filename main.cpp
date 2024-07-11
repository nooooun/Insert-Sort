#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void sort(int* mas, int n)
{
	int nada, i;
	for (int j = 1; j < n; j++)
	{
		nada = mas[j];
		i = j - 1;
		while (i >= 0 && mas[i] > nada)
		{
			mas[i + 1] = mas[i];
            i = i - 1;
        }
		mas[i + 1] = nada;
    }
}

int main()
{
	srand(time(NULL));
	int n;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 20;
		cout << mas[i] << " ";
	}
	cout << endl;
	sort(mas, n);
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	delete[]mas;
	return 0;
}
