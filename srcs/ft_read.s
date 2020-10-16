	extern ___error

    global	_ft_read

            	section	.text

_ft_read:
				mov     rax, 0x2000003		; 'name' of read 
                                            ; syscall table : (https://opensource.apple.com/source/xnu/xnu-1504.3.12/bsd/kern/syscalls.master or http://shell-storm.org/shellcode/files/syscalls.html)
                                            ; on macos, need to add 0x2000000 to the unix syscall
           		syscall						; to call read
				jc      error				; if meeting an error, the error value is put into rax, 
											; and we jump to error function (jump carry)
				ret

error:
            	mov     r8, rax				; using temp to store the error value
            	call    ___error			; to put the address location of errno into rax value
            	mov     [rax], r8			; to put the error value (stored in r8) at this address location
            	mov     rax, -1				; rax may return -1
            	ret