# _*_ Makefile _*_


SOURCE_DIR = src
BUILD_DIR = build

CC = gcc
TARGET = main

SRC = $(wildcard $(SOURCE_DIR)/*.c $(SOURCE_DIR)/runoob/*.c $(SOURCE_DIR)/100q/*.c)
OBJ = $(patsubst $(SOURCE_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC))

CCFLAGS = -c

build: $(TARGET)


rebuild: clean newdir $(TARGET)


test: $(SOURCE_DIR)/main.c $(BUILD_DIR)/$(TARGET).o $(TARGET).exe

	# Outputs "test", since this is the target name
	echo $@

	# Outputs all prerequisites
	echo $^

	# Outputs first prerequisites
	echo $<
	
	# Outputs all prerequisites newer than the target
	echo $?


newdir:
	mkdir build/runoob
	mkdir build/100q


$(TARGET): $(OBJ)
	$(CC) -o $@ $^

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c
	$(CC) $(CCFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -rf $(TARGET) $(BUILD_DIR)/*
