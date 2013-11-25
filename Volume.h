#ifndef _VOLUME_H
#define _VOLUME_H
#include "Vertex.h"
#include "Edge.h"
#include <vector>
#include <iostream>
class Vertex;
class Edge;
class Volume
{
public:
	Volume();
	
	std::vector<Edge*> innerEdge;
	int id;
	void addEdge(Edge *);
	int getNumOfInnerEdges();
	double getVolume();
	double getVolumeCenterX();
	double getVolumeCenterY();
	Vertex *getCenter();
private:
    double volume;
    double volumeCenterX;
    double volumeCenterY;
    int i;
    
	
};

#endif