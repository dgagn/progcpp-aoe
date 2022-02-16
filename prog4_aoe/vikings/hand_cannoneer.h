#pragma once

#include "../core/hand_cannoneer.h"

namespace aoe::vikings {
  /**
   * \brief the vikings hand cannoneer.
   */
  class hand_cannoneer final : public core::hand_cannoneer {
  public:
    /**
     * \brief constructs the vikings hand cannoneer.
     */
    explicit hand_cannoneer() : core::hand_cannoneer("Hand Cannoneer (Vikings)") {}
  };
}
