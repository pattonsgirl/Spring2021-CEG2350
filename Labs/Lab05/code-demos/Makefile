# targets: pre-reqs
	# actions
# compile the program
default: c-demo.o
	gcc -Wall -o from-makefile c-demo.o

c-demo.o : c-demo.c
	gcc -c c-demo.c

go: from-makefile
	./from-makefile

# cleaning things up
clean: from-makefile
	rm from-makefile c-demo.o c-demo.s
