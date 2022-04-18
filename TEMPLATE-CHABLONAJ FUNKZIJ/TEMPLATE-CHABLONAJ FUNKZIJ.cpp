
//   написать 3 шаблонные функции сортировки одномерных массивов любого типа
//   способы :
//   -пузырьком
//   - вставками
//   - выбором
//   результаты публикуем на гитхабе!

#include <iostream>
using namespace std;

template <typename T>
void puzir(T* Andr, int size);

template <typename T>
void wstavka(T* Andr, int size);

template <typename T>
void wibor(T* Andr, int size);

template <typename T>
void show(T* Andr, int size);

int main()
{

	double Andr1[10]{ 67.7, 5.4 , 43.2 , 56.7 , 3.3 , 56.0 , 4.4 ,45.5 , 66.6 , 67.8 };
	puzir(Andr1, 10);
	show(Andr1, 10);
	cout << "\n\n";

	int Andr2[10]{ 5.6 , 7, 23 ,99.0 , 33 , 45 , 2 , 5 , 67 ,44.7  };
	wstavka(Andr2, 10);
	show(Andr2, 10);
	cout << "\n\n";

	float Andr3[10]{3.3 , 2.2 , 90.0 , 11.0 , 33.3 , 1.1 , 98.1 , 44.3 ,23.3 , 44.4  };
	wibor(Andr3, 10);
	show(Andr3, 10);
	cout << "\n\n";
}

template <typename T>
void puzir(T* Andr, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - 1 - i; j++)
			if (Andr[j] > Andr[j + 1]) swap(Andr[j], Andr[j + 1]);
}

template <typename T>
void wstavka(T* Andr, int size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j > 0; j--)
		{
			if (Andr[j] < Andr[j - 1]) swap(Andr[j], Andr[j - 1]);
			else break;
		}
}

template <typename T>
void wibor(T* Andr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int x = i;
		for (int j = i + 1; j < size; j++)
			if (Andr[x] > Andr[j]) x = j;
		swap(Andr[x], Andr[i]);
	}
}

template <typename T>
void show(T* Andr, int size)
{
	for (int i = 0; i < size; i++)
		cout << Andr[i] << endl;
}
