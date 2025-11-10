bin/testDyV: testDyV.cpp DyV.h
		mkdir -p bin
		g++ -o bin/testDyV testDyV.cpp DyV.h
bin/mochila: mochila.cpp
		mkdir -p bin
		g++ -o bin/mochila mochila.cpp
bin/monedas: monedas.cpp
		mkdir -p bin
		g++ -o bin/monedas monedas.cpp

clean:
		rm -r *.o *.gch bin