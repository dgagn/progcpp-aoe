#include "pch.h"
#include "azteks/base.h"
#include "core/base.h"
#include "japanese/base.h"
#include "vikings/base.h"

namespace aoe {
  /**
   * \brief tests the base by adding units to the archery range.
   * \param b the base to test
   */
  void test(const std::shared_ptr<core::base>& b) {
    const core::unit* archer = b->archery_range()->create_unit(core::unit::type::archer);
    const core::unit* cavalry_archer = b->archery_range()->create_unit(core::unit::type::cavalry_archer);
    const core::unit* hand_cannoneer = b->archery_range()->create_unit(core::unit::type::hand_cannoneer);
  }
}

/**
 * \brief returns 0 because there won't be any errors. The main
 * entry point for the application: Age of Empire.
 * \return 0 because there won't be any errors
 */
int main() {
  printf("--- Vikings ---\n");
  aoe::test(std::make_shared<aoe::vikings::base>());
  printf("------\n");

  printf("--- Japanese ---\n");
  aoe::test(std::make_shared<aoe::japanese::base>());
  printf("------\n");

  printf("--- Azteks ---\n");
  aoe::test(std::make_shared<aoe::azteks::base>());
  printf("------\n");

  return 0;
}