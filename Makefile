# Compiler
CXX = clang++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17 -Iheaders -Iheaders/types -Iheaders/stats -Iheaders/characters

# Source files
SRC = main.cpp

# Output binary
OUT = main

# Default target
all: $(OUT)

# Compilation rule
$(OUT): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

# Clean build files
clean:
	rm -f $(OUT)
