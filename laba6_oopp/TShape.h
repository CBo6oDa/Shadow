#pragma once
#include<iostream>
struct Points {
	int x;
	int y;
	float d;
};
class TShape{
private:
	float r;
	Points p[30];
public:
	TShape() { 
		r = 0;
	}
	TShape(float r,int n, Points *temp) {
		int i = 0;
		this->r = r;
		while (i < n) {
			this->p[i] = temp[i];
			i++;
		}
	}
	float getR() { return this->r; }
	Points* getStruct() { return this->p; }
	void setR(float);
	void setStruct(Points *);

	virtual int count() = 0;
	virtual void sort() = 0;
};
