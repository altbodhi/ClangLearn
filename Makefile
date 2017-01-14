all:
	gcc main.c -o csort
	./csort < data.txt 
#> result.txt
#	tail result.txt