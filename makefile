gamemake: game_intro_demo.c
	gcc game_intro_demo.c -o DEMO.o -I.
	xterm sl 
	xterm -hold ./DEMO.o
    
