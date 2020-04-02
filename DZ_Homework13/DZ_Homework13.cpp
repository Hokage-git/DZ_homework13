#include <iostream>
#include <ctime>

using namespace std;

void randomise(int arr[], int size) {
	for (int i = 0; i < size; i++)
		arr[i] = 10 + rand() % 50;
}

void show_arr(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';

	cout << endl << endl;
}

void sort(int* arrN, int sizeN)
{
	int tmp = 0;
	for (int i = 0; i < sizeN; ++i) {
		for (int j = i + 1; j < sizeN; ++j) {
			if (arrN[j] < arrN[i]) {
				tmp = arrN[j];
				arrN[j] = arrN[i];
				arrN[i] = tmp;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	//Задание 1

	/*Используя два указателя на массив целых чисел, скопировать один массив в другой.
	Использовать в программе арифметику указателей для продвижения по массиву, а также
	оператор разыменования.*/

	/*const int size = 5;

	int arr1[size];
	int arr2[size];

	for (int i = 0; i < size; i++)
		arr1[i] = 10 + rand() % 50;

	int* ptr_arr1 = arr1;
	int* ptr_arr2 = arr2;

	for (int i = 0; i < size; i++) {
		ptr_arr2 = ptr_arr1;

		cout << *ptr_arr2 << " ";

		ptr_arr1++;
		ptr_arr2++;
	}*/

	//Задание 2

	/*Используя указатель на массив целых чисел, изменить порядок следования элементов массива
	на противоположный.
	Использовать в программе арифметику указателей для продвижения по массиву, а также
	оператор разыменования.*/

	/*int size = 5;
	int arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = 1 + rand() % 9;
		cout << arr[i] << " ";
	}
	cout<<endl<<endl;
	int* ptr_arr = arr+size-1;	

	for (int i = size; i > 0; i--) {
		cout << *ptr_arr-- << " ";
	}*/

	//Задание 3

	/*Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы
	во втором массиве элементы находились в обратном порядке.
	Использовать в программе арифметику указателей для продвижения по массиву, а также
	оператор разыменования.*/

	/*const int size = 5;

	int arr1[size];
	int arr2[size];

	for (int i = 0; i < size; i++) {
		arr1[i] = 10 + rand() % 50;
		cout << arr1[i] << " ";
	}
	cout << endl;
	int* ptr_arr1 = arr1;
	int* ptr_arr2 = arr2;

	for (int i = size; i > 0; i--) {
		*ptr_arr2 = *(ptr_arr1+size-1);

		cout << *ptr_arr2 << " ";

		ptr_arr1--;
		ptr_arr2++;
	}*/

	//Задание 4

	/*Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры). Необходимо создать третий
	массив минимально возможного размера, в котором нужно собрать элементы массива A,
	которые не включаются в массив B, без повторений.*/

	/*int sizeA, sizeB;
	cout << "Введите размер первого массива: ";
	cin >> sizeA;
	cout << "Введите размер второго массива: ";
	cin >> sizeB;
	int* arrA = new int[sizeA];
	int* arrB = new int[sizeB];

	cout << "\n\nПервый массив: ";
	randomise(arrA, sizeA);
	show_arr(arrA, sizeA);
	cout << "\n\nВторой массив: ";
	randomise(arrB, sizeB);
	show_arr(arrB, sizeB);

	sort(arrA, sizeA);
	sort(arrB, sizeB);

	cout << "\n\nПервый массив (Отсортированный): ";
	for (int i = 0; i < sizeA; i++) {
		cout << arrA[i] << " ";
	}
	cout << "\n\nВторой массив (Отсортированный): ";
	for (int i = 0; i < sizeB; i++) {
		cout << arrB[i] << " ";
	}

	int* arrC = new int[sizeA < sizeB ? sizeA : sizeB];

	int sizeC = 0;

	for (int i = 0, j = 0; i < sizeA && j < sizeB;) {
		if (arrA[i] == arrB[j]) {
			++i;
		}
		else if (arrA[i] == arrB[j]) {
			++j;
		}
		else {
			arrC[sizeC] = arrA[j];
			sizeC++;
			i++;
			j++;
		}
	}

	cout << "\n\nТретий массив: ";
	for (int i = 0; i < sizeC; i++) {
		cout << arrC[i] << " ";
	}

	delete[] arrA;
	delete[] arrB;
	delete[] arrC;*/

	//Задание 5

	/*Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).Необходимо создать третий
	массив минимально возможного размера, в котором нужно собрать элементы массивов A и B,
	которые не являются общими для них, без повторений.*/

	int sizeA, sizeB;
	cout << "Введите размер первого массива: ";
	cin >> sizeA;
	cout << "Введите размер второго массива: ";
	cin >> sizeB;
	int* arrA = new int[sizeA];
	int* arrB = new int[sizeB];

	cout << "\n\nПервый массив: ";
	randomise(arrA, sizeA);
	show_arr(arrA, sizeA);
	cout << "\n\nВторой массив: ";
	randomise(arrB, sizeB);
	show_arr(arrB, sizeB);

	sort(arrA, sizeA);
	sort(arrB, sizeB);

	cout << "\n\nПервый массив (Отсортированный): ";
	for (int i = 0; i < sizeA; i++) {
		cout << arrA[i] << " ";
	}
	cout << "\n\nВторой массив (Отсортированный): ";
	for (int i = 0; i < sizeB; i++) {
		cout << arrB[i] << " ";
	}

	int* arrC = new int[sizeA < sizeB ? sizeA : sizeB];

	int sizeC = 0;

	for (int i = 0, j = 0; i < sizeA && j < sizeB;) {
		if (arrA[i] == arrB[j]) {
			++i;
		}
		else if (arrA[i] == arrB[j]) {
			++j;
		}
		else {
			arrC[sizeC] = arrA[j];
			sizeC++;
			arrC[sizeC] = arrB[j];
			sizeC++;
			i++;
			j++;
		}
	}

	cout << "\n\nТретий массив: ";
	for (int i = 0; i < sizeC; i++) {
		cout << arrC[i] << " ";
	}

	delete[] arrA;
	delete[] arrB;
	delete[] arrC;

}