#ifndef _VERTEX_H
#define _VERTEX_H

class Vertex
{
public:
	Vertex();
	Vertex(double x,double y);
	virtual ~Vertex();
	double getX();
	double getY();
	void setX(double _x);
	void setY(double _y);
	int id;

	
private:
	double x;
	double y;

};

#endif