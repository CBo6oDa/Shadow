#pragma once
#include "TShape.h"
class TSquare : public TShape{
	private :
		int amount;
		int n;
	public:
		TSquare();
		TSquare(float,int,Points*);
		void swap(Points*, Points*);
		int count();
		void sort();
};
