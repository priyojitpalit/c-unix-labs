all: tracker

tracker: main.o report.o
	gcc main.o report.o totals.o -o tracker

main.o: main.c tracker.h
	gcc -c main.c

report.o: report.c tracker.h
	gcc -c report.c

totals.o: totals.c tracker.h
	gcc -c totals.c

.PHONY: all clean
clean:
	rm -f tracker main.o report.o totals.o
