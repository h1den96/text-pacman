
pacman: main.o Game.o Player.o Ghost.o
	g++ main.o Game.o Player.o Ghost.o -o pacman -lncurses

main.o: main.cpp
	g++ -c main.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

Ghost.o: Ghost.cpp
	g++ -c Ghost.cpp

clean:
	rm *.o pacman
