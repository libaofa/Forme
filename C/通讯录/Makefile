obj = main.o menu.o insert.o getaline.o display.o query.o backspace.o modify.o file.o

Test:$(obj)
	$gcc -o Test $(obj)
main.o:main.c lbf.h
	$gcc -c main.c
menu.o:menu.c lbf.h
	$gcc -c menu.c
insert.o:insert.c lbf.h
	$gcc -c insert.c
getaline.o:getaline.c lbf.h
	$gcc -c getaline.c
display.o:display.c lbf.h
	$gcc -c display.c
query.o:query.c lbf.h
	$gcc -c query.c
backspace.o:backspace.c lbf.h
	$gcc -c backspace.c
modify.o:modify.c lbf.h
	$gcc -c modify.c
file.o:file.c lbf.h
	$gcc -c file.c

.PHONY:clean
clean:
	rm -rf *.o Test phone.txt
	@echo "Clean Done!"	
