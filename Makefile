

Jeu: Jeu.o Animal.o GestionGamelles.o Interface.o InterfaceSDL.o Temps.o GestionSauvegarde.o

	g++ Jeu.o Animal.o GestionGamelles.o Interface.o InterfaceSDL.o Temps.o GestionSauvegarde.o -o Jeu -lSDL

Jeu.o: Jeu.cpp Interface.h

	g++ -c -std=c++11 Jeu.cpp -o Jeu.o

Animal.o: Animal.cpp Constante.h Nourriture.h
	
	g++ -c -std=c++11 Animal.cpp -o Animal.o

GestionGamelles.o: GestionGamelles.cpp Constante.h Nourriture.h

	g++ -c -std=c++11 GestionGamelles.cpp -o GestionGamelles.o

Interface.o: Interface.cpp Constante.h

	g++ -c -std=c++11 Interface.cpp -o Interface.o

InterfaceSDL.o: InterfaceSDL.cpp 

	g++  -c -std=c++11 InterfaceSDL.cpp -o InterfaceSDL.o

Temps.o: Temps.cpp

	g++  -c -std=c++11 Temps.cpp -o Temps.o

GestionSauvegarde.o: GestionSauvegarde.cpp Constante.h Nourriture.h

	g++  -c -std=c++11 GestionSauvegarde.cpp -o GestionSauvegarde.o

