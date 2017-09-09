#pragma once
#include "export.h"
#include <string>
#include "../STLStruct/Model.h"

class STLREADWRITE_EXPORT STLReadWrite
{
public:
	STLReadWrite();
	~STLReadWrite();

	Model Read(std::string stlFileName);
};

