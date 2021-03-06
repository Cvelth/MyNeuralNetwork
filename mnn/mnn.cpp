#include "mnn.hpp"
#include "mnn/version.hpp"
#include "mnn/exceptions.hpp"
#include "mnn/interfaces/Types.hpp"

#include <string>
#include <sstream>
char const* mnn::get_version() {
	std::ostringstream s;
	s << Version_Major << '.' << Version_Minor << '.' << Version_Patch << '(' << Version_Build << ')';
	return s.str().c_str();
}