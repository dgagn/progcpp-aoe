#pragma once

#include "../core/house.h"

namespace aoe::azteks {
  /**
   * \brief the azteks house.
   */
  class house final : public core::house {
  public:
    /**
     * \brief constructs the azteks house.
     */
    explicit house() : core::house("House (Azteks)") {}
  };
}
