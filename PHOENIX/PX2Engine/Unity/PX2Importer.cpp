// PX2Importer.cpp

#include "PX2Importer.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
Importer::Importer()
{

}
//----------------------------------------------------------------------------
Importer::~Importer()
{
}
//----------------------------------------------------------------------------
Movable *Importer::GetFrom(const std::string &filename)
{
	PX2_UNUSED(filename);
	return 0;
}
//----------------------------------------------------------------------------