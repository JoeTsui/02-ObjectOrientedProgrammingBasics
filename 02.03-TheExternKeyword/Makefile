TARGET = main
SRCS   = 1.0-TheExternKeyword-main.cpp 1.2-num.cpp
OBJS   = $(SRCS:.cpp=.o)
CXX    = g++
CXXFLAGS = -g -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean:
	del $(OBJS) $(TARGET).exe