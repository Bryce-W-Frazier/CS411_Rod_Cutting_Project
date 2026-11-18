# Makefile for Rod Cutting Project
# Bryce W. Frazier - 2026_11_17

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
TARGET = rodcutter

SOURCES = rodcutter.c++
OBJECTS = $(SOURCES:.c++=.o)

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) $(OBJECTS)

run: $(TARGET)
	./$(TARGET)
