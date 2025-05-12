# Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Libraries to link
LIBS = -lwiringPi

# Target executable name
TARGET = gpio_read

# Source file
SRC = encloder.cpp

# Build rule
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LIBS)

# Clean rule
clean:
	rm -f $(TARGET)
