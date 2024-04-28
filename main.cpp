#include "Game.h"
#include "Ghost.h"
#include "Player.h"

int main(int argc, char **argv) {

  Game game;
  Player player;
  Ghost ghost;

  initscr();
  game.initMap();
  game.printMap();
  refresh();
  getch();
  endwin();

  return 0;
}
