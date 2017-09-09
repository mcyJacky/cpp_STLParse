// ComputeCount.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "../STLReadWrite/STLReadWrite.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	STLReadWrite stlRead;
	Model mdl =	stlRead.Read("hammer.stl");
	std::cout <<"num of facets: "<< mdl.facets.size()<<std::endl;
	std::cout << "num of points: " << mdl.facets.size() * 3 << std::endl;
	return 0;
}

