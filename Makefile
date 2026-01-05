all:
	g++ -o main main.cpp

run: all
	./main

clean:
	rm -f main
