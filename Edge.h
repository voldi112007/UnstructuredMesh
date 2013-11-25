#ifndef _EDGE_H
#define _EDGE_H
#include "Vertex.h"
#include <math.h>
#include <vector>
class Vertex;
class Volume;
class Edge
{
public :
	Edge(){};
	Edge(Vertex &, Vertex &);
	~Edge();
	Vertex *point_start;
	Vertex *point_end;
    int idVolume[2];
	int id;
	
    //geometry calculation
    void calculateEdgeCenter();
    double getCenterX();
    double getCenterY();
    double getLength();
	Vertex * getCenter();
    void calculateLength();
private:
    double edgeCenter_x;
    double edgeCenter_y;
    double length;
};
#endif
