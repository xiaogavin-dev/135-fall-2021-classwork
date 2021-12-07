OFILES= funcs.o caesar.o vigenere.o decrypt.o

main: main.o $(OFILES)
	g++ -o main main.o $(OFILES)

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

tests: tests.o $(OFILES)
	g++ -o tests tests.o $(OFILES)

main.o: main.cpp funcs.h caesar.h vigenere.h decrypt.h

tests.o: tests.cpp doctest.h funcs.h caesar.h vigenere.h decrypt.h

funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

clean:
	rm -f $(OFILES) main.o tests.o test-ascii.o

removeexec:
	rm -f main tests test-ascii