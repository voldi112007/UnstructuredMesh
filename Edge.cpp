#include "Edge.h"

Edge :: Edge (Vertex &p0,Vertex &p1)
{
	point_start = &p0;
	point_end = &p1;
    edgeCenter_x = 0.0;
    edgeCenter_y = 0.0;
    length = 0.0;
	//int id;

}


Edge :: ~Edge()
{

}

double Edge:: getCenterX()
{
    return edgeCenter_x;
}

double Edge:: getCenterY()
{
    return edgeCenter_y;
}

double Edge::getLength()
{
    return length;
}

void Edge::calculateLength()
{
     length = sqrt(pow((this->point_end->getX() - this->point_start->getX()), 2.0)+pow((this->point_end->getY() - this->point_start->getY()), 2.0));
    
     //printf("cwd is: %f\n", pow((this->point_end->getX() - this->point_start->getX()), 2.0));
   // printf("cwd is: %f\n", pow((this->point_end->getY() - this->point_start->getY()), 2.0));
    
}

void Edge::calculateEdgeCenter()
{
    this->edgeCenter_x = (this->point_start->getX() + this->point_end->getX())/2.0;
    this->edgeCenter_y = (this->point_start->getY() + this->point_end->getY())/2.0;
    
}

Vertex * Edge :: getCenter()
{
	return (new Vertex (edgeCenter_x,edgeCenter_y));
}