#include "Vertex.h"

Vertex :: Vertex()
{
	x = 0.0;
	y = 0.0;

}

Vertex :: Vertex(double _x,double _y)
{
	x = _x;
	y = _y;

}

Vertex :: ~Vertex()
{
}


double Vertex :: getX()
{
	return x;
}


double Vertex :: getY()
{
	return y;
}


void Vertex :: setX(double _x)
{
	x = _x;
}


void Vertex :: setY(double _y)
{
	y = _y;
}




