#pragma once

#include "archer.h"
#include "cavalry_archer.h"
#include "hand_cannoneer.h"
#include "../core/archery_range.h"

namespace aoe::vikings {
  /**
   * \brief the vikings archery range.
   */
  class archery_range final : public core::archery_range {
  public:
    /**
     * \brief constructs the vikings archery range.
     */
    explicit archery_range() : core::archery_range("Archery Range (Vikings)") {}
  protected:
    /**
     * \brief returns a pointer to an vikings archer.
     * \return a pointer to an vikings archer
     */
    core::archer* create_archer() override { return new archer; }
    /**
     * \brief returns a pointer to an vikings cavalry_archer.
     * \return a pointer to an vikings cavalry_archer
     */
    core::cavalry_archer* create_cavalry_archer() override { return new cavalry_archer; }
    /**
     * \brief returns a pointer to an vikings hand_cannoneer.
     * \return a pointer to an vikings hand_cannoneer
     */
    core::hand_cannoneer* create_hand_cannoneer() override { return new hand_cannoneer; }
  };


}
