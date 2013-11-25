#include "main.h"

int main()
{
	//char *MESH_FILE_NAME = "mesh.dat";
    std::string MESH_FILE_NAME = "mesh.dat";
	std::vector <Vertex> vertexList;
	std::vector <Volume> volumeList;
	std::vector <Edge> edgeList;

    
	read_mesh_info(MESH_FILE_NAME,vertexList,edgeList,volumeList);
    calculateEdgesLength(edgeList);
    calculateEdgesCenters(edgeList);
	return 0;
}
