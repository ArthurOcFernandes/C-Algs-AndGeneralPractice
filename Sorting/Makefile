C=clang

%.o: %.c
	$(C) -c $<

SelectionSort: SelectionSort.o troca.o printM.o
	$(C) -o $@ $^

BubbleSort: BubbleSort.o troca.o printM.o
	$(C) -o $@ $^
	
clean:
	rm -f *.o