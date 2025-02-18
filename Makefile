
flags = -std=c++11
inc = -I /opt/X11/include

all: test

test: test.cc TextArea.o RGB.o TAArray.o Tester.o
	g++ $(flags) $(inc) -g -o test test.cc TextArea.o RGB.o TAArray.o Tester.o -lX11 -L /opt/X11/lib

TextArea.o:	TextArea.h TextArea.cc
	g++ $(flags) $(inc) -c TextArea.cc 

RGB.o:	RGB.h RGB.cc
	g++ $(flags) $(inc) -c RGB.cc

TAArray.o:	TAArray.h TAArray.cc
	g++ $(flags) $(inc) -c TAArray.cc

Tester.o:	Tester.h Tester.cc
	g++ $(flags) $(inc) -c Tester.cc
	
clean:
	rm -f test *.o
