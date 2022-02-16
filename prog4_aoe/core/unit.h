#pragma once

#include "../pch.h"

namespace aoe::core {

  /**
   * \brief the abstract unit class.
   */
  class unit {
  protected:

    /**
     * \brief the name of the unit.
     */
    const std::string name_;
  public:

    /**
     * \brief all the available unit type.
     */
    enum class type {
      archer,
      cavalry_archer,
      hand_cannoneer
    };

    /**
     * \brief constructs a unit with a name and prints to
     * stdout.
     * \param name the name of the unit
     */
    explicit unit(std::string name) : name_(std::move(name)) {
      printf("Construction: %s\n", name_.c_str());
    }

    /**
     * \brief virtual destructor makes the class abstract.
     */
    virtual ~unit() = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline unit::~unit() = default;
}
