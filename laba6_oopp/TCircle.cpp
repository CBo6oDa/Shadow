#include <iostream>
#include <iomanip>
#include "TCircle.h"
#include "TShape.h"
#include <math.h>
using namespace std;
TCircle::TCircle() : TShape (){
	this->amount = 0;
	this->n = 0;
}

TCircle::TCircle(int r,int n, Points *temp) : TShape (r,n,temp){
	this->n = n;
	this->amount = 0;
}

int TCircle :: count(){
	int i, r;
	Points *temp = this->getStruct();
	r = this->getR();
	for (i = 0;i < this->n;i++) {
		if (temp[i].d <= r) {
			this->amount++;
		}
	}
	return this->amount;
}

void TCircle::sort(){
	int i,j,k,k2;
	float k3;
	Points *temp=this->getStruct();
	for (i=0;i < this->n;i++) {
		for (j = 0;j < this->n;j++) {
			if (temp[i].d < temp[j].d) {
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
		cout << "x: " << temp[i].x << " y: " << temp[i].y << " length =" << setprecision(3) << temp[i].d << endl;
	}
}



