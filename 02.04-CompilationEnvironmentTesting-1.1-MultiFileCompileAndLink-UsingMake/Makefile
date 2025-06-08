TARGET = main
SRCS   = 1.0-MultiFileCompileAndLink-main.cpp 1.2-MultiFileCompileAndLink-func-add.cpp
OBJS   = $(SRCS:.cpp=.o)
CXX    = g++
CXXFLAGS = -g -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	del $(OBJS) $(TARGET).exe