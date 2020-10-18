        
	global  _ft_strcpy

        		section .text

_ft_strcpy:
				xor		rcx, rcx				; initialize rcx
				push	rbx

loop_on_word:
				mov		bl, byte [rsi + rcx]	; copying value stored in [rsi + rcx] address into bl (rbx low bits)
												; using rl as temp because operands can't be 2 mem addresses
				mov		byte [rdi + rcx], bl	; copying bl content into [rdi + rcx] address 
				cmp		bl, 0					; compare if bl == '\0'
				je		end_of_word				; if yes : go to end function
				inc		rcx						; rcx++
				jmp		loop_on_word

end_of_word:
				pop		rbx
				mov		rax, rdi				; copying rdi content (i.e. dest address) into rax because ret always returns rax
				ret

