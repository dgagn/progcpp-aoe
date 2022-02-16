#include "base.h"

namespace aoe::core {
  base::~base() {
    delete town_center_;
    delete house_;
    delete archery_range_;
  }

  void base::build() {
    town_center_ = create_town_center();
    house_ = create_house();
    archery_range_ = create_archery_range();
  }
}
