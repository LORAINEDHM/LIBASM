	extern ___error
    global	_ft_read
            	section	.text
_ft_read:
				mov     rax, 0x2000003		; 'name' (syscall number) of read
           		syscall						; to call read
				jc      error				; if meeting an error, the error value is put into rax, 
											; and we jump to error function (jump carry)
				ret
error:
                push    rax					; to get the error value back after cause we will put it at error address
											; location returned by error function
            	call    ___error			; returned the address location of errno into rax value
            	pop     rdx					; to get the error value back from the stack and store it into rdx
                mov     [rax], rdx			; to put error value at error address location
				mov     rax, -1				; rax may return -1
            	ret