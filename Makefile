CC=gcc

scheduler: scheduler.o main.o
	$(CC) $(CFLAGS) scheduler.o main.o -lm -o scheduler

test_scheduler: scheduler.o test_scheduler.o
	$(CC) $(CFLAGS) scheduler.o test_scheduler.o -lm -o test_scheduler
	./test_scheduler

run: scheduler
	./scheduler

clean:
	rm -f scheduler test_scheduler *.o