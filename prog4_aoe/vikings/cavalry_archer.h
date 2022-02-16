#pragma once

#include "../core/cavalry_archer.h"

namespace aoe::vikings {
  /**
   * \brief the vikings cavalry archer.
   */
  class cavalry_archer final : public core::cavalry_archer {
  public:
    /**
     * \brief constructs the vikings cavalry archer.
     */
    explicit cavalry_archer() : core::cavalry_archer("Cavalry Archer (Vikings)") {}
  };
}
