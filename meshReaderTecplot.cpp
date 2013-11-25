#include "meshReaderTecplot.h"

void read_mesh_info(std::string meshFileName, std::vector<Vertex> &vertexList,std::vector<Edge> &edgeList,std::vector<Volume> &volumeList)
{
	std::ifstream in (meshFileName);
	if (!in)
	{
		std::cout<<"File not found!"<<std::endl;
		return;
	}
	read_coordinates(in,vertexList,edgeList,volumeList);
	in.close();
}

void read_coordinates(std::ifstream &in,std::vector<Vertex> &vertexList,std::vector<Edge> &edgeList,std::vector<Volume> &volumeList)
{
	int nodesNumber = 0;
	int edgeNumber = 0;
	int i = 0;
	int num1;
	in>>nodesNumber>>edgeNumber;
	double x_temp,y_temp;

	while(i<nodesNumber)
	{
		in>>x_temp;
		in>>y_temp;
		vertexList.push_back(*(new Vertex(x_temp,y_temp)));
		vertexList[i].id = i;
		
		i++;
	}

	EdgeRecord* records = new EdgeRecord[edgeNumber];

	size_t volumeCount = 0;
	
	for(i = 0; i < edgeNumber/* && !in != eof*/; i++)
	{
		in >> std::hex >> num1 >> records[i].p1 >> records[i].p2 >> records[i].v1 >> records[i].v2;
		if(volumeCount < records[i].v1) volumeCount = records[i].v1;
		if(volumeCount < records[i].v2) volumeCount = records[i].v2;
	}

	volumeList.resize(volumeCount);
	edgeList.resize(edgeNumber);
	
	for(i = 0; i < edgeNumber; i++)
	{
		edgeList[i].point_start = &vertexList[records[i].p1-1];
		edgeList[i].point_end = &vertexList[records[i].p2-1];

		edgeList[i].id = i;
		edgeList[i].idVolume[0] = records[i].v1-1;
		edgeList[i].idVolume[1] = records[i].v2-1;

        if(records[i].v1 == 0)
        {    
			if (records[i].v2 != 0)
			{
				 volumeList[records[i].v2-1].id = records[i].v2-1;
           		 volumeList[records[i].v2-1].addEdge(&edgeList[i]);
			}
        }
		else
		{
			 volumeList[records[i].v1-1].id = records[i].v1-1;
			 volumeList[records[i].v2-1].id = records[i].v2-1;
			 
			 volumeList[records[i].v1-1].addEdge(&edgeList[i]);
			 volumeList[records[i].v2-1].addEdge(&edgeList[i]);
           
		}
	
		
	}
	

   
	




}
