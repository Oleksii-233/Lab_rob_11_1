#include "Array.h"

bool IsNullPtr(const int* arr) {

	if (!arr) {
		cout << "�� ��������� �������� �����." << endl;
		return true;
	}
	else
		return false;

}

int* create(int& c) {

	cout << "����i�� ����i� ������: "; Num(c);

	return new int[c];

}

void inic(int* arr, int c) {
	int ans;

	if (IsNullPtr(arr)) return;
	
	cout << "�����i�� ���� �������� ������ ��������� ����� (0 - ������, i��� �������� - rand): ";
	
	cin >> ans;

	if (!ans)
		for (int i = 0; i < c; i++)
			cin >> *(arr + i);
	else {
		srand(time(nullptr));

		for (int i = 0; i < c; i++)
			*(arr + i) = rand() % 21 - 10;
	}
}

void show(const int* arr, int c) {

	if(IsNullPtr(arr)) return;

	for (int i = 0; i < c; i++)
		cout << arr[i] << " ";

	cout << endl;

}

void clear(int*& arr) {

	if(IsNullPtr(arr)) return;

	delete[] arr;

	arr = nullptr;

}

int min(const int* arr, int c) {

	if(IsNullPtr(arr)) return 0;

	int min = *arr;

	for (int i = 1; i < c; i++)
		if (min > *(arr + i))
			min = *(arr + i);


	return min;
}

int max(const int* arr, int c) {
	
	if(IsNullPtr(arr)) return 0;

	int max = arr[0];

	for (int i = 1; i < c; i++)
		if (max < arr[i])
			max = arr[i];

	return max;

}

int* createNew(const int* arr, int c, int& k) {
	
	if (IsNullPtr(arr)) return nullptr;

	k = 0;

	for (int i = 0; i < c; i++)
		if (*(arr + i) < 0)
			k++;

	if (!k) {
		cout << "�i�'����� �������i� � �����i ����." << endl;
		return nullptr;
	}

	int* arrNew = new int[k];
	k = 0;

	for (int i = 0; i < c; i++)
		if (*(arr + i) < 0)
			*(arrNew + k++) = *(arr + i);

	return arrNew;
	
}

void showNull(const int* arr, int c) {
	
	if(IsNullPtr(arr)) return;
	
	int k = 0;

	for (int i = 0; i < c; i++)
		if (!arr[i])
			k++;

	if (!k) {
		cout << "������i �������� � �����i ������i." << endl;
		return;
	}

	k = 0;
	cout << "I������ �������� �������i�." << endl;
	for(int i = 0; i < c; i++)
		if (!arr[i]) {
			k++;
			cout << k << ". " << i << endl;
		}

}

double average(const int* arr, int c) {
	
	if(IsNullPtr(arr)) return 0;
	
	int s = 0;

	for (int i = 0; i < c; i++)
		s += *(arr + i);

	return double(s) / c;
}

bool devide(int num) {
	return num % 9 == 0;
}

void sumCnt(const int* arr, int c) {

	if(IsNullPtr(arr)) return;

	int k = 0, s = 0;

	for(int i = 0; i < c; i++)
		if (devide(*(arr + i))) {
			k++;
			s += *(arr + i);
		}

	cout << "�i���i��� �������i� ������� ���'���: " << k << ", ���� �������i� ������� ���'���: " << s  << endl;

}

void Num(int& num) {
	do {
		cin >> num;

		if (num <= 0)
			cout << "�� ���������� ����i� ������." << endl;

	} while (num <= 0);
}
