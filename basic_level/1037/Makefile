SRCS:=$(wildcard *.cc)
ELFS:=$(SRCS:%.cc=%)
SRCES:=$(wildcard *.cpp)
ELFSS:=$(SRCES:%.cpp=%)
CC:=g++
all:$(ELFS)
all:$(ELFSS)

%:%.cc
	        $(CC) $< -o $@ -g
%:%.cpp
	        $(CC) $< -o $@ -g
clean:
	        rm -rf $(ELFS)
	        rm -rf $(ELFSS)
