#pragma once
#include "TCircle.h"
#include "TShape.h"
#include "TSquare.h"
#include <iostream>


using namespace std;

int main() {
	Points temp[30];
	int n, i=0,r,amount;
	/*do {
		cout << "Amount of points: \n";
		cin >> n;
		cout << "Input radius of a circle: ";
		cin >> r;
	} while (n <= 0||r<=0);

	cout << "Input points :\n";
	while (i < n) {
		cout << "x: ";
		cin >> temp[i].x;
		cout << endl;
		cout << "y: ";
		cin >> temp[i].y;
		cout << endl;
		temp[i].d = sqrt(temp[i].x*temp[i].x + temp[i].y*temp[i].y);
		i++;
	}

	TCircle obj(r,n,temp);
	amount = obj.count();
	cout << amount << " points situated inside the circle\n ";
	obj.sort();*/

	do {
		cout << "Amount of points: \n";
		cin >> n;
		cout << "Input length of a side: ";
		cin >> r;
	} while (n <= 0 || r <= 0);
	cout << "Input points :\n";
	while (i < n) {
		cout << "x: ";
		cin >> temp[i].x;
		cout << endl;
		cout << "y: ";
		cin >> temp[i].y;
		cout << endl;
		temp[i].d = sqrt(temp[i].x*temp[i].x + temp[i].y*temp[i].y);
		i++;
	}
	TSquare ob(r,n,temp);
	amount = ob.count();
	cout << amount << " points situated inside the square\n ";
	ob.sort();
	system("PAUSE");
	return 0;
}