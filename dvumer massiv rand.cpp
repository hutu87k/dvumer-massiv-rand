
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));

	const int STROK = 5;
	const int KOLL = 7;
	int arr[STROK][KOLL];

	for (int i = 0; i < STROK; ++i)
	{
		for (int j = 0; j < KOLL; ++j)
		{
			arr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < STROK; ++i) {
		for (int j = 0; j < KOLL; ++j)
		{
			cout << arr[i][j]<<"\t";

		}
		cout << endl;
	}



	return 0;
}

