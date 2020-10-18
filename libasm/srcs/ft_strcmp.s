    global  _ft_strcmp
                section .text
_ft_strcmp:
                xor rcx, rcx                ; initialize rcx
                xor rax, rax                ; initialize rax
                push rbx

loop_on_word:
                mov bl, byte [rsi + rcx]	; store[rsi + rcx] content into bl
				cmp byte [rdi + rcx], 0		; check if [rdi + rcx] == '\0'
				je end						; if yes, go to end function
                cmp byte [rdi + rcx], bl	; compare rdi and bl (rsi) contents
                jne	end						; if contents differents, go to end function
				inc rcx						; if contents are egual => rcx++
                jmp loop_on_word			; loop

end:
                mov al, [rdi + rcx]			; to store [rdi + rcx] content into al
                sub rax, rbx				; rax = rax - rbx
                pop rbx
                ret							; ret rax