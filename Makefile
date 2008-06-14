include makeinclude

OBJ	= main.o

all: db4dump

db4dump: $(OBJ)
	$(LD) $(LDFLAGS) -o db4dump $(OBJ) $(LIBS)

clean:
	rm -f *.o
	rm -f db4dump

makeinclude:
	@echo please run ./configure
	@false

SUFFIXES: .cpp .o
.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $<
