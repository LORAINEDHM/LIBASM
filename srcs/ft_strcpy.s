        
	global  _ft_strcpy

        		section .text

_ft_strcpy:
				xor		rcx, rcx

loop_on_word:
												; rdi = dest & rsi = src
				mov		r8b, byte [rsi + rcx]	; copying value stored in [rsi + rcx] address into r8b
												; using r8b as temp because operands can't be 2 mem addresses
				mov		byte [rdi + rcx], r8b	; copying r8b content into [rdi + rcx] address 
				cmp		r8b, 0					; compare if r8b == '\0'
				je		end_of_word						; if yes : go to end function
				inc		rcx						; rcx++
				jmp		loop_on_word

end_of_word:
				mov		rax, rdi				; copying rdi content (i.e. dest adress) into rax because ret always returns rax
				ret

