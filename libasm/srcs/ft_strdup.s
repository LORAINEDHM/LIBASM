	extern _malloc
	extern	_ft_strlen
	extern	_ft_strcpy


    global	_ft_strdup

            	section	.text

_ft_strdup:
				cmp		rdi, 0
				je		end
				call	_ft_strlen			; to know size to allocate
				add		rax, 1				; +1 for '\0'
				push	rdi					; save rdi value into stack cause we need to keep the string for late (strcpy), but
											; rdi has to be freed to host strlen (because rdi will be the argument of malloc)
				mov		rdi, rax			; move strlen value into rdi which is the malloc argument
				call    _malloc				; returns a pointer
				cmp     rax, 0				; if rax = NULL, it means malloc failed to allocate the block of memory
				pop 	rsi					; to have the string back into rsi (2nd argument of strcpy)
				je		end
				mov		rdi, rax			; address returned by malloc function becomes dest arg of strcpy, i.e rdi
				call	_ft_strcpy			; rax = pointer to string copy located at allocated space address
				ret


end:
				mov	rax, -1
				ret