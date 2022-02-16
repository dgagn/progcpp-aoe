#pragma once

#include "archery_range.h"
#include "civilisation.h"
#include "house.h"
#include "town_center.h"

class base {
  town_center* town_center_ = nullptr;
  house* house_ = nullptr;
  archery_range* archery_range_ = nullptr;
  civilisation* civilisation_ = nullptr;
protected:
  virtual civilisation* create_civilisation() = 0;
  virtual town_center* create_town_center() = 0;
  virtual house* create_house() = 0;
  virtual archery_range* create_archery_range() = 0;
  void build();
public:
  base();
  virtual ~base();
  archery_range* archery_range() const;
  civilisation* civilisation() const;
};
