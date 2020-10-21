        
	global  _ft_strcpy

        		section .text

_ft_strcpy:
				xor		rcx, rcx				; initialize rcx

loop_on_word:
				mov		dl, byte [rsi + rcx]	; copying value stored in [rsi + rcx] address into dl (rdx low bits)
												; using rl as temp because operands can't be 2 mem addresses
				mov		byte [rdi + rcx], dl	; copying dl content into [rdi + rcx] address 
				cmp		dl, 0					; compare if dl == '\0'
				je		end_of_word				; if yes : go to end function
				inc		rcx						; rcx++
				jmp		loop_on_word

end_of_word:
				mov		rax, rdi				; copying rdi content (i.e. dest address) into rax because ret always returns rax
				ret

