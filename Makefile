EE_LIB = libps2_printf.a

EE_OBJS = ps2_printf.o

EE_CFLAGS += -Wall 

EE_LIBS += -ldebug -lc -lmouse

EE_C_COMPILE = $(EE_CC) $(EE_CFLAGS)

all: $(EE_LIB) $(EE_OBJS) 
ifeq ($(PS2DEV),)
	@echo "$PS2DEV ENVIROMENT is not set. Could not install libps2printf."
	@exit 1
endif
	@echo Copying...
	@cp -frv ps2_printf.h $(PS2SDK)/ee/include/
	@cp -f $(EE_LIB) $(PS2SDK)/ee/lib
	@echo Done!

clean:
	@rm -f -r $(EE_LIB) $(EE_OBJS) 

install: all clean

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal 