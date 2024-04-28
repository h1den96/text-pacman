#include "Game.h"
#include <fstream>

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

void Game::printMap() {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      printw("%c", this->map[i][j]);
    }
    printw("\n");
  }
  // for (int i = 0; i < ROWS; i++) {
  // std::cout << map[i] << "\n";
  //}
}
