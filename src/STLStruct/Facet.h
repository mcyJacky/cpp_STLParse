#pragma once
#include "Vertex.h"
#include "export.h"

class STLSTRUCT_EXPORT Facet
{
public:
	Facet();
	~Facet();
	
	Vertex normal;

	Vertex vertices[3];
};

