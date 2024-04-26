#include "Player.h"

Player::Player() : model('C') {
  this->position_x = 50;
  this->position_y = 50;
}

Player::~Player() {}

void Player::printPlayerDetails() {
  std::cout << "model = " << this->model << "\n";
  std::cout << "position_x = " << this->position_x << "\n";
  std::cout << "position_y = " << this->position_y << "\n";
  std::cout << "lifes = " << this->lifes << "\n";
}

void Player::setPlayerPositionX(unsigned int position_x) {
  this->position_x = position_x;
}

void Player::setPlayerPositionY(unsigned int position_y) {
  this->position_y = position_y;
}

void Player::setPlayerLifes(unsigned int lifes) { this->lifes = lifes; }

unsigned int Player::getPlayerPositionX() { return this->position_x; }

unsigned int Player::getPlayerPositionY() { return this->position_y; }

unsigned int Player::getPlayerLifes() { return this->lifes; }

const char Player::getPlayerModel() const { return this->model; }
