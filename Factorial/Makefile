# standard compile options for the c++ executable
PROGRAM = factorial
EXT = cpp
FLAGS = -fPIC -c

# the python interface through swig
PYTHONI = -I/usr/include/python3.8/
PYTHONL = -Xlinker -export-dynamic

# default super-target
all:
	g++ $(FLAGS) $(PROGRAM).$(EXT) -o $(PROGRAM).o
	swig -c++ -python -o $(PROGRAM)_wrap.cxx $(PROGRAM).i
	g++ $(FLAGS) $(PYTHONI) -c $(PROGRAM)_wrap.cxx -o $(PROGRAM)_wrap.o
	g++ $(PYTHONL) $(LIBFLAGS) -shared $(PROGRAM).o $(PROGRAM)_wrap.o -o _$(PROGRAM).so


clean:
	rm -rf *.o *.mod *.pyc *.cxx  __pycache__
