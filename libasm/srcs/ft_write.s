
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
				push	rax					; to get the error value back after cause we will put it at error address
											; location returned by error function
            	;mov     rbx, rax			; using temp to store the error value
            	call    ___error			; returned the address location of error into rax value
            	pop		rdx					; to get the error value back from the stack and store it into rdx
				mov     [rax], rdx			; to put the error value (stored in rdx) at this address location
				mov     rax, -1				; rax may return -1
            	ret
