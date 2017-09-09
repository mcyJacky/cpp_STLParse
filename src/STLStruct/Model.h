#pragma once
#include "Facet.h"
#include <vector>
#include "export.h"
#include <string>
class STLSTRUCT_EXPORT Model
{
public:
	Model();
	~Model();

	std::vector<Facet> facets;

	std::string name;
};

