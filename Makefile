# Variables
CC = gcc
CFLAGS = -Wall -g
TARGET = main
SRC = HigherLower.c
LIBS = -lsodium

# Default rule
all: $(TARGET)

# Link the object files and create the executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LIBS)

# Run the compiled program
run: $(TARGET)
	./$(TARGET)

# Clean up object files and executable
clean:
	rm -f $(TARGET)

# .PHONY is used to prevent confusion between target names and file names
.PHONY: all clean run