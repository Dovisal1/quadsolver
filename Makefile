
all: compile man

compile:
	$(CXX) quadsolver.cpp -o quadsolver
	mv quadsolver /usr/local/bin/quad

man:
	cp quad.man quad
	gzip quad
	mv quad /usr/local/share/man/man1/
