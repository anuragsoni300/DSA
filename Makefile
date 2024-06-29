CFLAGS = -o ./build/a.out

all: build run

build: lib/main.cpp
	g++ lib/main.cpp $(CFLAGS)

run: build/a.out
	@./build/a.out