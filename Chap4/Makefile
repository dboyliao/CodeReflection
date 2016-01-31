CC=gcc
SRC_DIR=src
CFLAG=-c
SOURCES=$(SRC_DIR)/a.c $(SRC_DIR)/b.c
OBJECTS=$(SOURCES:.c=.o)
BUILD_DIR=build
EXECUTABLE=$(BUILD_DIR)/ab

include inc.mk

all:$(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE):$(OBJECTS)
	$(CC) $^ -o $@

$(OBJECTS):%.o:%.c
	$(CC) $(CFLAG) $< -o $@

# this will match any target
%:
	echo $@

see:
	echo $(.DEFAULT_GOAL) # the first target in your Makefile.
