all: c a m u
a: c
	clang -fsanitize=address -DHAVE_BLAKE2B -DHAVE_BLAKE2 -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
m: c
	clang -fsanitize=memory -DHAVE_BLAKE2B -DHAVE_BLAKE2 -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
u: c
	clang -fsanitize=undefined -DHAVE_BLAKE2B -DHAVE_BLAKE2 -I.. -I ../wolfssl/wolfcrypt *.c && ./a.out
c:
	rm -rf *.o *.out

# tis-interpreter.sh --cc "-DHAVE_BLAKE2B -DHAVE_BLAKE2 -DSINGLE_THREADED -I. -I wolfssl/wolfcrypt" blake2b/*.c
