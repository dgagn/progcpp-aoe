#include "civilisation.h"

civilisation::civilisation(std::string name): name_(std::move(name)) { }

std::string civilisation::name() const { return name_; }
