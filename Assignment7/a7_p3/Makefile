main: linked_list.o used_linked_list.o
		gcc -Wall -o main linked_list.o used_linked_list.o
	
linked_list.o: linked_list.h linked_list.c

used_linked_list.o: linked_list.h used_linked_list.c

clean:
		rm -f main *.o