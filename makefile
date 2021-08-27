asmGenerate: comp
	./comp 1 > ass6_16CS10058_quads1.out
	./comp 2 > ass6_16CS10058_quads2.out
	./comp 3 > ass6_16CS10058_quads3.out
	./comp 4 > ass6_16CS10058_quads4.out
	./comp 5 > ass6_16CS10058_quads5.out
	./comp 6 > ass6_16CS10058_quads6.out
	./comp 7 > ass6_16CS10058_quads7.out
	./comp 8 > ass6_16CS10058_quads8.out

comp: lex.yy.o y.tab.o ass6_16CS10058_translator.o ass6_16CS10058_target_translator.o
	g++ lex.yy.o y.tab.o ass6_16CS10058_translator.o \
	ass6_16CS10058_target_translator.o -lfl -o comp

ass6_16CS10058_target_translator.o: ass6_16CS10058_target_translator.cxx
	g++ -c ass6_16CS10058_target_translator.cxx

ass6_16CS10058_translator.o: ass6_16CS10058_translator.cxx ass6_16CS10058_translator.h
	g++ -c ass6_16CS10058_translator.h
	g++ -c ass6_16CS10058_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: ass6_16CS10058.l y.tab.h ass6_16CS10058_translator.h
	flex ass6_16CS10058.l

y.tab.c: ass6_16CS10058.y
	yacc -dtv ass6_16CS10058.y -W

y.tab.h: ass6_16CS10058.y
	yacc -dtv ass6_16CS10058.y -W
	
clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o ass6_16CS10058_translator.o test1 test2 test3 test4 test5 test6 test7 test8 y.output comp ass6_16CS10058_target_translator.o libass2_16CS10058.a ass6_16CS10058_1.o ass2_16CS10058.o ass6_16CS10058_2.o ass6_16CS10058_3.o ass6_16CS10058_4.o ass6_16CS10058_5.o ass6_16CS10058_6.o ass6_16CS10058_7.o ass6_16CS10058_8.o

clean1:
	rm test1 ass6_16CS10058_1.o libass2_16CS10058.a ass2_16CS10058.o

#Test files
test1: ass6_16CS10058_1.o libass2_16CS10058.a
	gcc ass6_16CS10058_1.o -o test1 -L. -lass2_16CS10058
ass6_16CS10058_1.o: myl.h
	gcc -c ass6_16CS10058_1.s

test2: ass6_16CS10058_2.o libass2_16CS10058.a
	gcc ass6_16CS10058_2.o -o test2 -L. -lass2_16CS10058
ass6_16CS10058_2.o: myl.h
	gcc -Wall -c ass6_16CS10058_2.s

test3: ass6_16CS10058_3.o libass2_16CS10058.a
	gcc ass6_16CS10058_3.o -o test3 -L. -lass2_16CS10058
ass6_16CS10058_3.o: myl.h
	gcc -Wall -c ass6_16CS10058_3.s

test4: ass6_16CS10058_4.o libass2_16CS10058.a
	gcc ass6_16CS10058_4.o -o test4 -L. -lass2_16CS10058
ass6_16CS10058_4.o: myl.h
	gcc -Wall -c ass6_16CS10058_4.s

test5: ass6_16CS10058_5.o libass2_16CS10058.a
	gcc ass6_16CS10058_5.o -o test5 -L. -lass2_16CS10058
ass6_16CS10058_5.o: myl.h
	gcc -Wall -c ass6_16CS10058_5.s

test6: ass6_16CS10058_6.o libass2_16CS10058.a
	gcc ass6_16CS10058_6.o -o test6 -L. -lass2_16CS10058
ass6_16CS10058_6.o: myl.h
	gcc -Wall -c ass6_16CS10058_6.s

test7: ass6_16CS10058_7.o libass2_16CS10058.a
	gcc ass6_16CS10058_7.o -o test7 -L. -lass2_16CS10058
ass6_16CS10058_7.o: myl.h
	gcc -Wall -c ass6_16CS10058_7.s

test8: ass6_16CS10058_8.o libass2_16CS10058.a
	gcc ass6_16CS10058_8.o -o test8 -L. -lass2_16CS10058
ass6_16CS10058_8.o: myl.h
	gcc -Wall -c ass6_16CS10058_8.s


libass2_16CS10058.a: ass2_16CS10058.o
	ar -rcs libass2_16CS10058.a ass2_16CS10058.o

ass2_16CS10058.o: ass2_16CS10058.c myl.h
	gcc -Wall -c ass2_16CS10058.c