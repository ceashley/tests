test: sauce.o
	g++ sauce.o -o main -g `xml2-config --libs`

sauce.o: header.h sauce.cpp
	g++ -I/usr/include/libxml2 -std=c++11 sauce.cpp -c -g
