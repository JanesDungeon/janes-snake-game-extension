#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "snake.h"

class Controller {
 public:
  void HandleInput(bool &running, Snake &snake, bool &ate_poison) const;

 private:
  void ChangeDirection(Snake &snake, Snake::Direction input,
                       Snake::Direction opposite) const;
};

#endif