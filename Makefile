# Variabili
CC = g++
CFLAGS = -Iinclude
SRC = main.cpp $(wildcard src/*.cpp)
OBJS = $(SRC:.cpp=.o)
OUT = output

# Regola principale: compila il progetto
all: $(OUT)

# Regola per creare l'eseguibile a partire dagli oggetti
$(OUT): $(OBJS)
	$(CC) $(OBJS) -o $(OUT)

# Regola per compilare i file .cpp in file .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regola per pulire i file generati
clean:
	rm -f $(OBJS) $(OUT)
