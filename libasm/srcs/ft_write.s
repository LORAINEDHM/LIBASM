
	extern ___error

    global	_ft_write

            	section	.text

_ft_write:		
				mov     rax, 0x2000004		; 'name' of write 
                                            ; syscall table : (https://opensource.apple.com/source/xnu/xnu-1504.3.12/bsd/kern/syscalls.master or http://shell-storm.org/shellcode/files/syscalls.html)
                                            ; on macos, need to add 0x2000000 to the unix syscall
           		syscall						; to call write
				jc      error				; if meeting an error (), the error value is put into rax, 
											; and we jump to error function (jump carry)
				ret

error:
				push	rbx
            	mov     rbx, rax			; using temp to store the error value
            	call    ___error			; to put the address location of errno into rax value
            	mov     [rax], rbx			; to put the error value (stored in 58) at this address location
            	pop		rbx
				mov     rax, -1				; rax may return -1
            	ret
