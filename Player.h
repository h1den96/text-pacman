#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
private:
  unsigned int position_x;
  unsigned int position_y;
  unsigned int lifes;
  const char model;

public:
  Player();
  ~Player();
  void setPlayerPositionX(unsigned int);
  void setPlayerPositionY(unsigned int);
  void setPlayerLifes(unsigned int);
  unsigned int getPlayerPositionX();
  unsigned int getPlayerPositionY();
  unsigned int getPlayerLifes();
  const char getPlayerModel() const;
  void printPlayerDetails();
};

#endif
