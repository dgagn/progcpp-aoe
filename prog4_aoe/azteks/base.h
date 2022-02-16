#pragma once

#include "archery_range.h"
#include "house.h"
#include "town_center.h"
#include "../core/base.h"

namespace aoe::azteks {
  /**
   * \brief the base class for the azteks civilisation.
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
    * \brief returns a pointer to an azteks archery range.
    * \return a pointer to an azteks archery range
    */
    core::archery_range* create_archery_range() override { return new azteks::archery_range; }
    /**
    * \brief returns a pointer to an azteks house.
    * \return a pointer to an azteks house
    */
    core::house* create_house() override { return new house; }
    /**
    * \brief returns a pointer to an azteks town center.
    * \return a pointer to an azteks town center
    */
    core::town_center* create_town_center() override { return new town_center; }
  };
}
