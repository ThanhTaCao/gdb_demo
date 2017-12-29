#------------------------------------------------------
# Makefile for C/C++ Program
# 
#------------------------------------------------------
# Target: 
# Authour: ZDC
#------------------------------------------------------

TARGET=tester

#------------------------------------------------------
# Default Parameters
#------------------------------------------------------

CC=g++ -std=c++14
DEF_OPT=-fPIC -Wall -Wno-unused -g -pg
INC=-I.
LIB=-L. -ldl -ltcmalloc -lunwind -Xlinker -Bdynamic -Bstatic

#------------------------------------------------------
# Definition
#------------------------------------------------------

#------------------------------------------------------
# Definition
#------------------------------------------------------

.SUFFIXES:.o .h .cpp

#---
# Source Files
#---

SRC=$(shell ls *.cpp)
HED=$(shell ls *.h)
OBJ=$(SRC:.cpp=.o)

#------------------------------------------------------
# rules
#------------------------------------------------------

all: clean $(TARGET)
$(TARGET): $(OBJ)
	$(CC) $(DEF_OPT)  -o $@ $^ -Wl
	
.cpp.o:
	$(CC) $(DEF_OPT) -c -o $@ $< $(INC)

dep:
	$(CC) -I$(INC) -MM -MG $(SRC)

clean:
	-@$(RM) -f $(TARGET) $(TARGET).exe
	-@$(RM) -f *.o *.obj *.out
	-@$(RM) -f *~ *.~*
	-@$(RM) *.a *.so.*
	@echo $(CURDIR) clean