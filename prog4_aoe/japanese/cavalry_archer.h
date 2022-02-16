#pragma once

#include "../core/cavalry_archer.h"

namespace aoe::japanese {
  /**
   * \brief the japanese cavalry archer.
   */
  class cavalry_archer final : public core::cavalry_archer {
  public:
    /**
     * \brief constructs the japanese cavalry archer.
     */
    explicit cavalry_archer() : core::cavalry_archer("Cavalry Archer (Japanese)") {}
  };
}
