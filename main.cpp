#include "Game.h"
#include "Ghost.h"
#include "Player.h"
#include <ncurses.h>

int main(int argc, char **argv) {

  Game game;
  Player player;
  Ghost ghost;

  initscr();
  raw();
  noecho();
  keypad(stdscr, TRUE);
  game.initMap();
  int mv;
  while (true) {
    mv = getch();
    refresh();
    game.playerMovement(mv);
    break;
    // if () {
    // }
  }
  // game.printMap();
  endwin();

  return 0;
}
