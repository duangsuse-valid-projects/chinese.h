CC := clang

hanpp: hanpp.c

test:
	$(CC) test.c -o test
	timeout 1 ./test; exit 0
	$(RM) test

clean:
	$(RM) hanpp

.PHONY: test clean
