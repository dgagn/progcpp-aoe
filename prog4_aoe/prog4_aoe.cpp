#include <iostream>

#include "base.h"
#include "base_vikings.h"


auto test(const std::shared_ptr<base>& b) -> void {
  const unit* archer = b->archery_range()->create_unit(unit::type::archer);
  const unit* cavalry_archer = b->archery_range()->create_unit(unit::type::cavalry_archer);
  const unit* hand_cannoneer = b->archery_range()->create_unit(unit::type::hand_cannoneer);
}

int main() {
  printf("--- vikings ---\n");
  test(std::make_shared<base_vikings>());
  printf("------\n");

  return 0;
}
