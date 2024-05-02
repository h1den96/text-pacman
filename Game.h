#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "ncurses.h"
#include <iostream>

class Game {
private:
  char **map;
  Player player;

public:
  Game();
  ~Game();
  int initMap();
  void initEntities();
  int detectCollision();
  void playerMovement(int);
  void printMap();
  void setPlayer(Player);
  Player getPlayer();
};

#endif
