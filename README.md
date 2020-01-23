# FFI Demo

This is a little demo of calling back and forth among languages

## Calling C from SWI-Prolog

Taken from 
http://rosettacode.org/wiki/Call_a_foreign-language_function#Prolog

note that the Rosetta Code version leaks memory. Fixed in my version.

compile the shared lib with

swipl-ld -o plffi -shared plffi.c


swipl fficaller.pl

?- plffi:c_print(hello).
c prints hello
true.

?- dup_many(100000).
done
true .


## Calling Rust from C++

from 
https://amirkoblog.wordpress.com/2018/07/05/calling-rust-code-from-c-c/

cd cpptorust
make
export LD_LIBRARY_PATH=./target/debug/
./run
Sum: 30


## Calling Rust from Prolog

First we need SWI-Prolog.h ported to Rust. There's a tool to do this automatically

apt install llvm-dev libclang-dev clang

export OUT_DIR="src/"




