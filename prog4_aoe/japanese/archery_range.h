#pragma once

#include "archer.h"
#include "cavalry_archer.h"
#include "hand_cannoneer.h"
#include "../core/archery_range.h"

namespace aoe::japanese {
  /**
   * \brief the japanese archery range.
   */
  class archery_range final : public core::archery_range {
  public:
    /**
     * \brief constructs the japanese archery range.
     */
    explicit archery_range() : core::archery_range("Archery Range (Japanese)") {}
  protected:
    /**
     * \brief returns a pointer to an japanese archer.
     * \return a pointer to an japanese archer
     */
    core::archer* create_archer() override { return new archer; }
    /**
     * \brief returns a pointer to an japanese cavalry archer.
     * \return a pointer to an japanese cavalry archer
     */
    core::cavalry_archer* create_cavalry_archer() override { return new cavalry_archer; }
    /**
     * \brief returns a pointer to an japanese hand cannoneer.
     * \return a pointer to an japanese hand cannoneer
     */
    core::hand_cannoneer* create_hand_cannoneer() override { return new hand_cannoneer; }
  };


}
