#
# Hello World in assembly, demonstrating syscalls.
#
# Some notes: _start is the default entry point for the linker, global exports 
# the start label so the linker can recognize it.
# the 'mov' instructions used here mean, "move the literall prefixed with a $
# into the memory location indicated by the text that is prefixed by a % sign."
# Those memory locations, like rax, are the actual cpu registers.

.global _start 

.text

_start:
# write(1, message, 13)
  mov   $1, %rax          # system call ID 1 is write.
  mov   $1, %rdi          # file handle 1 is stdout
  mov   $message, %rsi    # address of string to output
  mov   $13, %rdx         # string length
  syscall                 # actual system call invocation of write

# exit(0)
  mov   $60, %rax         # system call ID 60 is exit
  xor   %rdi, %rdi        # we want to return coede 0
  syscall                 # syscall invocation of exit
message:
  .ascii "Hello, world\n"
