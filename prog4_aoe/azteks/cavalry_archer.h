#pragma once

#include "../core/cavalry_archer.h"

namespace aoe::azteks {
  /**
   * \brief the azteks cavalry archer.
   */
  class cavalry_archer final : public core::cavalry_archer {
  public:
    /**
     * \brief constructs the azteks cavalry archer.
     */
    explicit cavalry_archer() : core::cavalry_archer("Cavalry Archer (Azteks)") {}
  };
}
