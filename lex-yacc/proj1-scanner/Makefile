LEX=flex
CC=g++
OBJECT=main

$(OBJECT): lex.yy.o
		$(CC) lex.yy.o -o $(OBJECT)
		@./$(OBJECT)

lex.yy.o: lex.yy.c
		$(CC) -c lex.yy.c

lex.yy.c: lex.l
		$(LEX) lex.l

clean:
		@del -f $(OBJECT) *.o lex.yy.c main.exe
