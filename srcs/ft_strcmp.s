    global  _ft_strcmp
                section .text
_ft_strcmp:
                xor rcx, rcx                ; to initialize rcx
                xor rax, rax                ; to initialize rax
                xor r8, r8                  ; to initialize r8
loop_on_word:
                mov r8b, byte [rsi + rcx]	; to store[rsi + rcx] content into r8b
				cmp byte [rdi + rcx], 0		; to check if [rdi + rcx] == '\0'
				je end						; if yes, go to end function
                cmp byte [rdi + rcx], r8b	; to compare rdi and r8b (rsi) contents
                jne	end						; if contents differents, go to end function
				inc rcx						; if contents are egual => rcx++
                jmp loop_on_word			; loop

end:
                mov al, [rdi + rcx]			; to store [rdi + rcx] content into al
                sub rax, r8					; rax = rax - r8
                ret							; ret rax