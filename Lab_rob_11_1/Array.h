#pragma once

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int* create(int &c);

void inic(int* arr, int c);

void show(int* arr, int c);

void clear(int*& arr);

int min(int* arr, int c);

int max( int* arr, int c);

int* createNew(int* arr, int c, int& k);

void showNull(int* arr, int c);

double average(int* arr, int c);

bool devide(int num);

void sumCnt(int* arr, int c);

void clearAll(int* arr0, int* arr1);


#endif // !ARRAY_H

