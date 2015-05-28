
all: compile man

compile:
	$(CXX) quadsolver.cpp -o quadsolver
	mv quadsolver /usr/local/bin/quad

man:
	cp quad.man quad.1
	gzip quad.1
	mv quad.1.gz /usr/local/share/man/man1/

clean:
	$(RM) /usr/local/bin/quad
	$(RM) /usr/local/share/man/man1/quad.1.gz
