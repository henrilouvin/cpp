CXX=g++
CXXFLAGS=-Wall -I$(SRC) -std=c++11

SRC=src
BUILD=build

_CC = $(shell ls $(SRC)/*.cc)
_OBJ = $(patsubst $(SRC)/%.cc,$(BUILD)/%.o,$(_CC))

$(BUILD)/%.o: $(SRC)/%.cc
	$(CXX) -c $< -o $@ $(CXXFLAGS)

all: makedir test

test: $(_OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

makedir:
	mkdir -p $(BUILD)

.PHONY: clean

clean:
	$(RM) -rf $(BUILD)
	$(RM) test
