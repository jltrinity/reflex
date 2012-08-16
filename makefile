#makefile

CXX = g++
CXXFLAGS = -ansi
OBJETOS = cronometro.o reflex.o
PROGRAMAS = reflex

all: $(PROGRAMAS)

reflex: reflex.o
	$(CXX) $(LDFLAGS) -o $@ $^
	
clean:
	$(RM) $(PROGRAMAS) $(OBJETOS) core *~
