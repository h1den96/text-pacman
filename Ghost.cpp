#include "Ghost.h"

Ghost::Ghost() : model('G') {}

Ghost::~Ghost() {}

void Ghost::printDetails() {
  std::cout << "Model = " << this->model << "\n";
  std::cout << "Position x = " << this->position_x << "\n";
  std::cout << "Position y = " << this->position_y << "\n";
}

void Ghost::setGhostPositionX(unsigned int position_x) {
  this->position_x = position_x;
}

void Ghost::setGhostPositionY(unsigned int position_y) {
  this->position_y = position_y;
}

const char Ghost::getGhostModel() const { return this->model; }

unsigned int Ghost::getGhostPositionX() { return this->position_x; }

unsigned int Ghost::getGhostPositionY() { return this->position_y; }
