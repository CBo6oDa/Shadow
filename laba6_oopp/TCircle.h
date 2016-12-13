#pragma once
#include "TShape.h"
class TCircle : public TShape {
protected:
	int amount;
	int n;
public:
	TCircle();
	TCircle(int,int, Points *);
	int count();
	void sort();
};

