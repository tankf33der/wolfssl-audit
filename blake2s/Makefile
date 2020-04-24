all: c a m u
a: c
	clang -fsanitize=address -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
m: c
	clang -fsanitize=memory -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
u: c
	clang -fsanitize=undefined -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
mike: c
	cat *.c > mike.c
ccomp: mike
	ccomp -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt mike.c -o mike.out && ./mike.out
i: mike
	ccomp -interp -quiet -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt mike.c
c:
	rm -rf *.o *.out mike.*

# tis-interpreter.sh --cc "-DHAVE_BLAKE2S -DSINGLE_THREADED -I. -I wolfssl/wolfcrypt" blake2s/*.c

