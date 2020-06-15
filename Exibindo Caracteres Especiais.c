#include <stdio.h>
#include <locale.h> //Arquivo de cabeçalho para utilizar a função setlocale

int main(void) {
    setlocale(LC_ALL, "Portuguese"); //Define o local e o idioma do código para português
    printf("Agora você pode exibir caracteres especiais no console sem problemas! âãçáàóí");
    return 0;
}
