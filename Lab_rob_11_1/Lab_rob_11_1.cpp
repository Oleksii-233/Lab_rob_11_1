#include "Array.h";

int main() {
	setlocale(0, "UKR");
	int* arr = nullptr, * arrN = nullptr, c = 0, k = 0, ans;

	do {
		cout << "Виберiть, що бажаєте зробити:\n0 - створення динамiчного масиву та його iнiцiалiзацiя,\n1  - виведення динамiчного масиву,\n2 - знаходження мiнiмального елементу,\n3 - знаходження максимального елементу,\n4 - знаходження середнього арифметичного значення елементiв,\n5 - створення та виведення нового масиву, який буде мiстити всi вiд'ємнi елементи ранiше створеного,\n6 - сума та кiлькiсть елементiв кратних дев`яти,\n7 - видалення динамiчних маисвiв,\nБудь - яке iнше значення для виходу" << endl;
		cin >> ans;

		switch (ans) {

		case 0: {
			arr = create(c);
			inic(arr, c);
		}break;
		case 1: {
			show(arr, c);
		}break;
		case 2: {
			cout << "Мiнiмальний елемент масиву: " << min(arr, c) << endl;
		}break;
		case 3: {
			cout << "Максимальний елемент масиву: " << max(arr, c) << endl;
		}break;
		case 4: {
			cout << "Середнє арифметичне елементiв масиву: " << average(arr, c) << endl;
		}break;
		case 5: {
			arrN = createNew(arr, c, k);
			if (k != 0)
				show(arrN, k);
		}break;
		case 6: {
			sumCnt(arr, c);
		}
		case 7: {
			if (arr)
				clear(arr);
			if (arrN)
				clear(arrN);
		}break;
		default: return;
		}

	} while (true);

}