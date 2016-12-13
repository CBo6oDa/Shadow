#pragma once
#include "TShape.h"
#include "TSquare.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
TSquare::TSquare() : TShape() {
	this->n = 0;
	this->amount = 0;
}
TSquare::TSquare(float r,int n,Points *temp): TShape(r,n,temp){
	this->n = n;
	this->amount = 0;
}

int TSquare :: count(){
	float d;
	Points *p = this->getStruct();
	d = this->getR();
	d = sqrt(2 * (d / 2 * d / 2));
	for (int i = 0;i < this->n;i++) {
		if (p[i].d <= d) {
			this->amount++;
		}
	}
	return this->amount;
}

void TSquare::sort() {
	int i, j, k, k2;
	float k3;
	Points *temp = this->getStruct();
	for (i = 0;i < this->n;i++) {
		for (j = 0;j < this->n;j++) {
			if (temp[i].x*temp[j].y - temp[j].x*temp[i].y < 0) {
				k = temp[i].x;
				k2 = temp[i].y;
				temp[i].x = temp[j].x;
				temp[i].y = temp[j].y;
				temp[j].x = k;
				temp[j].y = k2;
				k3 = temp[i].d;
				temp[i].d = temp[j].d;
				temp[j].d = k3;
			}
		}
	}
		cout << endl;
		for (i = 0;i < this->n;i++) {
			cout << "x: " << temp[i].x << " y: " << temp[i].y << endl;
		}
}
