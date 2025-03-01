#include "Array.h"

bool IsNullPtr(int* arr) {

	if (!arr) {
		return true;
		cout << "Не правильно передано масив." << endl;
	}
	else
		return false;

}

void Num(int& num) {
	do {
		cin >> num;
		if (num <= 0)
			cout << "Неправильни1 розмiр масиву." << endl;
	} while (num <= 0);

}

bool devide(int num, int d) {
	return (num % d == 0 && num != 0);
}



int* create(int c) {
	return new int[c];
}

void inic(int* arr, int c) {
	int ans;

	if (IsNullPtr(arr)) return;
	
	cout << "Виберiть яким способом бажаєте заповнити масив (0 - вручну, iнше значення - rand): ";
	
	cin >> ans;

	if (!ans)
		for (int i = 0; i < c; i++)
			cin >> *(arr + i);
	else 
		for (int i = 0; i < c; i++)
			*(arr + i) = rand() % 21 - 10;	
	
}

void show(int* arr, int c) {

	if(IsNullPtr(arr)) return;

	for (int i = 0; i < c; i++)
		cout << arr[i] << " ";

	cout << endl;

}

void clear(int*& arr) {

	delete[] arr;

	arr = nullptr;

}

void clearAll(int* arr0, int* arr1) {
	if (arr0) {
		clear(arr0);
		cout << "Звiльнено пам'ять iз користувацького масиву." << endl;
	}
	if (arr1) {
		clear(arr1);
		cout << "Звiльнено пам'ять iз масиву вiд'ємних елементiв." << endl;
	}
}



int min(int* arr, int c)	 {

	if(IsNullPtr(arr)) return 0;

	int min = *arr;

	for (int i = 1; i < c; i++)
		if (min > *(arr + i))
			min = *(arr + i);


	return min;
}

int max(int* arr, int c) {
	
	if(IsNullPtr(arr)) return 0;

	int max = arr[0];

	for (int i = 1; i < c; i++)
		if (max < arr[i])
			max = arr[i];

	return max;

}

double average(int* arr, int c) {
	
	if(IsNullPtr(arr)) return 0;
	
	int s = 0;

	for (int i = 0; i < c; i++)
		s += *(arr + i);

	return double(s) / c;
}



int* createNew(int* arr, int c, int& k) {

	if (IsNullPtr(arr))
		return nullptr;

	k = 0;

	for (int i = 0; i < c; i++)
		if (*(arr + i) < 0)
			k++;

	if (!k)
		return nullptr;

	int* newArr = new int[k];
	k = 0;

	for (int i = 0; i < c; i++)
		if (*(arr + i) < 0)
			*(newArr + k++) = *(arr + i);

	return newArr;

}

int* nullArr(int* arr, int c, int& k) {
	if (IsNullPtr(arr)) return nullptr;

	k = 0;

	for (int i = 0; i < c; i++)
		if (!*(arr + i))
			k++;

	if (!k)
		return nullptr;

	int* nullArr = new int[k];
	k = 0;

	for (int i = 0; i < c; i++)
		if (!*(arr + i))
			*(nullArr + k++) = i + 1;

	return nullArr;
}

int sumCnt(int* arr, int c, int&k) {

	k = 0;

	if (IsNullPtr(arr)) return 0;

	int s = 0;

	for(int i = 0; i < c; i++)
		if (devide(arr[i], 9)) {
			s += arr[i];
			k++;
		}

	return s;
}


// Змінено створення масиву індексів нульових елементів
// Сума та кількість
// Головна програма
// Створення масиву від'єних елементів

