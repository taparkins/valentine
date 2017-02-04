all: valentine.c
	gcc -o valentine valentine.c -w

clean:
	rm valentine
