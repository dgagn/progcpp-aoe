#pragma once

#include "../pch.h"
#include "building.h"

namespace aoe::core {
  /**
   * \brief the abstract town center building.
   */
  class town_center : public building {
  public:
    /**
     * \brief constructs a town center with a given name.
     * \param name the name of the town center
     */
    explicit town_center(const std::string& name) : building(name) {}
    /**
     * \brief virtual destructor makes the class abstract.
     */
    ~town_center() override = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline town_center::~town_center() = default;
}
