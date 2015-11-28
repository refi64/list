tst : tst.c list.h
	clang -g -o $@ -fcolor-diagnostics $<
