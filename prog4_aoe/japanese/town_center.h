#pragma once

#include "../core/town_center.h"

namespace aoe::japanese {
  /**
   * \brief the japanese town_center.
   */
  class town_center final : public core::town_center {
  public:
    /**
     * \brief constructs the japanese town_center.
     */
    explicit town_center() : core::town_center("Town Center (Japanese)") {}
  };
}
