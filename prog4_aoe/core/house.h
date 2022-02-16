#pragma once
#include "../pch.h"
#include "building.h"

namespace aoe::core {
  /**
   * \brief the abstract house building.
   */
  class house : public building {
  public:
    /**
     * \brief constructs a house with a given name.
     * \param name the name of the house
     */
    explicit house(const std::string& name) : building(name) {}
    /**
     * \brief virtual destructor makes the class abstract.
     */
    ~house() override = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline house::~house() = default;
}
