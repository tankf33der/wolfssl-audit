all: c a m u
a: c
	clang -fsanitize=address -DWOLFSSL_SMALL_STACK -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
m: c
	clang -fsanitize=memory -DWOLFSSL_SMALL_STACK -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
u: c
	clang -fsanitize=undefined -DWOLFSSL_SMALL_STACK -DHAVE_BLAKE2S -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
c:
	rm -rf *.o *.out

# tis-interpreter.sh --cc "-DWOLFSSL_SMALL_STACK -DHAVE_BLAKE2S -DSINGLE_THREADED -I. -I wolfssl/wolfcrypt" blake2s/*.c
