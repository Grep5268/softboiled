# ==== CONFIG ====
CC      := gcc
CFLAGS  := -Wall -Wextra -O2
TARGET  := bin/softboiled.exe

SRC_DIR := src
OBJ_DIR := build
BIN_DIR := bin

# ==== SOURCES & OBJECTS ====
SRC := $(shell find $(SRC_DIR) -name "*.c")
OBJ := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

# ==== RULES ====
.PHONY: all clean run

all: $(TARGET)

# Link final executable
$(TARGET): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Compile .c -> .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Run program
run: all
	./$(TARGET)
