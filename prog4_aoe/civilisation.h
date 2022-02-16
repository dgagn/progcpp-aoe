#pragma once
#include <string>

class civilisation {
  const std::string name_;
public:
  explicit civilisation(std::string name);

  std::string name() const;
};
