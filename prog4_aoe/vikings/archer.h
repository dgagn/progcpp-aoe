#pragma once

#include "../core/archer.h"

namespace aoe::vikings {
  /**
   * \brief the vikings archer.
   */
  class archer final : public core::archer {
  public:
    /**
     * \brief constructs the vikings archer.
     */
    explicit archer() : core::archer("Archer (Vikings)") {}
  };
}
