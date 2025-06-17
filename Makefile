CC = gcc
CFLAGS = -std=c89 -Wall -Wextra -I include -v
AR = ar
ARFLAGS = rcs
BUILD_DIR = build
BIN_DIR = bin

all: $(BIN_DIR)/main 

$(BIN_DIR)/main: $(BUILD_DIR)/main.o lib/libtermdraw.a | $(BIN_DIR)

	$(CC) $(CFLAGS) -o $(BIN_DIR)/main $(BUILD_DIR)/main.o -Llib -ltermdraw

$(BUILD_DIR)/main.o: src/main.c | $(BUILD_DIR) 
	$(CC) $(CFLAGS) -c src/main.c -o $(BUILD_DIR)/main.o

lib/libtermdraw.a: $(BUILD_DIR)/term_draw.o
	$(AR) $(ARFLAGS) lib/libtermdraw.a $(BUILD_DIR)/term_draw.o

$(BUILD_DIR)/term_draw.o: src/term_draw.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c src/term_draw.c -o $(BUILD_DIR)/term_draw.o
	
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf main lib/libtermdraw.a $(BUILD_DIR) $(BIN_DIR)
