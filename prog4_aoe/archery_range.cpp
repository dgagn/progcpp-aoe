#include "archery_range.h"

archery_range::~archery_range() {
  printf("clearing all units destructing archery range\n");
  for (const unit* unit : units_)
    delete unit;
  units_.clear();
}

unit* archery_range::create_unit(const unit::type type) {
  switch (type)
  {
  case unit::type::archer: {
    unit* archer = create_archer();
    units_.push_back(archer);
    return archer;
  }
  case unit::type::cavalry_archer: {
    unit* cavalry_archer = create_cavalry_archer();
    units_.push_back(cavalry_archer);
    return cavalry_archer;
  }
  case unit::type::hand_cannoneer: {
    unit* hand_cannoneer = create_hand_cannoneer();
    units_.push_back(hand_cannoneer);
    return hand_cannoneer;
  }
  }
  return nullptr;
}
