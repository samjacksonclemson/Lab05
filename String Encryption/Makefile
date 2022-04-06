CXX = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM) 

$(PROGRAM): main.cpp EncryptableString.cpp
	$(CXX) $(OPTIONS) main.cpp EncryptableString.cpp -o $(PROGRAM) 

clean:
	rm -f $(PROGRAM)
