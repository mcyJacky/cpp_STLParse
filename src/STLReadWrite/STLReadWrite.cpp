#include "stdafx.h"
#include "STLReadWrite.h"
#include <fstream>

using namespace std;

STLReadWrite::STLReadWrite()
{
}


STLReadWrite::~STLReadWrite()
{
}

Model STLReadWrite::Read(std::string stlFileName)
{
	Model mdl;
	fstream fin(stlFileName.c_str());
	if (!fin.is_open())
		return mdl;

	string ep1, ep2;
	fin >> ep1>>mdl.name;
	while (fin)
	{
		fin >> ep1 >> ep2;
		Vertex normal;
		fin >> normal.point[0] >> normal.point[1] >> normal.point[2];
		Facet facet;
		facet.normal = normal;
		getline(fin,ep1);
		getline(fin, ep1);
		fin >> ep1;
		fin >> facet.vertices[0].point[0] >> facet.vertices[0].point[1] >> facet.vertices[0].point[2];
		getline(fin, ep1);

		fin >> ep1;
		fin >> facet.vertices[1].point[0] >> facet.vertices[1].point[1] >> facet.vertices[1].point[2];
		getline(fin, ep1);

		fin >> ep1;
		fin >> facet.vertices[2].point[0] >> facet.vertices[2].point[1] >> facet.vertices[2].point[2];
		getline(fin, ep1);

		getline(fin, ep1);
		getline(fin, ep1);

		mdl.facets.push_back(facet);
	}
	return mdl;
}

