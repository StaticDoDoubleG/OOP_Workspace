#include "triangleError.h"
// Definition of Constructor
TriangleError::TriangleError(int err)
	:errorType(err), invalid_argument("")
{
}
// Definition of message function
string TriangleError::message()
{
	if (errorType == 1)
	{
		return "Error!. One of the sides is negative! \n";
	}
	else
	{
		return "Error. The given sides do not define a triangle. \n";
	}
}