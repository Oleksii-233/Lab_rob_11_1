#pragma once

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

bool IsNullPtr(int* arr); // Перевірка на порожній масив;

void Num(int& num); // Гарантує правельне введення розміру масиву

bool devide(int num, int d); // Перевірка на ділення на число d




int* create(int c); // Створення динамічного одновимірного масиву

void inic(int* arr, int c); // Використовується для заповнення динамічного масиву

void show(int* arr, int c); // Використовується для масиву

void clear(int*& arr); // Використовується для видалення одного масиву

void clearAll(int* arr0, int* arr1); // Використовується для повного видалення всіх динамічних масивів.




int min(int* arr, int c); // Використовується для знаходження мінімального значення масиву

int max( int* arr, int c);  // Використовується для знахлдження максимального значення в масивові

double average(int* arr, int c); // Використовується для визначення середнього арифметичного елменентів масиву



int* createNew(int* arr, int c, int& k); // Використовується для створення масиву, що буде містити від'ємні елементи 

int* nullArr(int* arr, int c, int& k); // Використовується для створенн створення новогу масиву, що буде містити порядкові номери від'ємних елементів елементи

int sumCnt(int* arr, int c, int& k); // Використовується для визначення суми і кількості елементів, що діляться націло на 9

#endif 

