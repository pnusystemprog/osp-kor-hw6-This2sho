main.out: phoneBookMain.o delete.o print.o register.o search.o
	gcc -o main.out phoneBookMain.o delete.o print.o register.o search.o
 
delete.o: delete.c
	gcc -c delete.c -o delete.o
print.o: print.c
	gcc -c print.c -o print.o
register.o: register.c
	gcc -c register.c -o register.o
search.o: search.c
	gcc -c search.c -o search.o
clean:
	rm -f *.o
	rm -f $(TARGET)

