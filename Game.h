#ifndef GAME_H
#define GAME_H

#include "ncurses.h"
#include <iostream>

class Game {
private:
  char **map;

public:
  Game();
  ~Game();
  int initMap();
  void printMap();
};

#endif
