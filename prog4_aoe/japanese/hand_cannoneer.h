#pragma once

#include "../core/hand_cannoneer.h"

namespace aoe::japanese {
  /**
   * \brief the japanese hand cannoneer
   */
  class hand_cannoneer final : public core::hand_cannoneer {
  public:
    /**
     * \brief constructs the japanese hand cannoneer
     */
    explicit hand_cannoneer() : core::hand_cannoneer("Hand Cannoneer (Japanese)") {}
  };
}
