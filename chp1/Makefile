CC=g++-13

all: hello_world

hello_world: hello_world.cpp
	$(CC) $^ -o $@

run: hello_world
	./$^

clean:
	rm -f hello_world

.PHONY: all clean run
