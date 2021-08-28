CC := gcc

TASK_1 := debug_printf

.PHONY: all $(TASK_1) clean

all: $(TASK_1)

debug: CFLAGS += -g
debug: all

$(TASK_1): $(TASK_1).c
	$(CC) $(TASK_1).c -o  $(TASK_1)

clean:
	rm -rf $(TASK_1)
