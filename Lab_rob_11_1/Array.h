#pragma once

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

bool IsNullPtr(int* arr); // �������� �� ������� �����;

void Num(int& num); // ������� ��������� �������� ������ ������

bool devide(int num, int d); // �������� �� ������ �� ����� d




int* create(int c); // ��������� ���������� ������������ ������

void inic(int* arr, int c); // ��������������� ��� ���������� ���������� ������

void show(int* arr, int c); // ��������������� ��� ������

void clear(int*& arr); // ��������������� ��� ��������� ������ ������

void clearAll(int* arr0, int* arr1); // ��������������� ��� ������� ��������� ��� ��������� ������.




int min(int* arr, int c); // ��������������� ��� ����������� ���������� �������� ������

int max( int* arr, int c);  // ��������������� ��� ����������� ������������� �������� � �������

double average(int* arr, int c); // ��������������� ��� ���������� ���������� ������������� ��������� ������



int* createNew(int* arr, int c, int& k); // ��������������� ��� ��������� ������, �� ���� ������ ��'��� �������� 

int* nullArr(int* arr, int c, int& k); // ��������������� ��� �������� ��������� ������ ������, �� ���� ������ �������� ������ ��'����� �������� ��������

int sumCnt(int* arr, int c, int& k); // ��������������� ��� ���������� ���� � ������� ��������, �� ������� ������ �� 9

#endif 

