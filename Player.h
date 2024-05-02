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
  void setPositionX(unsigned int);
  void setPositionY(unsigned int);
  void setLifes(unsigned int);
  unsigned int getPositionX();
  unsigned int getPositionY();
  unsigned int getLifes();
  const char getModel() const;
  void printDetails();
  Player &operator=(Player const &);
};

#endif
