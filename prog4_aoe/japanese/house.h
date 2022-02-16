#pragma once

#include "../core/house.h"

namespace aoe::japanese {
  /**
   * \brief the japanese house.
   */
  class house final : public core::house {
  public:
    /**
     * \brief constructs the japanese house.
     */
    explicit house() : core::house("House (Japanese)") {}
  };
}
