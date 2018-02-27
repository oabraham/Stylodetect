makefile:
all: stylodetect

stylodetect: main.o
	gcc -o stylodetect main.o
	
main.o:
	gcc -c Main\main.c
	
clean:
	-rm main.o stylodetect.exe
	