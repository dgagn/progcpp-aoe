#include "base.h"

void base::build() {
  civilisation_ = create_civilisation();
  town_center_ = create_town_center();
  house_ = create_house();
  archery_range_ = create_archery_range();
}

base::base() = default;

base::~base() {
  printf("base destructed, clearing town center, house and archery range\n");
  delete town_center_;
  delete house_;
  delete archery_range_;
  delete civilisation_;
}

archery_range* base::archery_range() const { return archery_range_; }

civilisation* base::civilisation() const { return civilisation_; }
