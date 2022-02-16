#pragma once

#include "archery_range.h"
#include "house.h"
#include "town_center.h"
#include "../core/base.h"

namespace aoe::vikings {
  /**
   * \brief the base class for the vikings civilisation.
   */
  class base final : public core::base {
  public:
    /**
     * \brief constructs the base by building all the
     * buildings.
     */
    explicit base() { this->build(); }
  protected:
    /**
    * \brief returns a pointer to an vikings archery range.
    * \return a pointer to an vikings archery range
    */
    core::archery_range* create_archery_range() override { return new vikings::archery_range; }
    /**
    * \brief returns a pointer to an vikings house.
    * \return a pointer to an vikings house
    */
    core::house* create_house() override { return new house; }
    /**
    * \brief returns a pointer to an vikings town center.
    * \return a pointer to an vikings town center
    */
    core::town_center* create_town_center() override { return new town_center; }
  };
}
