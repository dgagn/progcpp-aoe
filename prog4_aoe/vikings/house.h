#pragma once

#include "../core/house.h"

namespace aoe::vikings {
  /**
   * \brief the vikings house.
   */
  class house final : public core::house {
  public:
    /**
     * \brief constructs the vikings house.
     */
    explicit house() : core::house("House (Vikings)") {}
  };
}
