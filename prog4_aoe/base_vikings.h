#pragma once

#include "base.h"
#include "house_vikings.h"
#include "town_center_vikings.h"

class base_vikings final : public base {
public:
  base_vikings();
protected:
  ::archery_range* create_archery_range() override;
  house* create_house() override;
  town_center* create_town_center() override;
  ::civilisation* create_civilisation() override;
};
