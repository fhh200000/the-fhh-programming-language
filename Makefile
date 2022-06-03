SRCS := $(wildcard *.c)
BASE_DIR=${PWD}
CFLAGS := -Wall -Werror -I${PWD}/include -g
OBJS := $(patsubst %c,%c.o,$(SRCS))
LIBS :=
SUBDIRS := driver common lexical grammar
RECURSIVE_MAKE= @for subdir in $(SUBDIRS); \
        do \
        ( cd $$subdir && $(MAKE) all -f Makefile -e CC="${CC}" -e BASE_DIR=${BASE_DIR} -e CFLAGS='${CFLAGS}') || exit 1; \
        done
all: mkdir ${OBJS} component link
mkdir:
	@mkdir -p build
%.c.o:%.c
	@echo -e "\e[32;1m[CC]\e[0m\t" $<
	@$(CC) ${CFLAGS} -g -c $< -o build/$@
component:
	$(RECURSIVE_MAKE)
link:
	@echo -e "\e[36;1m[CCLD]\e[0m\t" fhhc
	@$(CC) ${LDLFAGS} build/*.o -o build/fhhc ${LIBS}
clean:
	@echo -e "\e[33;1m[CLEAN]\e[0m\t" ALL
	@rm -rf build/*
tool:
	@echo -e "\e[32;1m[CC]\e[0m\t" gen_transrule_offset.c
	@$(CC) ${CFLAGS} tools/gen_transrule_offset.c -o build/gen_transrule_offset
