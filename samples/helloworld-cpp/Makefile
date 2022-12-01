EE_BIN = helloworld-cpp.elf
EE_CXXFLAGS = -Wall -std=c++17
EE_OBJS = hello.o main.o
EE_LIBS = -lps2_printf -ldebug 

all: $(EE_BIN)

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

run: $(EE_BIN)
	ps2client execee host:$(EE_BIN)

reset:
	ps2client reset

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal
