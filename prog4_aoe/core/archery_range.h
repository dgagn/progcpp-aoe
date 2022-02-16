#pragma once

#include "archer.h"
#include "building.h"
#include "cavalry_archer.h"
#include "hand_cannoneer.h"
#include "../pch.h"

namespace aoe::core {
  /**
   * \brief abstract archery range.
   */
  class archery_range : public building {
    /**
     * \brief keep track of all the units in the
     * archery range.
     */
    std::vector<unit*> units_;
  protected:
    /**
     * \brief returns a pointer to any type of archer. The
     * virtual functions (abstract) needs to be implemented by the
     * childrens.
     *
     * \return a pointer to any type of archer
     */
    virtual archer* create_archer() = 0;
    /**
     * \brief returns a pointer to any type of cavalry archer. The
     * virtual functions (abstract) needs to be implemented by the
     * childrens.
     *
     * \return a pointer to any type of cavalry archer
     */
    virtual cavalry_archer* create_cavalry_archer() = 0;
    /**
     * \brief returns a pointer to any type of hand cannoneer. The
     * virtual functions (abstract) needs to be implemented by the
     * childrens.
     *
     * \return a pointer to any type of hand cannoneer
     */
    virtual hand_cannoneer* create_hand_cannoneer() = 0;
  public:
    /**
     * \brief constructs a archery range with a given name.
     * \param name the name of the archery range
     */
    explicit archery_range(const std::string& name) : building(name) { }
    /**
     * \brief This make sure to delete all the units and clear the vector.
     * virtual destructor makes the class abstract.
     */
    ~archery_range() override = 0;
    /**
     * \brief returns a pointer to the unit based on the type passed in
     * as a parameter. It follows the `factory method` design pattern.
     * \param type the type of unit
     * \return a pointer to the unit
     */
    unit* create_unit(unit::type type);
  };
}
