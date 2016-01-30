# Intro

This repo contains all the notes I write for this [book](http://www.books.com.tw/products/0010456858).

## Table of Content

- Chap 1: Introduction
- Chap 2: Introduction on Compile and Link
- Chap 3: Object Files - Revealed
- Chap 4: Static Linking

## `gcc` Flags

- `-E`: Only run the preprocessor.
- `-o <file>`: Write output to `<file>`.
- `-S`: Only run preprocess and compilation steps.
- `-c`: Only run preprocess, compile, and assemble steps (obtaining object file).

## Backend Commands

Once you enter something like `gcc ...`, `gcc` will call these function in order to generate one executable on your computer:

1. `cpp`/`clang`: preprocesser, for expanding macro or any preprocessing instructions. (You can use `gcc -E` to see the expanded file)
2. `cc1`: complilation backend command, for generating assembly codes.
3. `as`: assembler, for generating object files.
4. `ld`: linker, linking all object files to one executable.

![compilation](img/compile.png)


