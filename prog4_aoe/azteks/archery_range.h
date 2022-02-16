#pragma once

#include "archer.h"
#include "cavalry_archer.h"
#include "hand_cannoneer.h"
#include "../core/archery_range.h"

namespace aoe::azteks {
  /**
   * \brief the azteks archery range.
   */
  class archery_range final : public core::archery_range {
  public:
    /**
     * \brief constructs the azteks archery range.
     */
    explicit archery_range() : core::archery_range("Archery Range (Azteks)") {}
  protected:
    /**
     * \brief returns a pointer to an azteks archer.
     * \return a pointer to an azteks archer
     */
    core::archer* create_archer() override { return new archer; }
    /**
    * \brief returns a pointer to an azteks cavalry archer.
    * \return a pointer to an azteks cavalry archer
    */
    core::cavalry_archer* create_cavalry_archer() override { return new cavalry_archer; }
    /**
    * \brief returns a pointer to an azteks hand cannoneer.
    * \return a pointer to an azteks hand cannoneer
    */
    core::hand_cannoneer* create_hand_cannoneer() override { return new hand_cannoneer; }
  };


}
