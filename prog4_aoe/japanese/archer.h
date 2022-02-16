#pragma once

#include "../core/archer.h"

namespace aoe::japanese {
  /**
   * \brief the japanese archer.
   */
  class archer final : public core::archer {
  public:
    /**
     * \brief constructs the japanese archer.
     */
    explicit archer() : core::archer("Archer (Japanese)") {}
  };
}
