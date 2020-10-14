
    global  _ft_strcmp

                section .text

_ft_strcmp

; ft_strcmp(rdi, rsi)

                xor

loop_on_word:
                mov r8b, [rsi + rcx]        ; met le contenu de rsi dans r8b
                cmp [rdi + rcx], r8b    ; compare rdi et r8b (rsi)
                jne	end						; si == => ++
				inc rcx

end:
				mov rax, 

