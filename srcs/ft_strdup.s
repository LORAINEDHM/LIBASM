	extern _malloc
	extern	_ft_strlen
	extern	_ft_strcpy


    global	_ft_strdup

            	section	.text

_ft_strdup:
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
				mov		rdi, 0
				call    _malloc				; returns a pointer
				pop 	rdi					; to have the string get back into rdi
				cmp     rax, 0				; if rax = NULL, it means malloc failed to allocate the block of memory
				je		end
				mov		rsi, rdi
				mov		rdi, rax
				call	_ft_strcpy			; rax = pointer to string copy located at allocated space address
				ret


end:
				mov	rax, -1
				ret