CFLAGS = -o ./bin/a.out

all: build run

build: lib/main.cpp
	@g++ lib/utils/* lib/main.cpp $(CFLAGS)

run:
	@./bin/a.out