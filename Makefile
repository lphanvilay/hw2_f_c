main: main.cpp polygon.cpp
	g++ --std=c++17 -o main main.cpp
	@echo "Type ./main to run the program"
clean:
	-rm -f *.o main
