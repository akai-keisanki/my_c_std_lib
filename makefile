SRCS = $(shell find src/ -name *.c)
OBJS = $(SRCS:src/%.c=build/%.o)

CC = cc

TARGET = lib/libmycstd.so

LIB_LINKER_FLAGS = -shared
LIB_COMPILER_FLAGS = -Iinclude
PROGRAM_COMPILATION_LINKER_FLAGS = -Iinclude -lmycstd -Llib

build: clean $(TARGET)

$(TARGET): $(OBJS)
	mkdir -p lib
	$(CC) -o $@ $^ $(LIB_LINKER_FLAGS)

build/%.o: src/%.c
	mkdir -p build
	$(CC) -c -o $@ $^ $(LIB_COMPILER_FLAGS)

clean:
	rm -rf $(TARGET) obj lib

test: $(TARGET)
	mkdir -p tests
	$(CC) -o tests/test tests/main.c $(PROGRAM_COMPILATION_LINKER_FLAGS)
	export LD_LIBRARY_PATH="$(shell pwd)/lib"
	./tests/test
