#include "Volume.h"


Volume :: Volume()
{
	id = 0;
    volume = 0.0;
    volumeCenterX = 0.0;
    volumeCenterY = 0.0;
    i = 0;
}

void Volume :: addEdge(Edge *p)
{
	innerEdge.push_back(p);
	i++;
}

int Volume :: getNumOfInnerEdges()
{
	return i;
}

double Volume :: getVolume()
{
	return volume;
}

double Volume :: getVolumeCenterX()
{
	return volumeCenterX;
}

double Volume :: getVolumeCenterY()
{
	return volumeCenterY;
}

Vertex * Volume :: getCenter()
{
	return (new Vertex(volumeCenterX,volumeCenterY));
}