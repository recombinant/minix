This is a fork. For the original follow the links from 

- https://github.com/Stichting-MINIX-Research-Foundation/minix
- https://github.com/minix3/minix

---
Plan A
======

This fork is primarily to tidy up the Minix3 project so that the Minix3 kernel can be ported to [Zig](https://ziglang.org) by using `zig translate-c`. 2020/10 *Zig* is currently is Beta nearly at 0.7.0

Preliminary porting of simple functions to *zig* and inserting resulting *zig* compiled .o object into the mix has shown that a port is, in principle, feasible.

### Modus operandi

C files are first compiled with the addition of the `-E` flag (preprocessor output). The resultant preprocessed C source can then be used as the input for `zig translate-c`. The translated *zig* source code is functional but a bit of a dogs dinner. Anything that is not translated has a `@compileError` placeholder.

Nothing other than compilation is expected at this stage.

### Spanners in the works

Some light refactoring of the C source code is definitely required before invoking `zig translate-c`.

- *zig* does not have a preprocessor - it has `comptime`. Convert C preprocessor function macros to functions.
- Minix3 has name collisions to resolve
  - between C variables and C function macros.
  - between C structs and C variables.
- Minix3 has no naming convention to differentiate global variables. Or static variables. Prepend `_g_` to global variables (it's currently not used). Ditto `_s_` for static variables.
- The C compiler `-E` option loses the `#define` macro constant names. Individual header files can be run through `zig translate-c` after minor tweaking to allow them to be translated standalone - yielding the constants.

Not forgetting lovely C constructs
- out of range pointers to exit loops
- implicit type casts
- usw
https://github.com/Stichting-MINIX-Research-Foundation/minix.git
