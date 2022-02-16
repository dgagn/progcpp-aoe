#pragma once

#include "civilisation.h"

class unit {
protected:
  const std::string name_;
public:
  enum class type {
    archer,
    cavalry_archer,
    hand_cannoneer
  };

  explicit unit(std::string name);
  ~unit();
};
