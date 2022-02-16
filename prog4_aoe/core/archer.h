#pragma once

#include "../pch.h"
#include "unit.h"

namespace aoe::core {
  /**
   * \brief the archer class.
   */
  class archer : public unit {
  public:
    /**
     * \brief constructs an archer with a given name.
     * \param name the name of the archer
     */
    explicit archer(const std::string& name) : unit(name) {}
    /**
     * \brief virtual destructor makes the class abstract.
     */
    ~archer() override = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline archer::~archer() = default;
}
