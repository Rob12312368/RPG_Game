# Compiler
CXX = clang++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17 -Iheaders -Iheaders/types -Iheaders/stats -Iheaders/characters

# Source files (ensure correct paths)
SRC = main.cpp headers/stats/hp.cpp headers/stats/statblock.cpp  # ✅ Add the correct path to hp.cpp

# Object files (convert .cpp to .o)
OBJ = $(SRC:.cpp=.o)  # This will generate main.o and headers/stats/hp.o

# Output binary
OUT = main

# Default target
all: $(OUT)

# Linking rule (combine all object files into the final executable)
$(OUT): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(OBJ)

# Rule for compiling .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJ) $(OUT)
