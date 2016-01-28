# `gcc` Flags

- `-E`: Only run the preprocessor.
- `-o <file>`: Write output to `<file>`.
- `-S`: Only run preprocess and compilation steps.
- `-c`: Only run preprocess, compile, and assemble steps (obtaining object file).

# Backend Commands

Once you enter something like `gcc ...`, `gcc` will call these function in order to generate one executable on your computer:

1. `cpp`/`clang`: preprocesser, for extending macro or any preprocessing instructions. (`gcc -E`)
2. `cc1`: complilation backend command, for generating assembly codes.
3. `as`: assembler, for generating object files.
4. `ld`: linker, linking all object files to one executable.