// Pertemuan Kedua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int bilangan;
	srand(time(0));

	bilangan = rand() % 10;
	cout << "Nilai Awalnya : " << bilangan << endl;

	if (bilangan >= 5)
	{
		bilangan = 2 * bilangan;
	}
	cout << "Nilai Sekarang : " << bilangan;

}
