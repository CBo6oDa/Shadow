#include "TShape.h"

void TShape::setR(float r)
{
	this->r = r;
}

void TShape::setStruct(Points *temp)
{
	*(this->p) = *temp;
}
