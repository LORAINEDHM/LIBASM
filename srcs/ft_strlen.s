
	global	_ft_strlen

				section		.text
_ft_strlen:		xor			rax, rax				; initialise rax

loop_on_word:
				cmp			byte [rdi + rax], 0		; compare if &rdi[rax] = "\0" (rdi = 1st parameter)
				je			end_of_word				; if = "\0"
				inc			rax						; rax++
				jmp			loop_on_word

end_of_word:
				ret									; ret(rax)


