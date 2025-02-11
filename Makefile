# Variáveis
CXX = g++                    # Compilador C++
CXXFLAGS = -g -Wall           # Flags para compilação: debug e warnings
LDFLAGS =                     # Flags para linkagem (nenhuma para este exemplo)
SRC = main.cpp lista_sequencial.cpp # Arquivos fonte
OBJ = $(SRC:.cpp=.o)          # Arquivos objeto gerados a partir dos arquivos fonte
TARGET = main                 # Nome do executável

# Regra padrão para compilar tudo
all: $(TARGET)

# Como compilar o executável a partir dos objetos
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(LDFLAGS)

# Como compilar os arquivos .cpp para .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar os arquivos objetos e o executável
clean:
	rm -f $(OBJ) $(TARGET)

# Regra para rodar o programa
run: $(TARGET)
	./$(TARGET)

# Regra para compilar com a flag de depuração
debug: CXXFLAGS += -DDEBUG
debug: $(TARGET)

