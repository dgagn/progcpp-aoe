#pragma once

#include "../core/hand_cannoneer.h"

namespace aoe::azteks {
  /**
   * \brief the azteks hand cannoneer.
   */
  class hand_cannoneer final : public core::hand_cannoneer {
  public:
    /**
     * \brief constructs the azteks hand cannoneer.
     */
    explicit hand_cannoneer() : core::hand_cannoneer("Hand Cannoneer (Azteks)") {}
  };
}
