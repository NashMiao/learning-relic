TARGET = ../../bin/bn
all:
	gcc -c bn.c -lrelic_s
	g++ bn.cpp bn.o -lrelic_s -lrelic_s -o $(TARGET)
clean:
	rm -rf *.o $(TARGET)