#pragma once

#include "../core/town_center.h"

namespace aoe::azteks {
  /**
   * \brief the azteks town center.
   */
  class town_center final : public core::town_center {
  public:
    /**
     * \brief constructs the azteks town center.
     */
    explicit town_center() : core::town_center("Town Center (Azteks)") {}
  };
}
