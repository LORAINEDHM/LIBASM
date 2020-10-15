
    global  _ft_strcmp

                section .text

_ft_strcmp:

; ft_strcmp(rdi, rsi)

                xor rcx, rcx

loop_on_word:
                mov r8b, byte [rsi + rcx]        ; met le contenu de rsi dans r8b
				cmp byte [rdi + rcx], 0
				je egual
				cmp r8b, 0
				je egual
				;mov al, 7
                cmp byte [rdi + rcx], r8b    ; compare rdi et r8b (rsi)
				jne	calcul						; si == => ++
				inc rcx
                jmp loop_on_word


calcul:
				mov al, [rdi + rcx]
				cmp al, r8b
				jl	less
				ja 	above
				ret

less:
				SUB r8b, al
				;NEG r8b
				mov al, r8b

above:
				;mov al, [rdi + rcx]
				SUB al, r8b
				;mov al, r8b
				;byte [rdi + rcx], r8b
                ;mov al, byte [rdi + rcx]
                ;ret

egual:
				mov al, 0
