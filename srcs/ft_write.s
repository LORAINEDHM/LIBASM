
	extern ___error

    global	_ft_write

            	section	.text

_ft_write:
				mov     rax, 0x2000004		; 'name' of write
           		syscall						; to call write
				jc      error				; if meeting an error, the value of error is put into rax
				ret

error:
            	mov     r8, rax				; using temp to store the error value
            	call    ___error			; to put the adress location of errno into rax value
            	mov     [rax], r8			; to put the error value at this adress location
            	mov     rax, -1				; rax may return -1
            	ret