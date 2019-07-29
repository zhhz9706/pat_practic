SRCS:=$(wildcard *.cc)
ELFS:=$(SRCS:%.cc=%)
SRCES:=$(wildcard *.cpp)
ELFSS:=$(SRCES:%.cpp=%)
CC:=g++
all:$(ELFS)
all:$(ELFSS)

%:%.cc
	        $(CC) $< -o $@ -llog4cpp -lpthread -g
%:%.cpp
	        $(CC) $< -o $@ -llog4cpp -lpthread -g
clean:
	        rm -rf $(ELFS)
	        rm -rf $(ELFSS)
