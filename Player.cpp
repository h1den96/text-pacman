#include "Player.h"

Player::Player() : model('P') {
  this->position_x = 50;
  this->position_y = 50;
}

Player::~Player() {}

void Player::printDetails() {
  std::cout << "model = " << this->model << "\n";
  std::cout << "position_x = " << this->position_x << "\n";
  std::cout << "position_y = " << this->position_y << "\n";
  std::cout << "lifes = " << this->lifes << "\n";
}

void Player::setPositionX(unsigned int position_x) {
  this->position_x = position_x;
}

void Player::setPositionY(unsigned int position_y) {
  this->position_y = position_y;
}

void Player::setLifes(unsigned int lifes) { this->lifes = lifes; }

unsigned int Player::getPositionX() { return this->position_x; }

unsigned int Player::getPositionY() { return this->position_y; }

unsigned int Player::getLifes() { return this->lifes; }

const char Player::getModel() const { return this->model; }

Player &Player::operator=(Player const &player) {
  if (this != &player) {
    this->position_x = player.position_x;
    this->position_y = player.position_y;
    this->lifes = player.lifes;
  }
  return *this;
}
