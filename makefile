all: compile run

compile:
	mkdir -p bin && gcc cli.c ../c-random-string/random-string.c -o bin/cli

run:
	./bin/cli
