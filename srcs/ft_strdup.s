	extern _malloc
	extern	_ft_strlen
	extern	_ft_strcpy


    global	_ft_strdup

            	section	.text
				xor rax, rax
				xor	rsi, rsi

_ft_strdup:
				;mov     rax, 0x2000003		; 'name' of write 
                                            ; syscall table : (https://opensource.apple.com/source/xnu/xnu-1504.3.12/bsd/kern/syscalls.master or http://shell-storm.org/shellcode/files/syscalls.html)
                                            ; on macos, need to add 0x2000000 to the unix syscall
           		;syscall						; to call write
				;jc      error				; if meeting an error (), the error value is put into rax, 
				;							; and we jump to error function (jump carry)
				;ret
				cmp		rdi, 0
				je		end
				push	rdi
				;mov		rbx, rdi			; put sting into rsi because need to be the 2nd arg of ft_strcpy, and rdi need to be free to host strlen (because rdi will be the argument of malloc)
				call	_ft_strlen			; to know size to allocate
				add		rax, 1				; +1 for '\0'
				mov		rdi, rax			;
				call    _malloc				; returns a pointer
				pop 	rdi					; to have the string get back into rdi
				mov		rsi, rdi
				mov		rdi, rax
				call	_ft_strcpy			; rax = pointer to string copy located at allocated space address

				;cmp     rax, 0				; if rax = NULL, it means malloc failed to allocate the block of memory
				ret

error:
            	;mov     r8, rax				; using temp to store the error value
            	;call    ___error			; to put the address location of errno into rax value
            	;mov     [rax], r8			; to put the error value (stored in 58) at this address location
            	;mov     rax, -1				; rax may return -1
            	;ret

end:
				mov	rax, 0
				ret