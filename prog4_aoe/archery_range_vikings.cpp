#include "archery_range_vikings.h"

archery_range_vikings::archery_range_vikings() = default;

archer* archery_range_vikings::create_archer() { return new archer_vikings; }
cavalry_archer* archery_range_vikings::create_cavalry_archer() { return new cavalry_archer_vikings; }
hand_cannoneer* archery_range_vikings::create_hand_cannoneer() { return new hand_cannoneer_vikings; }
