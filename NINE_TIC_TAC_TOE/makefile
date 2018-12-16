game.exe : attack.o print.o win_lose.o game.o
		 gcc game.o attack.o print.o win_lose.o -o game.exe
game.o : game.c header.h color.h
	    gcc -c game.c
attack.o : attack.c header.h
	      gcc -c attack.c 
print.o : print.c header.h color.h
	     gcc -c print.c	     	    
win_lose.o : win_lose.c header.h
		   gcc -c win_lose.c
