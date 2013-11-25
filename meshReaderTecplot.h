#ifndef _MESHREADERTECPLOT_H
#define _MESHREADERTECPLOT_H
#include <fstream>
#include "Vertex.h"
#include "Volume.h"
#include "Edge.h"
#include <vector>

struct EdgeRecord
{
	size_t p1, p2, v1, v2;
};

void read_mesh_info(std::string file, std::vector<Vertex> &ver,std::vector<Edge> &e,std::vector<Volume> &vol);
void read_coordinates(std::ifstream &in,std::vector<Vertex> &ver,std::vector<Edge> &e,std::vector<Volume> &vol);

#endif