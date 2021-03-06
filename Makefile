SRC = $(shell find . -name "*.cpp")
BIN = $(SRC:.cpp=.out)

.PHONY: all clean

all: $(BIN)
	@echo "run with:./MyProg  myText.txt"

%.out: %.cpp
	g++ -std=c++11 -Wall -Wextra -Wno-literal-suffix -O2 -o $@ $< 

clean:
	rm $(BIN)
