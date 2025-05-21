PROG = amida
# OBJSに実行に必要なオブジェクトファイルを追加
OBJS = main.o free_str.o malloc_str.o chomp.o make_amida.o print_amida.o trace_amida.o make_ans.o
CC = gcc
CFLAGS = -Wall -O0 -g
LDFLAGS = -lm
.PHONY: all
all: $(PROG)

.SUFFIXES: .o.c
.c.o:
	$(CC) $(CFLAGS) -c $<
$(PROG): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)
.PHONY: clean
clean:
	rm -f $(PROG) $(OBJS)
