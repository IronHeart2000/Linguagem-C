#include <stdio.h>
#include <locale.h>

int main(void) {
    char acorde;
	
    printf("Digite um caractere que represente um dos acordes abaixo:\nC: Dó;\nD: Ré;\nE: Mi;\nF: Fá;\nG: Sól;\nA: Lá;\nB: Si.\n\n");
    scanf("%c", &acorde);

    switch(acorde) {
      case 'C': 
      case 'c':
        printf("| | | | 1 |\n");
        printf("| | 2 | | |\n");
        printf("| 3 | | | |");
        break;
      case 'D': 
      case 'd':
        printf("| | | | | |\n");
        printf("| | | 1 | 2\n");
        printf("| | | | 3 |");
        break;
      case 'E': 
      case 'e':
        printf("| | | 1 | |\n");
        printf("| 2 3 | | |\n");
        printf("| | | | | |");
        break;
      case 'F':
      case 'f':
        printf("| | | | 1 1\n");
        printf("| | | 2 | |\n");
        printf("| | 3 | | |");
        break;
      case 'G':
      case 'g':
        printf("| | | | | |\n");
        printf("| 1 | | | |\n");
        printf("2 | | | | 3\n");
        break;
      case 'A':
      case 'a':
        printf("| | | | | |\n");
        printf("| | 1 2 3 |\n");
        printf("| | | | | |");
        break;
      case 'B':
      case 'b':
        printf("| | | | | |\n");
        printf("| 1 1 1 1 1\n");
        printf("| | | | | |\n");
        printf("| | 2 3 4 |");
        break;
      default:
        printf("\nOpção Inválida. Tente Novamente!");
    }
    
    return 0;
}
