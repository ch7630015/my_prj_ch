#g++ main.cpp ./lib/ubuntu64/libsnowboy-detect.a -I./includ -lcblas -D_GLIBCXX_USE_CXX11_ABI=0 -std=c++0x#
##########################################################################################################
DIR_EXE += ./
DIR_SEC := ./
DIR_INC := ./
TARGET :=./test
CC := gcc
CXX := g++
CFLAGS := 
#-D_GLIBCXX_USE_CXX11_ABI=0
CXXFLAGS := -std=c++0x

LIBS := -lstdc++
 
INCS := -I$(DIR_INC)

C_SRCS += $(wildcard $(DIR_SEC)*.c)

CXX_SRCS += $(wildcard $(DIR_SEC)*.cpp)

OBJS += $(C_SRCS:.c=.o)
OBJS += $(CXX_SRCS:.cpp=.o)

all:$(TARGET)
	@echo "Compiler generated "$(TARGET)" finished!"

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LIBS)
	
%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

%.o:%.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

clean:
	rm -rf *.o $(OBJS) $(DIR_EXE)$(TARGET)
	@echo "Clean finished!"

