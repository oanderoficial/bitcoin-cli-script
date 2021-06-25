/* BITCOIN-CLI SCRIPT V1.0
   @bitcoinander
*/

/*  ____  _ __             _                  ___    _____           _       __ 
   / __ )(_) /__________  (_)___        _____/ (_)  / ___/__________(_)___  / /_
  / __  / / __/ ___/ __ \/ / __ \______/ ___/ / /   \__ \/ ___/ ___/ / __ \/ __/
 / /_/ / / /_/ /__/ /_/ / / / / /_____/ /__/ / /   ___/ / /__/ /  / / /_/ / /_  
/_____/_/\__/\___/\____/_/_/ /_/      \___/_/_/   /____/\___/_/  /_/ .___/\__/  
                                                                  /_/ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void red () {
  printf("\033[1;31m");
}

void yellow () {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}


int main () {
     setlocale(LC_ALL, "Portuguese_Brasil");
                    char var[100];
                    int menu;
                    char hash[70];
              red();
                printf("\n----------------------------------------------------\n");
                yellow();
                printf("BITCOIN-CLI SCRIPT V1.0\n");
                printf("Desenvolvido por: @bitcoinander\n");
                printf("cliente bitcoin-cli\n");
                red();
                printf("----------------------------------------------------\n");
                reset();
                printf("\n|  MENU  | \n\n");
                printf(" 1- Ver hash de cabeçalho do bloco mais recente na melhor cadeia de bloco. \n");
                printf(" 2- Informações sobre o estado atual da cadeia de blocos.\n");
                printf(" 3- Número de blocos na melhor cadeia de blocos local.\n");
                printf(" 4- Obter um cabeçalho de bloco com um hash de cabeçalho específico do banco de dados.\n");
                printf(" 5- Informações sobre o pool de memória de transação atual do nó.\n");
                printf(" 6- Todos os identificadores de transação (TXIDs) no pool de memória.\n");
                printf(" 7- Dados sobre cada nó de rede conectado.\n");
                printf(" 8- Informações sobre o tráfego de rede, incluindo bytes de entrada, saída de bytes e a hora atual.\n");
                printf(" 9- Número de conexões com outros nós.\n");
                printf(" 10-Informações relacionadas à mineração.\n");
                printf("\nDigite a Opcão: ");
                scanf("%d",&menu);

                switch (menu) {
                    
                    case 1:
                           printf("\nVocê escolheu: Ver hash de cabeçalho do bloco mais recente na melhor cadeia de bloco. \n");
                           sprintf(var, " bitcoin-cli getbestblockhash ");
                           system(var);
                           break;
                    case 2:
                           printf("\nVocê escolheu: Informações sobre o estado atual da cadeia de blocos.\n");
                           sprintf(var, " bitcoin-cli getblockchaininfo");
                           system(var);
                           break;
        
                    case 3:
                           printf("\nVocê escolheu: Número de blocos na melhor cadeia de blocos local.\n");
                           sprintf(var, " bitcoin-cli getblockcount ");
                           system(var);
                           break;

                    case 4:
                           printf("\nVocê escolheu: Obter um cabeçalho de bloco com um hash de cabeçalho específico do banco de dados de bloco local como um objeto JSON ou como um cabeçalho de bloco serializado.\n");
                           printf("Digite a hash: ");
                           scanf("%s",&hash);
                           sprintf(var, "bitcoin-cli getblockheader %s", hash);
                           system(var);
                           break;

                    case 5:
                           printf("\nVocê escolheu: Informações sobre o pool de memória de transação atual do nó.\n");
                           sprintf(var, "bitcoin-cli getmempoolinfo");
                           system(var);
                           break;

                    case 6:
                           printf("\nVocê escolheu: Todos os identificadores de transação (TXIDs) no pool de memória.\n");
                           sprintf(var, "bitcoin-cli getrawmempool");
                           system(var);
                           break;

                    case 7:
                            printf("\nVocê escolheu: Dados sobre cada nó de rede conectado.\n");
                            sprintf(var, "bitcoin-cli getpeerinfo");
                            system(var);
                            break;

                    case 8:
                            printf("\nVocê escolheu: Informações sobre o tráfego de rede, incluindo bytes de entrada, saída de bytes e a hora atual.\n");
                            sprintf(var, "bitcoin-cli getnettotals");
                            system(var);
                            break;        

                    case 9:
                            printf("\nVocê escolheu: Número de conexões com outros nós.\n");
                            sprintf(var, "bitcoin-cli getconnectioncount");
                            system(var);
                            break;  

                    case 10:
                            printf("\nVocê escolheu: Informações relacionadas à mineração.\n");
                            sprintf(var, "bitcoin-cli getmininginfo");
                            system(var);
                            break;        
                             
                    }
          return 0;
        }
