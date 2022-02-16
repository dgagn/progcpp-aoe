#pragma once

#include "../pch.h"

namespace aoe::core {
  /**
   * \brief the abstract building class.
   */
  class building {
  protected:
    /**
     * \brief the name of the building.
     */
    const std::string name_;
  public:
    /**
     * \brief constructs a building with a specified name and prints to
     * stdout.
     * \param name the name of the building
     */
    explicit building(std::string name) : name_(std::move(name)) { printf("Construction: %s\n", name_.c_str()); }
    /**
     * \brief virtual destructor makes the class abstract.
     */
    virtual ~building() = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline building::~building() = default;
}
