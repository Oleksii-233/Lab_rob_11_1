#pragma once

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int* create(int &c);

void inic(int* arr, int c);

void show(const int* arr, int c);

void clear(int*& arr);

int min(const int* arr, int c);

int max(const int* arr, int c);

int* createNew(const int* arr, int c, int& k);

void showNull(const int* arr, int c);

double average(const int* arr, int c);

bool devide(int num);

void sumCnt(const int* arr, int c);

void Num(int& num);

#endif // !ARRAY_H

