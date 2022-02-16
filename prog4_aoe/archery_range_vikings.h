#pragma once
#include "archery_range.h"
#include "archer_vikings.h"
#include "cavalry_archer_vikings.h"
#include "hand_cannoneer_vikings.h"

class archery_range_vikings final : public archery_range {
public:
  archery_range_vikings();
protected:
  archer* create_archer() override;
  cavalry_archer* create_cavalry_archer() override;
  hand_cannoneer* create_hand_cannoneer() override;
};
