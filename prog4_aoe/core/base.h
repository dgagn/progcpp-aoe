#pragma once

#include "archery_range.h"
#include "house.h"
#include "town_center.h"

namespace aoe::core {
  /**
   * \brief the base abstract class.
   */
  class base {
    /**
     * \brief the default pointer to the town center created.
     */
    town_center* town_center_ = nullptr;
    /**
     * \brief the default pointer to the house created.
     */
    house* house_ = nullptr;
    /**
     * \brief the default pointer to the archery range created.
     */
    archery_range* archery_range_ = nullptr;
  protected:
    /**
     * \brief returns a pointer to any type of town center. The
     * virtual functions (abstract) needs to be implemented by the
     * childrens.
     * \return a pointer to any type of town center
     */
    virtual town_center* create_town_center() = 0;
    /**
     * \brief returns a pointer to any type of house. The
     * virtual functions (abstract) needs to be implemented by the
     * childrens.
     * \return a pointer to any type of house
     */
    virtual house* create_house() = 0;
    /**
     * \brief returns a pointer to any type of archery range. The
     * virtual functions (abstract) needs to be implemented by the
     * childrens.
     *
     * \return a pointer to any type of archery range
     */
    virtual archery_range* create_archery_range() = 0;
    /**
     * \brief this is the default build function. It makes sure to
     * build the `buildings` in the correct order. I use a method
     * because calling virtual functions inside of a constructor is
     * not good practice. Plus, if a base needs a new set of buildings,
     * its easier to change.
     */
    void build();
  public:
    /**
     * \brief constructs the base with the default constructor.
     */
    base() = default;
    /**
     * \brief virtual destructor makes the class abstract.
     */
    virtual ~base() = 0;
    /**
     * \brief returns a pointer to the archery range that was created
     * by this.
     * \return a pointer to the archery range that was created
     * by this.
     */
    [[nodiscard]] archery_range* archery_range() const { return archery_range_; }
  };
}
