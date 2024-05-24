CFLAGS=-Wall -Wextra -pedantic -O2 -g -pg
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

chess: Base.o
	$(CC) $(CFLAGS) -o $@ $^

# Procura funções demasiado complexas 
complexidade:
	@echo Only printing when Modified McCabe Cyclomatic Complexity is above 5
	@echo | pmccabe -v
	@pmccabe *.c| sort -nr | awk '{if($$1>5)print}'

# Procura problemas no código 
check:
	cppcheck --enable=all --suppress=missingIncludeSystem .

# Esta parte foi gerada usando o comando gcc -MM *.c
Base.o: Base.c Structs.h

codigo.zip: $(wildcard *.h) $(wildcard *.c)
	zip -9r $@ $^
  
clean:
	rm -f $(OBJS) a.out chess codigo.zip