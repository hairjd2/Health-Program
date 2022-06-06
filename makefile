CXX = g++
CXXFLAGS = -Wall

main: Food_Item.o main.cpp
	$(CXX) $(CXXFLAGS) Food_Item.o main.cpp -o main.out

Food_Item.o: Food_Item.h Food_Item.cpp
	$(CXX) $(CXXFLAGS) -c Food_Item.cpp

run:
	./main.out