CC=gcc
SRC_DIR=src
CFLAG=-c
SOURCES=$(SRC_DIR)/a.c $(SRC_DIR)/b.c
OBJECTS=$(SOURCES:.c=.o)
BUILD_DIR=build
EXECUTABLE=$(BUILD_DIR)/ab

all:$(SOURCES) $(EXECUTABLE)

include inc.mk
    
$(EXECUTABLE):$(OBJECTS)
	mkdir -p $(BUILD_DIR)
	$(CC) $^ -o $@

$(OBJECTS):%.o:%.c
	$(CC) $(CFLAG) $< -o $@

.PHONY: clean
clean:
	rm $(BUILD_DIR)/*

# # this will match any target
# %:
# 	echo $@

see:
	echo $(.DEFAULT_GOAL) # the first target in your Makefile.
