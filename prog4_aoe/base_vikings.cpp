#include "base_vikings.h"
#include "archery_range_vikings.h"

base_vikings::base_vikings() {
  this->build();
}

archery_range* base_vikings::create_archery_range() {
  return new archery_range_vikings;
}

house* base_vikings::create_house() {
  return new house_vikings;
}

town_center* base_vikings::create_town_center() {
  return new town_center_vikings();
}

civilisation* base_vikings::create_civilisation() {
  return new ::civilisation("vikings");
}
