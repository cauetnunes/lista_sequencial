
CXX = g++                   
CXXFLAGS = -g -Wall           
LDFLAGS =                     
SRC = main.cpp lista_sequencial.cpp 
OBJ = $(SRC:.cpp=.o)          
TARGET = main                 


all: $(TARGET)


$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET) $(LDFLAGS)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)

debug: CXXFLAGS += -DDEBUG
debug: $(TARGET)

