gamemake: plot_lib.c game_main.c
	gcc -c plot_lib.c
	gcc -Wall -Werror -W game_main.c -o playGame.o -I.
	xterm sl
	xterm -hold ./playGame.o
