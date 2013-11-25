//
//  geometryCalculation.cpp
//  master
//
//  Created by Vladimir Pogrebnyak on 24.11.13.
//  Copyright (c) 2013 Vladimir Pogrebnyak. All rights reserved.
//

#include "geometryCalculation.h"

void calculateEdgesLength(std::vector<Edge> &edgeList)
{
    
    
    for(std::vector <Edge>::iterator iterator = edgeList.begin(); iterator!=edgeList.end();++iterator)
    {
        iterator->calculateLength();
    }
    
}

void calculateEdgesCenters(std::vector<Edge> &edgeList)
{
    
    for(std::vector <Edge>::iterator iterator = edgeList.begin(); iterator!=edgeList.end(); ++iterator)
    {
        iterator->calculateEdgeCenter();
    }
    
    
}