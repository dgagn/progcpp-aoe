#pragma once

#include "../core/archer.h"

namespace aoe::azteks {
  /**
   * \brief the azteks archer.
   */
  class archer final : public core::archer {
  public:
    /**
     * \brief constructs the azteks archer.
     */
    explicit archer() : core::archer("Archer (Azteks)") {}
  };
}
