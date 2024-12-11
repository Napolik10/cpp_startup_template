CC = g++
CFLAGS = -Iinclude
SRC = $(wildcard src/*.cpp)
OUT = output

all: $(SRC)
    $(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
    rm -f $(OUT)
