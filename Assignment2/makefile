# Assignmet#2
# Author:Wasim G Aswad	
# Student ID: 17193559
# Last Change:15/11/2019  

objects := 17193559 run

all: $(objects)


17193559: TwoDimensional.o Assignment2.o ThreeDimensional.o
	gcc -Wall -ggdb -o Assignment2 TwoDimensional.o Assignment2.o ThreeDimensional.o

run: Assignment2
	./Assignment2

# attention - clean will also remove emacs backup files !!!
clean:
	rm $(objects) *.o *# *~


