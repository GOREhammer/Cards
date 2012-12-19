# $@ - for full name of the target
# $* - for name of target with the suffix deleted

OFFLAGS = -g -c			#object file flags to compile into object file but not link
CPPOUT = $*.cpp -o $@	#to include the cpp file of the current target and output object file for the current target

Main: Player.o Card.o Hand.o Deck.o Main.cpp
	g++ -g Player.o Card.o Hand.o Deck.o $@.cpp -o $@
	
Player.o: Player.h Player.cpp
	g++ $(OFFLAGS) $(CPPOUT)
	
Card.o: Card.h Card.cpp
	g++ $(OFFLAGS) $(CPPOUT)

Hand.o: Hand.h Hand.cpp
	g++ $(OFFLAGS) $(CPPOUT)

Deck.o: Deck.h Deck.cpp
	g++ $(OFFLAGS) $(CPPOUT)
	
clean:
	rm *.o *~ Main
	
# OTHER NOTES:
# $* for remove suffix on a target without a suffix produces the empty string

 
