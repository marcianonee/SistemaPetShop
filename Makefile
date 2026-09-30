# Makefile para o Sistema Pet Shop
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Ficheiros e pastas
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Encontra todos os ficheiros .cpp
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
# Cria os nomes dos ficheiros objeto correspondentes
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Nome do ficheiro executável final
TARGET = $(BUILD_DIR)/petshop

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET)