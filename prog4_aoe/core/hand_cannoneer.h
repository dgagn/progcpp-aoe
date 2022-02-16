#pragma once
#include "../pch.h"
#include "unit.h"

namespace aoe::core {
  /**
   * \brief the abstract hand cannoneer unit.
   */
  class hand_cannoneer : public unit {
  public:
    /**
     * \brief constructs a hand cannoneer with a given name.
     * \param name the name of the hand cannoneer
     */
    explicit hand_cannoneer(const std::string& name) : unit(name) {}
    /**
     * \brief virtual destructor makes the class abstract.
     */
    ~hand_cannoneer() override = 0;
  };

  /**
   * \brief inline definition instead of creating a new
   * cpp file. Makes a default destructor for the abstract
   * class.
   */
  inline hand_cannoneer::~hand_cannoneer() = default;
}
