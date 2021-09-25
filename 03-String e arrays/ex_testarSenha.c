#include <stdio.h>
#include <string.h>

/*
Pede para o usu�rio digitar uma senha e verificar se a mesma � igual a que
estiver pr�-definida
*/


int main(void)
{
    char senha_definida [] = "PASSWORD";
    char senha_digitada[10]; //limita a quantidade de caracteres a serem digitados, para 10


    /*enquanto o valor strcmp da strings forem diferente de 0, ou seja desiguais, 
    o programa continuar� pedindo para o usuario digitar a senha at� a mesma estiver com valor 
    strcmp igual a 0, ou seja, quando os valores da strings tiverem igual/senha correta.*/
    while (strcmp(senha_definida, senha_digitada) != 0) {
        printf("Digite sua senha: ");
        gets(senha_digitada);

        if (strcmp(senha_digitada, senha_definida) == 0) {
        printf("Senha correta!");
        } else {
        printf("Senha incorreta!\n");
        }

    }
    
    return 0;
}
