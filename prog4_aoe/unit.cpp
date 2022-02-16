#include "unit.h"

unit::unit(std::string name): name_(std::move(name)) {}

unit::~unit() { printf("destructed %s \n", name_.c_str()); }
