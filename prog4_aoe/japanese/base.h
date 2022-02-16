#pragma once

#include "archery_range.h"
#include "house.h"
#include "town_center.h"
#include "../core/base.h"

namespace aoe::japanese {
  /**
   * \brief the base class for the japanese civilisation.
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
    * \brief returns a pointer to an japanese archery range.
    * \return a pointer to an japanese archery range
    */
    core::archery_range* create_archery_range() override { return new japanese::archery_range; }
    /**
    * \brief returns a pointer to an japanese house.
    * \return a pointer to an japanese house
    */
    core::house* create_house() override { return new house; }
    /**
    * \brief returns a pointer to an japanese town center.
    * \return a pointer to an japanese town center
    */
    core::town_center* create_town_center() override { return new town_center; }
  };
}
