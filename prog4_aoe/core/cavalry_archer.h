#pragma once
#include "../pch.h"
#include "unit.h"

namespace aoe::core {
  /**
   * \brief the cavalry archer abstract class unit.
   */
  class cavalry_archer : public unit {
  public:
    /**
     * \brief constructs a cavalry archer with a given
     * name.
     * \param name the name of the cavalry archer
     */
    explicit cavalry_archer(const std::string& name) : unit(name) {}
    /**
     * \brief virtual destructor makes the class abstract.
     */
    ~cavalry_archer() override = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline cavalry_archer::~cavalry_archer() = default;
}
