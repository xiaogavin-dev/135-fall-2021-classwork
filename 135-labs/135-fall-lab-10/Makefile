CC = -std=c++11

main: main.o time.o movie.o timeslot.o
	g++ $(CC) -o main main.o time.o movie.o timeslot.o

tests: tests.o time.o movie.o timeslot.o
	g++ $(CC) -o tests tests.o time.o movie.o timeslot.o

main.o: main.cpp timeslot.h time.h movie.h 

tests.o: tests.cpp timeslot.h time.h movie.h

time.o: time.cpp time.h

movie.o: movie.cpp movie.h

timeslot.o: timeslot.cpp timeslot.h time.h movie.h 

clean: 
	rm -f main.o time.o movie.o timeslot.o tests.o