#include "Game.h"
#include <fstream>
#include <ncurses.h>

#define ROWS 20
#define COLUMNS 40

// The way this constructor works, not optimal
// Better get rows and columns dynmically from initMap()
Game::Game() {
  this->map = new char *[ROWS];
  for (int i = 0; i < ROWS; i++) {
    this->map[i] = new char[COLUMNS];
  }
}

Game::~Game() {
  for (int i = 0; i < ROWS; i++) {
    delete[] this->map[i];
  }
  delete[] this->map;
}

int Game::initMap() {

  // if (this->map != NULL) {
  // for (int i = 0; i < ROWS; i++) {
  // delete[] map[i];
  //}
  // delete[] map;
  //}

  std::ifstream infile("map.txt");
  if (!infile) {
    std::cerr << "Error opening the file.\n";
    return 1;
  }

  infile.clear();
  infile.seekg(0, std::ios::beg);

  for (int i = 0; i < ROWS; i++) {
    // this line is dangerous
    infile.getline(map[i], COLUMNS);
  }

  infile.close();

  return 0;
}

void Game::initEntities() { // Maybe need to set func to int instead of void

  for (int i = ROWS - 2; i > 0; i--) {
    for (int j = COLUMNS - 1; j > 0; j--) {
      if (this->map[i][j] == 'P') {
        this->player.setPositionX(i);
        this->player.setPositionY(j);
      }
    }
  }
}

void Game::playerMovement(int mv) {

  if (mv == KEY_UP) {
    // detect colission
    // change map
    // print map
  } else if (mv == KEY_DOWN) {

  } else if (mv == KEY_LEFT) {

  } else if (mv == KEY_RIGHT) {
  }
}

int Game::detectCollision() {

  // if (this->map[][] == '#') {
  // return 0;
  //}
  return 1;
}

void Game::printMap() {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      printw("%c", this->map[i][j]);
    }
    printw("\n");
  }
}

void Game::setPlayer(Player player) { this->player = player; }

Player Game::getPlayer() { return this->player; }
