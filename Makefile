#simple Makefile

SOURCES=main.c
LIBRARIES:=  
CFLAGS=-Wall 
LDFLAGS=
OUT=simple_static
OBJS=main.o 


all: $(SOURCES) $(OUT)

clean: 
	rm -f *.o
	rm -f *.d
	rm -f $(OUT)


$(OUT): $(OBJS)
	gcc $^ $(LDFLAGS) -o $@

%.o : %.m 
	gcc $< -c $(CFLAGS) -std=c99 -o $@
