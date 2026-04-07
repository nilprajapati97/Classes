outfile: main.o add.o print.o count.o delete.o reverse.o
	cc main.o add.o print.o count.o delete.o reverse.o -o outfile

main.o:main.c
	cc -c main.c
add.o:add.c
	cc -c add.c
print.o:print.c
	cc -c print.c
count.o:count.c
	cc -c count.c
delete.o:delete.c
	cc -c delete.c
reverse.o:reverse.c
	cc -c reverse.c
clean:
	rm -f *.o  *out outfile
