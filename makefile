CXX = g++

SRCS = math.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = app.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	del *.o *.exe