CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
LDFLAGS =

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

SRCS = $(wildcard $(SRC_DIR)/.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
TARGET = $(BIN_DIR)/snakegame.out

$(TARGET): $(OBJS)
    $(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
    $(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -o $@ -c $<

all: $(TARGET)

clean:
    rm -f $(OBJ_DIR)/.o $(TARGET)

.PHONY: all clean
