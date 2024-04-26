#ifndef GHOST_H
#define GHOST_H

#include <iostream>

class Ghost {
private:
  unsigned int position_x;
  unsigned int position_y;
  const char model;

public:
  Ghost();
  ~Ghost();
  void printDetails();
  void setGhostPositionX(unsigned int);
  void setGhostPositionY(unsigned int);
  unsigned int getGhostPositionX();
  unsigned int getGhostPositionY();
  const char getGhostModel() const;
};

#endif
