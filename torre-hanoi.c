#include <stdio.h> //biblioteca que cuida da forma como a gente recebe e mostra dados (comunicação de informações)

int main() // função principal
{
  int discos[4] = {1, 2, 3, 4}; // atribuindo 1,2,3,4 aos indícies
  printf("Passe os discos da Torre A para Torre B\n");
  printf("Transporte disco %d para torre B\n", discos[0]); // printa o indície 0 = 1 
  printf("Transporte disco %d para torre B\n", discos[1]); // printa o indície 1 = 2
  printf("Transporte disco %d para torre B\n", discos[2]); // printa o indície 2 = 3
  printf("Transporte disco %d para torre B\n", discos[3]); // printa o indície 3 = 4
  printf("\nAgora passe os discos para a Torre C\n");
  printf("Transporte disco %d para torre C\n", discos[3]); // printa o indície 3 = 4
  printf("Transporte disco %d para torre C\n", discos[2]); // printa o indície 2 = 3
  printf("Transporte disco %d para torre C\n", discos[1]); // printa o indície 1 = 2
  printf("Transporte disco %d para torre C\n", discos[0]); // printa o indície 0 = 1

  return 0;
}

// & = resposável por ler as variáveis
// % = identificador de tipos

