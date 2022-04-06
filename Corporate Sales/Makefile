CXX = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM) 

$(PROGRAM): main.cpp DivSales.cpp
	$(CXX) $(OPTIONS) main.cpp DivSales.cpp -o $(PROGRAM) 

clean:
	rm -f $(PROGRAM)
