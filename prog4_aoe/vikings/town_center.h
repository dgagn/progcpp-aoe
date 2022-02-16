#pragma once

#include "../core/town_center.h"

namespace aoe::vikings {
  /**
   * \brief the vikings town center.
   */
  class town_center final : public core::town_center {
  public:
    /**
     * \brief constructs the vikings town center.
     */
    explicit town_center() : core::town_center("Town Center (Vikings)") {}
  };
}
