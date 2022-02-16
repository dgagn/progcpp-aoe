#pragma once

#include <vector>

#include "archer.h"
#include "building.h"
#include "cavalry_archer.h"
#include "hand_cannoneer.h"

class archery_range : public building {
  std::vector<unit*> units_;
protected:
  virtual archer* create_archer() = 0;
  virtual cavalry_archer* create_cavalry_archer() = 0;
  virtual hand_cannoneer* create_hand_cannoneer() = 0;
public:
  ~archery_range() override;
  unit* create_unit(unit::type type);
};
