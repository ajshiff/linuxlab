###############################################################
# Program:
#     Project 07, Moon Lander
#     Brother Cook, CS165
# Author:
#     Aaron Shiffler
# Summary:
#     The ship now moves a certain number of pixels based on 
#     the velocity components of the class, which receives a
#     constant pull from gravity, and is altered based on the
#     buttons the user presses. It detects whether it's hit
#     anything, and if it is near the landing pad.
# Above and Beyond
# --> The moonlander has 4 tries or 'lives' to complete the level
#     before receiving the 'crashed' message.
# --> Another UI Element was added to display the number of lives
#     the player has left. This is achived using a static variable.
# --> I made sure the thruster animation wouldn't go off after
#     the user landed or crashed. The user also can't have
#     negative fuel.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main Moon Lander game
###############################################################
a.out: driver.o ground.o game.o uiInteract.o uiDraw.o point.o lander.o velocity.o
	g++ driver.o ground.o game.o uiInteract.o uiDraw.o point.o lander.o velocity.o $(LFLAGS)
	tar -j -cf moonLander.tar makefile *.h *.cpp

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

ground.o: ground.cpp ground.h
	g++ -c ground.cpp

game.o: game.h game.cpp uiDraw.h uiInteract.h point.h ground.h
	g++ -c game.cpp

driver.o: driver.cpp game.h uiInteract.h
	g++ -c driver.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
lander.o: lander.cpp lander.h velocity.h point.h
	g++ -c lander.cpp

velocity.o: velocity.cpp velocity.h
	g++ -c velocity.cpp
###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o *.tar
