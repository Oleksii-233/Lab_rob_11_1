#include "Array.h"

int main() {
	setlocale(0, "UKR");
	int* arr = nullptr, c = 0,* nArr = nullptr, k_N = 0, ans;

	srand(time(nullptr));

	do {
		cout << "Виберiть, що бажаєте зробити:\n";
		cout << "0 - створення динамiчного масиву та його iнiцiалiзацiя,\n";
		cout << "1 - виведення динамiчного масиву чи масиву вiд'ємних елементiв\n";
		cout << "2 - знаходження мiнiмального елементу,\n";
		cout << "3 - знаходження максимального елементу,\n";
		cout << "4 - знаходження середнього арифметичного значення елементiв,\n";
		cout << "5 - створення нового динамiчного масиву який буде мiстити всi вiд'ємнi елементи ранiше створеного,\n";
		cout << "6 - сума та кiлькiсть елементiв кратних дев`яти,\n";
		cout << "7 - виведення кiлькостi нульових елементiв та їх порядкових номерiв у користувацькому масивовi\n";
		cout << "8 - видалення динамiчних маисвiв,\n";
		cout << "Будь - яке iнше значення для виходу\n";
		cin >> ans;

		switch (ans){

		case 0: {
			cout << "Введiть розмiр масиву: "; Num(c);
			arr = create(c);
			inic(arr, c);
		}break;

		case 1: {
			cout << "Виберiть, який масив хочете вивести: 0 - корисувацький, iнше значення - масив вiд'ємних елементiв: " << endl;
			cin >> ans;

			if (!ans)
				show(arr, c);
			else
				show(nArr, k_N);

		}break;

		case 2: {
			cout << "Мiнiмальний елемент масиву: " << min(arr, c) << endl;
		}break;

		case 3: {
			cout << "Максимальний елемент масиву: " << max(arr, c) << endl;
		}break;

		case 4: {
			cout << setprecision(3) << "Середнє арифметичне елементiв масиву: " << average(arr, c) << endl;
		}break;

		case 5: {
			nArr = createNew(arr, c, k_N);
			if (!nArr)
				cout << "Нульовi елементи вiдсутнi, масив нульових елементiв порожнiй." << endl;
		}break;

		case 6: {
			int k = 0;
			cout << "Сума елементiв кратних дев'яти: " << sumCnt(arr, c, k) << ", кiлькiсть: " << k << endl;
		}break;

		case 7: {
			int* indArr, k = 0;
			indArr = nullArr(arr, c, k);
			cout << "Кiлькiсть нульових елементiв: " << k << endl;
			cout << "Порядковi номери: "; show(indArr, k);;
			clear(indArr);
		}break;

		case 8: {
			clearAll(arr, nArr);
		}break;
		
		default: return 0;

		}
		
		system("pause");

	} while (true);

}