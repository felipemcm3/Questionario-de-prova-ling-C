#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*Essa fun��o � para receber e imprimir o resultado final da avalia��o a variavel
(i) conta as respostas corretas e a variavel (e) as erradas.*/
void resultado(float i, float e, char nome[10]){
    printf (" \n\nSeu teste de conhecimento chegou ao fim.\n\n ");

                  if( i==21 ){
                    printf("\nParab�ns %s voc� acertou todas.\n\n",nome);
                 }
                 else if ( i>e ){
                      printf("Parab�ns %s voc� tem o indece maior de acertos.\n\n", nome);
                      printf("\n acertos : %.2f%%\n erros : %.2f%% \n\n ", i/21*100 ,e/21*100);
                 }
                 else if(e==21){
                         printf("\nQue pena %s voc� errou todas.\n\n ",nome);
                 }
                 else if( e>i ){
                    printf("\nQue pena %s voce teve mais erros do que acerto.",nome);
                    printf("\n acertos : %.2f%%\n errada : %.2f%% \n\n ", i/21*100 ,e/21*100);
                 }

                 else {
                    printf(" \n%s voc� teve o mesmo n�mero de acertos e erros.\n\n",nome);
                 }
}
//Essa fun��o � para imprimir a tabela de quais quest�o foram respondidas e quais s�o as respostas certas.
void tabela(int coq[21],char nome[10], char certa[21][2],char resp[21][2]){
    int r;
    printf("%s, sua tabela de respostas\n\n", nome);
    printf("Quest�o\t\tCerta\t\tResposta\n");
    for(r=0; r<21; r++){
        printf("%d\t\t",coq[r]);
        printf("%s\t\t", certa[r]);
        printf("%s\n", resp[r]);
    }
}
//Imprimir caso a resposta esteja certa
void certo(char nome[10]){
    printf("\nParab�ns %s, voc� acertou.\n\n", nome);
}
//Imprimi caso a resposta esteja errada
void errado(char nome[10]){
    printf("\nQue pena %s, voc� errou.\n\n", nome);
}
int main(){
    setlocale(LC_ALL, "portuguese");
    int opcao, opcao2,cont=0,r=0,coq[21],s=0;
    float i = 0, e = 0;
    //Essa char cont�m as respostas certas a serem comparadas caso adicione quest�es coloque as respostas aqui uma para maiusculo e outro para minusculo.
    char nome[10], resp[21][2], certa[21][2]={"b","c","c","b","b","c","a","e","d","c","c","e","c","e","d","a","a","a","c","a","d"};
    char certa2[21][2]={"B","C","C","B","B","C","A","E","D","C","C","E","C","E","D","A","A","A","C","A","D"};

    printf("Bem vindo ao exame do grupo 4.\n");
    printf("Informe seu primeiro nome: ");
    scanf("%s", nome);
    printf("\n");
    printf("Voc� pode escolher se quer fazer as quest�es sorteadas ou seguidas.\nDigite 1 para sortiadas e 2 para seguidas.\n");
    printf("Qual � sua escolha?\t");
    scanf("%d", &opcao2);
    while(opcao2 != 1 && opcao2 != 2){
        printf("Informe a resposta dentro das op��es.\n");
        scanf("%d", &opcao2);
        }
    system("pause");
    system("cls");
    srand(time(NULL));
    //Esse switch � para selecionar se quer as quest�es seguidas ou sortiadas
    switch(opcao2){
        case 1:
        //Esse cont � o la�o que vai determinar quantos sorteios seram feitos aumente ele caso queira mais sorteios
        while(cont<21){
            //Essa comando rand sorteada as quest�es mude o valor m�ximo dos n�meros a serem sorteados caso adicione mais quest�es
            opcao = 1+ rand() % 20;
            coq[s]=opcao;
            s++;
            //Esse switch sortea as quest�es
            switch(opcao){
                case 1:
                printf("\n1- Um switch de endere�o IP 192.168.63.2\nrecebe uma mensagem do endere�o IP 192.168.63.5\npara ser entregue ao endere�o IP 192.168.45.8\nQual ser� aproxima a��o do switch?");
                printf("\nA)Retornar a mensagem ao remetente. \nB)Enviar a mensagem ao roteador. \nC)Enviar a mensagem para o destinat�rio. \nD)Duplicar a mensagem e enviar para o destinat�rio e o remetente. \nE)Armazena a mensagem e destru�-la.\n");
                printf("\nQual � sua resposta :");
                scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                    i++;
                        certo(nome);
                }

                else{
                    e++;
                    errado(nome);
                }
                cont++;
                r++;
                system("pause");
                system("cls");
                break;
                case 2:
                    printf("2- John vonNeumann prop�s a id�ia que transformou os calculadores eletr�nicos\nem �c�rebros eletr�nicos �:modelar a arquitetura do computador segundo \no sistema nervoso central.\n");
                    printf("Para isso, eles teriam que ter tr�s caracter�sticas:\n1.Codificar as instru��es de uma forma poss�vel de ser armazenada na mem�ria do computador. Von Neumann sugeriu que fossem usados uns e zeros. \n2.Armazenar as instru��es na mem�ria, bem com o toda e qualquer informa��o\nnecess�ria a execu��o da tarefa. \n3.Quando processar o programa, buscar as instru��es diretamente na mem�ria,\nao inv�s  de lerem um novo cart�o perfurado a cada passo.\n");
                    printf("Este � o conceito de programa armazenado, cujas principais vantagens s�o:\nrapidez, versatilidade e auto modifica��o.\nAssim, o computador program�vel que conhecemos hoje, onde o programa \ne os dados est�o armazenados na mem�ria ficou conhecido como\nArquitetura de von Neumann.");
                    printf("\n\n\t\t\tFONTE:UNESP Computadores historia e arquitetura.\n\n");
                    printf("Sobre o texto acima, avalie as afirma��es a seguir:\n");


                    printf("\nI � Von Neumann prop�s que o computador n�o precisa de memoria.");
                    printf("\nII � Von Neumann prop�s que � desnecess�rio busca  a instru��o direta\nna memoria para a rapidez do processamento.");
                    printf("\nIII - Von Neumann sugeriu que fossem usados uns e zeros.\nPara Codificar as instru��es de uma forma poss�vel de ser armazenada\nna mem�ria do computador.");
                    printf("\nIV �Ent�o a vis�o simplifica de von neumann seria:\nmemoria principal ,unidade de controle ,unidade logico\ne aritm�tica e unidade de entrada e sa�da.");
                    printf("\nv- Von Neumann  disse que o computador n�o fuciona bem com uns e zeros.\n");


                    printf("� correto o que se afirma em:\n");
                    printf("A) I e II, apenas\n");
                    printf("B) II e III, apenas\n");
                    printf("C) III e IV, apenas\n");
                    printf("D) II, III e V, apenas\n");
                    printf("E) I, II, III, IV e V\n");
                    printf("Qual � sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                        i++;
                        certo(nome);
                    }
                    else{
                        e ++;
                            errado(nome);
                    }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;

                    case 3:

                        printf("3- O surto do corona v�rus obrigou as pessoas h� ficarem em casa,\nno entanto a quem use esse tempo para novos projetos.\nA competi��o de seguran�a PWn20Wn re�ne especialistas em programa��o\npara encontrarem falhas nos programas onde � organizada por acesso remoto.\nOs vencedores ganharam 270 mil d�lares equivalente a 1,35 milh�es\ne s�o incentivados pelas grandes empresas de tecnologia.\n");
                        printf("Considerando as informa��es acima, avalie as asser��es a seguir e a rela��o\nproposta entre elas.");
                        printf("\nI- A disserta��o acima usa de fun��o de linguagem referencial.\n");
                        printf("\n\t\t\tPORQUE\n");
                        printf("\nII- Informa os sentimentos dos participantes da competi��o.\n");

                        printf("\nA respeito dessas asser��es, assinale a op��o correta. ");
                        printf("\n");
                        printf("\nA) As asser��es I e II s�o proposi��es verdadeiras, e a II\n� uma justificativa correta da I.");
                        printf("\nB) As asser��es I e II s�o proposi��es verdadeiras, mas a II\nn�o � uma justificativa correta da I.");
                        printf("\nC) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa.");
                        printf("\nD) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.");
                        printf("\nE) As asser��es I e II s�o proposi��es falsas.\n");
                        printf("Qual � sua resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i++;
                        certo(nome);
                        }
                        else {
                            e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                        system("pause");
                        system("cls");
                        break;

                    case 4:

                        printf("\n4- O surgimento das redes de computadores com certeza representou\numa grande evolu��o para as pessoas e empresas,trazendo diversos beneficios.\n");
                        printf("Entre eles, destacam-se a possibilidade de troca de informa��es\nentre diferentes usu�rios, o compartilhamento de recursos computacionais,\n");
                        printf("conectar a sede e as filiais de uma empresa e, principalmente,\nter acesso � internet,t�o presente em nosso cotidiano.\n");
                        printf("\nPor VINICIUS Voc� conhece os principais tipos de redes de computadores?\n\t\t\t\t\tCONFIRA!04 JULHO 2018.\n\n");
                        printf("De acordo com o texto acima e com seus conhecimentos marque a op��o correta:\n\n");

                        printf("A)Empresas mundiais usam geralmente duas redes uma de comunica��o\nLAN para redes locais e MAN para redes globais.\n");
                        printf("B)A WAN tem um grande alcance e permite conectar redes locais ou metropolitanas umas �s outras.\n");
                        printf("C)A WAN � geralmente usada para conectar dispositivos dentro de uma cidade.\n");
                        printf("D)RAN � usada para conectar dispositivos com fones de ouvido,mouse,etc...\n");
                        printf("E)WAN, LAN, MAN s�o exatamente o mesmo tipo de conex�o.\n");
                        printf("Qual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                                i ++;
                            certo(nome);
                        }
                        else {
                            e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                        system("pause");
                        system("cls");
                        break;

                    case 5:
                    printf("\n5- A diferen�a entre hardware e software � uma d�vida\nrecorrente entre os usu�rios que n�o tem tanto conhecimento sobre dispositivos\n");
                    printf("tecnol�gicos como computadores desktops, notebooks, tablets, entre outros.\nPara contextualizar, em primeiro lugar, � importante ressaltar\n");
                    printf("que todos os computadores s�o uma combina��o entre hardware e software.\nOu seja, estes itens trabalham em conjunto em uma m�quina, e n�o isoladamente\n");
                    printf("como costumam ser imaginados tradicionalmente.\n");
                    printf("\nAfinal qual � a diferen�a entre hardware e software?\n\nEncontra-se em:https://netsupport.com.br/blog/diferenca-entre-hardware-e-software/n/n");
                    printf("De acordo com o texto acima e seus conhecimentos sobre software e hardware\n\nQuais alternativas est�o corretas.\n\n");

                    printf("I-	S�o exemplos de software Windows, Linux, Android e IOS.\n\n");
                    printf("II-	Mouse, teclado, monitor s�o considerados hardware.\n\n");
                    printf("III-	Os computadores s�o uma jun��o de software\n(IOS, Bluetooth, chromebit.) e hardware (monitor, teclado, winrar).\n\n");
                    printf("IV-	O hardware corresponde aos componentes f�sicos do computador,\nou seja, s�o as pe�as e aparatos eletr�nicos que,\nao se conectarem, fazem o equipamento funcionar.\n\n");
                    printf("V-	 Um software pode ser aplicado para qualquer situa��o em que um\nconjunto de algoritmos � executado para a obten��o de resultados.\n\n");


                    printf("A) I e II\n");
                    printf("B) I, II, III, IV\n");
                    printf("C) II, IV, V\n");
                    printf("D) I, II, IV, V\n");
                    printf("E) IV e V\n");
                    printf("Qual � sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                        i++;
                    certo(nome);
                    }
                    else {
                         e ++;
                         errado(nome);
                    }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 6:
                        printf("\n6- Ao longo da evolu��o da humanidade foi necess�rio a comunica��o entre seres\npara conviv�ncia em sociedade.\n");
                        printf("Conforme evoluem se melhora as formas de comunica��o criando meios mais\neficientes,r�pidos, e de longo alcance com a internet.\n");
                        printf("� evidente, ent�o que sempre foi essencial a comunica��o\npara a humanidade e at� hoje um bom comunicador pode fazer a diferen�a\n");
                        printf("abrir e fechar portas.\nIndependente da �poca h� fatores em comum nas formas de comunica��o\ns�o os chamados elementos de comunica��o\n");
                        printf("\nEscolha a alternativa com os elementos de comunica��o corretos.\n\n");

                        printf("A)Referente, canal, c�digo, receptor.\n");
                        printf("B)Internet, e-mail, whatsapp, computador, servidor.\n");
                        printf("C)Referente, emissor, receptor, canal, mensagem, c�digo.\n");
                        printf("D)Emissor, receptor, canal, mensagem.\n");
                        printf("E)Jornal, revista, internet, televis�o, r�dio.\n");
                        printf("Qual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i++;
                        certo(nome);
                        }
                        else {
                            e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                        system("pause");
                        system("cls");
                        break;
                        case 7:
                        printf("\n7- A comunica��o de dados se tornou crucial em grandes empresas, a mesma\nmultinacional tem pontos no Brasil e em Tokyo ou diversas outros pa�ses, sendo\nt�o importante n�o podemos esquecer que essa comunica��o tem limites.\nNaperda de transmiss�o existe formas diferentes para\nisso observe as informa��es abaixo.\n");

                        printf("\n� correto o que se afirma em:");
                        printf("\nI- Distor��o � a perda da forma original do sinal composto, pela diferen�a de\nvelocidade das ondas senoidais que o formam.");
                        printf("\nII- Atenua��o � a perda de energia ou seja amplitude da onda para vencer a\nresist�ncia do meio.");
                        printf("\nIII- A fibra optica � o �nico meio de transmiss�o\nque usa toda a velocidade da luz.");
                        printf("\nIV- Ru�do � a perda de for�a do sinal pela resist�ncia do meio.");
                        printf("\nV- Outros aparelhos podem interferir no sinal como maquinas el�tricas.\n");

                        printf("\nA)I, II, e V apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I, II, III, IV e V");

                        printf("\nQual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i++;
                        certo(nome);
                        }
                        else {
                             e ++;
                         errado(nome);
                        }
                        cont++;
                        r++;
                        system("pause");
                        system("cls");
                        break;
                        case 8:
                       printf("\n8- Todo processador trabalhar com 2 ciclo fundamentais que � o de instru��o e o de\nexecu��o. Assim que se liga o computador se inicia o ciclo de instru��o\npara logo em seguida come�ar o ciclo de execu��o e volta\npara o de ciclo de instru��o continuando assim ate que se finaliza.\nO ciclo de instru��o pose simplifica em cinco parte: busca da\ninstru��o, codificador da instru��o, busca do operando, a execu��o da opera��o,\narmazenamento do resultado.\n");

                       printf("\nConsiderando as informa��es acima, avalie as afirma��es a seguir:");

                       printf("\nI. Podemos afirmar que o ciclo de busca � o calculo do endere�o da instru��o,\na busca da instru��o e a codificador da instru��o");
                       printf("\nII. N�o precisa acessar a memoria para fazer o ciclo de instru��o.");
                       printf("\nIII. O registrador acumulador n�o � usado no ciclo de instru��o.");
                       printf("\nIV. No ciclo de busca usa-se os registradores MAR , MBR ,PC e IR.");
                       printf("\nV. A memoria � acessada com as a��es de calculando a instru��o no\nendere�o da memoria, buscando a instru��o e codificando a instru��o.\nE a entrada de dados seria o calculando o endere�o do operando,\nbusca do operando e execu��o da opera��o e a sa�da de dado\nseria calculando o endere�o do resultado e registrando na memoria o resultado.\n");

                       printf("\n� correto o que se afirma em:\n");
                       printf("\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I,IV e V apenas");


                        printf("\nQual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++ ;
                        certo(nome);

                        }
                        else {
                           e ++;
                         errado(nome);
                        }
                        cont++;
                        r++;
                        system("pause");
                        system("cls");
                        break;
                        case 9:
                       printf("\n9- A diferen�a da linguagem formal e informal est� no contexto em que elas s�o\nutilizadas e na escolha das palavras e express�es usadas para comunicar.\nA linguagem formal � aquela que usamos em situa��es mais formais, sendo\nmarcada pelo uso da norma culta. A linguagem informal � utilizada em situa��es\nmais descontra�das, quando existe uma familiaridade entre os interlocutores.");
                       printf("\n\t\tDIANA, Daniela, Linguagem formal e linguagem informal.");

                       printf("\nSobre o texto acima, avalie as afirma��es a seguir:");

                       printf("\nI. Na linguagem formal n�o � necess�rio o uso da norma culta, sendo comum\no uso de g�rias e coloquialismos.");
                       printf("\nII. Uso de palavras abreviadas, como vc, c� e t� � muito comum na linguagem\ncoloquial");
                       printf("\nIII. A pron�ncia correta e clara das palavras � uma caracter�stica da linguagem\ncoloquial.");
                       printf("\nIV. Uma caracter�stica da linguagem formal � a utiliza��o da norma culta,\nrespeitando rigorosamente as normas gramaticais.");
                       printf("\nV. Em situa��es que exigem mais seriedade � usada a norma culta.\n");

                       printf("\n� correto o que se afirma em:\n");
                       printf("\nA)I e V apenas\nB) I, II e III, apenas\nC)I, III e IV, apenas\nD)II, IV e V apenas\nE)I, II, III, IV e V\n");

                        printf("\nQual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i++;
                            certo(nome);
                        }
                        else {
                             e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                        system("pause");
                        system("cls");
                        break;

                   case 10:
                   printf("10- Em um sinal existem elementos cruciais como frequ�ncia e per�odos.\nPer�odo � o tempo necess�rio para completar um ciclo\n");
                   printf("e frequ�ncia � quantos per�odos dentro de um segundo medido em hertz.\nDado uma onda de frequ�ncia 20khz10^3 pode se afirmar que.\n\n\n");
                   printf("I-\tO per�odo � 0,05ms10^-3.\n\n\n");
                   printf("\t\tPORQUE\n\n\n");
                   printf("II-\tOs dois s�o diretamente proporcionais.\n\n");
                   printf("A respeito dessas asser��es, assinale a op��o correta.\n\n");
                   printf("A)As asser��es I e II s�o proposi��es verdadeiras,\ne a II � uma justificativa correta da I.\n");
                   printf("B)As asser��es I e II s�o proposi��es verdadeiras,\nmas a II n�o � uma justificativa correta da I.\n");
                   printf("C)A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o verdadeira.\n");
                   printf("D)A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.\n");
                   printf("E)As asser��es I e II s�o proposi��es falsas.\n");

                   printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;

                   case 11:
                    printf("11- A Intelig�ncia artificial AI � importante porque aborda problemas\nprofundamente dif�ceis e as solu��es para esses problemas");
                    printf(" podem ser aplicadas a\nsetores importantes para o bem-estar humano desde sa�de, educa��o e com�rcio\n");
                    printf("at� transporte, servi�os p�blicos e entretenimento.Desde a d�cada de 1950\n");
                    printf("a pesquisa da AI se concentrou em cinco campos de investiga��o.\n\n\n");
                    printf("I-a capacidade de resolver problemas atrav�s de dedu��o l�gica\n\n");
                    printf("II-a capacidade de representar conhecimento sobre o mundo (o entendimento de\nque existem certas entidades, eventos e situa��es no mundo, de que esses\nelementos t�m propriedades e que os elementos podem ser categorizados.)\n\n");
                    printf("III-a capacidade de definir e atingir metas (h� um estado\nespec�fico no futuro do mundo que � desej�vel e sequ�ncias\nde a��es podem ser realizadas para conseguir progressos neste\nsentido.)\n\n");
                    printf("IV-a capacidade de entender a linguagem escrita e falada.\n\n");
                    printf("V-a capacidade de deduzir coisas sobre o mundo a partir de imagens,\nsons e outros est�mulos sensoriais.\n\n");
                    printf("Quais s�o estes campos de investiga��o:\n");
                    printf("A) Racioc�nio, Planejamento, Conhecimento, Fidelidade e Respeito.\n");
                    printf("B) Racioc�nio, Planejamento,Respeito,Comunica��o e Conhecimento.\n");
                    printf("C) Percep��o, Comunica��o, Planejamento,Conhecimento e Racioc�nio.\n");
                    printf("D) Percep��o, Comunica��o, Respeito, Fidelidade e Racioc�nio.\n");
                    printf("E) Respeito, Planejamento, Percep��o, Comunica��o e Fidelidade.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 12:
                    printf("12- Na hora de fazer reda��o ou slogan ,as pontua��o devem ser usadas\nem seu devidos lugares,");
                    printf("pois se usadas nos lugares errados, as mensagens\ndo remetente sai distorcida para o seu destinat�rio.\n");
                    printf("Entre elas a v�rgula, se empregada n�o em seu lugar exato, a mensagem\nn�o sai com a inten��o devida que o remetente quis passar.\n");
                    printf("Agora imagine isso nas propagandas, que � essencial o uso \ncorreto da gram�tica.");
                    printf("Pois tem que expor as qualidade do produto\ne assim desperta desejos do cliente sobre o produto,\n");
                    printf("para concretizar a venda isso s� � poss�vel com uma boa comunica��o\npara uma boa comunica��o a gram�tica tem que estar afiada .\n\n\n");
                    printf("Depois de analisar o texto acima ,qual das frases abaixo\nque as v�rgulas est�o em seu lugares errados.\n\n\n");
                    printf("A) As pessoas, em casa, est�o medrosas por causa do corona-v�rus.\nB) Medrosas, as pessoas est�o, em casa, por causado corona-v�rus.\n");
                    printf("C) As pessoas est�o medrosas por causa do corona-v�rus, em casa.\nD) As pessoas est�o medrosas, em casa, por cousa do corona-v�rus.\n");
                    printf("E) Em casa, as pessoas, est�o, medrosas, por causa do corona v�rus.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 13:
                    printf("13- A transmiss�o banda-base requer que tenhamos um canal passa-baixa\num canal com largura de banda que come�a em zero.\n");
                    printf("Este � o caso se tivermos um meio de transmiss�o dedicado com toda\nlargura de banda alocada em apenas um canal.\n");
                    printf("A transmiss�o banda larga, ou modula��o, significa transformar o sinal\ndigital em sinal anal�gico para transmiss�o. A modula��o nos permite usar um\n");
                    printf("canal passa-faixa um canal com largura de banda que n�o se inicie em zero.\nEsse tipo de canal � mais dispon�vel que um canal de passa-baixa.");
                    printf("\n\nFonte :COMUNICA��O DE DADOS E REDES DE COMPUTADORES autor Behrouz A. Forouzan\n\n");
                    printf("Sobre o texto acima, avalie as afirma��es e responda seguir:\nA voz humana Modula v�rios sinais e os manda pelo ar.\n");
                    printf("Sabendo disso trata-se de uma transmiss�o banda-base ou de banda-larga?\n");
                    printf("A)Banda-base, pois � modula��o de sinais.\nB)Banda-larga ,pois n�o tem modula��o de sinais.\nC)Banda-larga ,pois � modula��es de sinais.\n");
                    printf("D) Por ser um sinal digital ele � largura de banda\nE)Banda-base ,pois n�o a muito varia��o de sinal\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 14:
                    printf("14- Nos Circuitos combinacionais o sinal de sa�da depende �nica\ne exclusivamente das combina��es dos sinais de entrada.\n");
                    printf("Considerando a afirma��o acima e os seus conhecimentos,\navalie as afirma��es a seguir:\n");
                    printf("\nI. A porta l�gica AND (E) fornece na sa�da o valor l�gico 1 apenas quando\ntodas as entradas tamb�m tiverem o n�vel l�gico igual a 1\n");
                    printf("II. A Porta NOT ou inversora � uma porta l�gica que\nimplementa a nega��o l�gica\n");
                    printf("III. A porta l�gica OR (OU), � uma opera��o l�gica entre dois ou mais\noperandos que resulta em um valor l�gico falso se, e somente se, todos os\noperandos tiverem um valor falso.\n");
                    printf("IV. XOR (OU exclusivo) � uma opera��o l�gica entre dois operandos que\nresulta em um valor l�gico verdadeiro se e somente se os dois operandos\nforem diferentes, ou seja, se um for verdadeiro e o outro for falso\n");
                    printf("V. O NOR � um operador booleano l�gico que � resultado\nda nega��o do operador OR.");
                    printf("\n\n� correto o que se afirma em:\nA) I,II,III e IV apenas\nB) II e III, apenas\nC) Ie IV, apenas\nD) II e V, apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 15:
                    printf("15- Endomarketing pode ser entendido como o Marketing voltado para as a��es\ndentro da empresa, tamb�m conhecido como Marketing Interno.\n");
                    printf("O termo Endo � oriundo do grego Endus e significa para\ndentro, logo seu conceito � definido como:\n");
                    printf("o estudo das necessidades e desejos dos consumidores.");
                    printf("\n\nFONTE: https://novaescolademarketing.com.br/o-que-e-endomarketing/\n\n");
                    printf("Sobre o texto acima avalie as afirma��es a seguir:\nI. Endomarketing � a propaganda fora da empresa para a sociedade.\n");
                    printf("II. Endomarketing � a forma como a sociedade enxerga a empresa\nIII. Endomarketing � a propaganda interna da empresa\n");
                    printf("IV. Endomarketing est� limitada apenas aos funcion�rios.\nV. Endomarketing est� limitada apenas aos clientes.\n");
                    printf("� correto oque se afirma em:\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) III apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 16:
                    printf("16- A transmiss�o e comunica��o entre computadores utiliza\no sinal digital sendo necess�rio trabalhar comunica��o entre\ncomputadores utilizando o digital-digital.\n");
                    printf("Existem padr�es para ter uma transmiss�o e recep��o de dados\neficientes � necess�rio uma auto sincroniza��o dentre\nos m�todos de sinal digital.\n");
                    printf("\n\nDentre esses padr�es de comunica��o digital-digital avalie quais est�o corretos.\n\n");
                    printf("I-NRZ(Voltagem positiva define 1 bit e voltagem negativa 0)\nII-NRZ-L-I(A mudan�a ou falta de mudan�a no n�vel da voltagem\ndetermina o valor do bit)\n");
                    printf("III-AMI pseudoternario (O bit 1 � codificado com voltagem\nalternativa e 0 voltagem constante)\nIV-MULTINIVEL (Objetivo � aumentar a taxa de dados diminuindo a velocidade)\n");
                    printf("V-MULTILINHA MLT-3(A varia��o de voltagem define zero e a constante define 1)\n");
                    printf("\n\n� correto o que se afirma em:\n\nA) I e II, apenas \nB) II e III, apenas\nC) III e IV, apenas \nD) II, III e V, apenas \nE) I, II, III, IV e V\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 17:
                    printf("17- Em projetos envolvendo sistemas l�gicos com binacionais,\npara chegar ao circuito final, s�o necess�rios seguir 3 passos:\n");
                    printf("\n\n1� Montar a tabela verdade;\n2�Determinar a express�o l�gica a partir da tabela;\n3�Determinar o circuito l�gico correspondente ao projeto.\n\n");
                    printf("Considerando a afirma��o acima e os seus conhecimentos,\navalie as afirma��es a seguir:\n");
                    printf("I- A tabela verdade corresponde �s sa�das de um sistema\npara todas as combina��es de entrada\nII- Podemos montar o circuito l�gico correspondente a equa��o\ndeterminada a partir da tabela verdade.\n");
                    printf("III- Podemos definir o n�mero de combina��es atrav�s da seguinte\nopera��o n^2 -> onde n � o n�mero de entradas do sistema.\n");
                    printf("IV- Nas colunas de entrada, da esquerda para a direita, sempre\ncome�amos pelo n�mero 1 e a partir da� completamos\nas demais colunas com m�ltiplos de 2.\n");
                    printf("V- A tabela verdade relaciona todas as poss�veis combina��es para os\nn�veis l�gicos presentes nas entradas.\n");
                    printf("\n\n� correto o que se afirma em:\n\nA) I,II, IV e V apenas\nB) II , III e V apenas\nC) I e IV, apenas\n");
                    printf("D) II,IV e V, apenas\nE) I, II, III, IV e V ");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;
                    case 18:
                    printf("18- Durante a historia da humanidade a comunica��o sempre se fez presente seja\nentre as pessoas na sociedade, entre sociedades distintas ou mesmo\nescrituras que at� hoje s�o");
                    printf("descobertas e estudadas.\nNa atualidade com o avan�o da tecnologia os computadores\npermitem a intera��o global de forma pr�tica e r�pida podemos dizer com\ntranquilidade");
                    printf("que nasceu uma nova forma de comunica��o que vem ganhando peso\ne as pessoas que n�o se adequarem a essa nova forma ser�o obsoletas.\n");
                    printf("\n\nConsiderando as informa��es acima, avalie as asser��es a seguir e a rela��o proposta entre elas.\n\n");
                    printf("I - N�o existe um sociedade sem comunica��o\n\t\tPORQUE\nII - A intera��o entre as pessoas que forma uma sociedade.\n\n");
                    printf("A) As asser��es I e II s�o proposi��es verdadeiras, e a II � uma\njustificativa correta da I.\nB) As asser��es I e II s�o proposi��es verdadeiras, mas a II n�o\n� uma justificativa correta da I.\n");
                    printf("C) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa\nD) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira\n");
                    printf("E) As asser��es I e II s�o proposi��es falsas\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    cont++;
                    r++;
                    system("pause");
                    system("cls");
                    break;

                    case 19:
                    printf("19- A transmiss�o de dados digital-digital se faz extremamente\nimportante para comunica��o de computadores, atrav�s dessa transmiss�o\ndos computadores podem trocar dados e");
                    printf(" informa��es importante, oque  tamb�m\nresulta no desenvolvimento de empresas e qualidade do trabalho\nal�m do usa domestico.\n");
                    printf("\n\nConsiderando as informa��es acima, avalie as asser��es a seguir\ne a rela��o proposta entre elas\n");
                    printf("I-Os componentes DC podem atrapalhar a transmiss�o de dados digital-digital\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-� gerando um campo eletromagn�tico que corrompe a mensagem.\n\n");
                    printf("A) As asser��es I e II s�o proposi��es verdadeiras, e a II � uma\njustificativa correta da I.\n");
                    printf("B) As asser��es I e II s�o proposi��es verdadeiras, mas a II n�o\n� uma justificativa correta da I.\n");
                    printf("C) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa.\n");
                    printf("D) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.\n");
                    printf("E) As asser��es I e II s�o proposi��es falsas.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                    system("pause");
                    system("cls");
                    break;

                    case 20:
                    printf("20- O termo Hierarquia de mem�ria se refere a uma classifica��o de\ntipos de mem�ria em fun��o de desempenho.\nEssa classifica��o geralmente segue duas dimens�es:\n");
                    printf("tamanho/capacidade e velocidade de acesso, sendo tradicionalmente\nrepresentada por uma pir�mide. A base da pir�mide representa dispositivos\nde armazenamentode massa,");
                    printf("de baixo custo por byte e, comparativamente,\nbaixa velocidade de acesso. O pre�o acess�vel faz com que esse tipo de\narmazenamento esteja dispon�vel em grandes");
                    printf(" volumes. Um exemplo � o DVD.\n");
                    printf("No topo da pir�mide encontram-se dispositivos extremamente velozes e, ao mesmo\ntempo, de custo elevado. Exemplo s�o c�lulas de mem�ria 6T usadas na constru��o\n");
                    printf("de mem�ria cache. Devido ao alto pre�o, esse tipo de mem�ria\n� utilizado em pequena quantidade nas m�quinas.\n");
                    printf("\n\t\tFonte: https://pt.wikipedia.org/wiki/Hierarquia_da_mem%C3%B3ria\n\n");
                    printf("Considerando as informa��es acima, avalie as asser��es\na seguir e a rela��o proposta entre elas.\n");
                    printf("I-Quanto mais perto do topo da pir�mide maior o custo e a velocidade de acesso\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-E menor  a capacidade\n\n");
                    printf("A) As asser��es I e II s�o proposi��es verdadeiras, e a II �\numa justificativa correta da I.\n");
                    printf("B) As asser��es I e II s�o proposi��es verdadeiras, mas a II n�o\n� uma justificativa correta da I.\n");
                    printf("C) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa.\n");
                    printf("D) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.\n");
                    printf("E) As asser��es I e II s�o proposi��es falsas.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                    system("pause");
                    system("cls");
                    break;

                    case 21:
                    printf("21- A administra��o do tempo se mostra essencial para uma melhor qualidade\nde vida e efici�ncia dos resultados pretendidos. Os grande empres�rios\ntrabalham com organiza��o");
                    printf("do tempo contando com hor�rios de descanso, trabalhos, lazer.J� � comprovado por artigos acad�micos a melhora de qualidade de vida\nsomente de administrar melhor o tempo.\n");
                    printf("\n\nSobre o texto acima, avalie as afirma��es a seguir:\n\n");
                    printf("I � Administra��o do tempo melhora a qualidade do trabalho.\nII � Pessoas com o tempo organizado s�o mais estressadas\nIII � Usar a organiza��o do tempo exige auto controle\n");
                    printf("IV � Organiza��o do tempo faz o trabalho ficar mais tedioso\nV � Usar a organiza��o de tempo melhora a sa�de f�sica e mental \n");
                    printf("A) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas \nD) I, III e V, apenas\nE) I, II, III, IV e V\n");


                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        cont++;
                        r++;
                    system("pause");
                    system("cls");
                    break;

                }
            }
            /*Chamar fun��o tabela com 3 variaveis coq (ordem das quet�es)
            nome (o nome do usuario a ser imprimido
            certa resposta a ser comparada para verificar se a resposta do usuario est� correta
            resp resposta escolhida pelo usuario*/
            resultado(i,e,nome);
            break;
            //Esse case � a segundo op��o para quest�es seguidas
            case 2:
            printf("\n1- Um switch de endere�o IP 192.168.63.2\nrecebe uma mensagem do endere�o IP 192.168.63.5\npara ser entregue ao endere�o IP 192.168.45.8\nQual ser� aproxima a��o do switch?");
            printf("\nA)Retornar a mensagem ao remetente. \nB)Enviar a mensagem ao roteador. \nC)Enviar a mensagem para o destinat�rio. \nD)Duplicar a mensagem e enviar para o destinat�rio e o remetente. \nE)Armazena a mensagem e destru�-la.\n");
            printf("\nQual � sua resposta :");
            scanf("%s", resp[r]);

            while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                printf("Informe a resposta dentro das op��es.\n");
                scanf("%s", resp[r]);
            }

            if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                i++;
                certo(nome);
            }

            else{
                e++;
                errado(nome);
            }
            r++;

            system("pause");
            system("cls");

                printf("2- John vonNeumann prop�s a id�ia que transformou os calculadores eletr�nicos\nem �c�rebros eletr�nicos �:modelar a arquitetura do computador segundo \no sistema nervoso central.\n");
                printf("Para isso, eles teriam que ter tr�s caracter�sticas:\n1.Codificar as instru��es de uma forma poss�vel de ser armazenada na mem�ria do computador. Von Neumann sugeriu que fossem usados uns e zeros. \n2.Armazenar as instru��es na mem�ria, bem com o toda e qualquer informa��o\nnecess�ria a execu��o da tarefa. \n3.Quando processar o programa, buscar as instru��es diretamente na mem�ria,\nao inv�s  de lerem um novo cart�o perfurado a cada passo.\n");
                printf("Este � o conceito de programa armazenado, cujas principais vantagens s�o:\nrapidez, versatilidade e auto modifica��o.\nAssim, o computador program�vel que conhecemos hoje, onde o programa \ne os dados est�o armazenados na mem�ria ficou conhecido como\nArquitetura de von Neumann.");
                printf("\n\n\t\t\tFONTE:UNESP Computadores historia e arquitetura.\n\n");
                printf("Sobre o texto acima, avalie as afirma��es a seguir:");


                printf("\nI � Von Neumann prop�s que o computador n�o precisa de memoria.");
                printf("\nII � Von Neumann prop�s que � desnecess�rio busca  a instru��o direta\nna memoria para a rapidez do processamento.");
                printf("\nIII - Von Neumann sugeriu que fossem usados uns e zeros.\nPara Codificar as instru��es de uma forma poss�vel de ser armazenada\nna mem�ria do computador.");
                printf("\nIV �Ent�o a vis�o simplifica de von neumann seria:\nmemoria principal ,unidade de controle ,unidade logico\ne aritm�tica e unidade de entrada e sa�da.");
                printf("\nv- Von Neumann  disse que o computador n�o fuciona bem com uns e zeros.\n");


                printf("� correto o que se afirma em:\n");
                printf("A) I e II, apenas\n");
                printf("B) II e III, apenas\n");
                printf("C) III e IV, apenas\n");
                printf("D) II, III e V, apenas\n");
                printf("E) I, II, III, IV e V\n");
                printf("Qual � sua resposta:\t");
                scanf("%s", resp[r]);

                while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                    printf("Informe a resposta dentro das op��es.\n");
                    scanf("%s", resp[r]);
                }

                if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                    i++;
                    certo(nome);
                }
                else{
                     e ++;
                         errado(nome);
                }
                r++;
                system("pause");
                system("cls");



                    printf("3- O surto do corona v�rus obrigou as pessoas h� ficarem em casa,\nno entanto a quem use esse tempo para novos projetos.\nA competi��o de seguran�a PWn20Wn re�ne especialistas em programa��o\npara encontrarem falhas nos programas onde � organizada por acesso remoto.\nOs vencedores ganharam 270 mil d�lares equivalente a 1,35 milh�es\ne s�o incentivados pelas grandes empresas de tecnologia.\n");
                    printf("Considerando as informa��es acima, avalie as asser��es a seguir e a rela��o\nproposta entre elas.");
                    printf("\nI- A disserta��o acima usa de fun��o de linguagem referencial.\n");
                    printf("\n\t\t\tPORQUE\n");
                    printf("\nII- Informa os sentimentos dos participantes da competi��o.\n");

                    printf("\nA respeito dessas asser��es, assinale a op��o correta. ");
                    printf("\nA) As asser��es I e II s�o proposi��es verdadeiras, e a II\n� uma justificativa correta da I.");
                    printf("\nB) As asser��es I e II s�o proposi��es verdadeiras, mas a II\nn�o � uma justificativa correta da I.");
                    printf("\nC) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa.");
                    printf("\nD) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.");
                    printf("\nE) As asser��es I e II s�o proposi��es falsas.\n");
                    printf("Qual � sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                        i++;
                    certo(nome);
                    }
                    else {
                        e ++;
                         errado(nome);
                    }
                    r++;
                    system("pause");
                    system("cls");

                    printf("\n4- O surgimento das redes de computadores com certeza representou\numa grande evolu��o para as pessoas e empresas,trazendo diversos beneficios.\n");
                    printf("Entre eles, destacam-se a possibilidade de troca de informa��es\nentre diferentes usu�rios, o compartilhamento de recursos computacionais,\n");
                    printf("conectar a sede e as filiais de uma empresa e, principalmente,\nter acesso � internet,t�o presente em nosso cotidiano.\n");
                    printf("\nPor VINICIUS Voc� conhece os principais tipos de redes de computadores?\n\t\t\t\t\tCONFIRA!04 JULHO 2018.\n\n");
                    printf("\nDe acordo com o texto acima e com seus conhecimentos marque a op��o correta:\n\n");

                    printf("A)Empresas mundiais usam geralmente duas redes de comunica��o\nLAN para redes locais � MAN para redes globais.\n");
                    printf("B)A WAN tem um grande alcance e permite conectar redes locais ou metropolitanas umas �s outras.\n");
                    printf("C)A WAN � geralmente usada para conectar dispositivos dentro de uma cidade.\n");
                    printf("D)RAN � usada para conectar dispositivos com fones de ouvido,mouse,etc...\n");
                    printf("E)WAN, LAN, MAN s�o exatamente o mesmo tipo de conex�o.\n");
                    printf("Qual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                        certo(nome);
                    }
                    else {
                         e ++;
                         errado(nome);
                    }
                    r++;
                    system("pause");
                    system("cls");

                    printf("\n5- A diferen�a entre hardware e software � uma d�vida\nrecorrente entre os usu�rios que n�o tem tanto conhecimento sobre dispositivos\n");
                    printf("tecnol�gicos como computadores desktops, notebooks, tablets, entre outros.\nPara contextualizar, em primeiro lugar, � importante ressaltar\n");
                    printf("que todos os computadores s�o uma combina��o entre hardware e software.\nOu seja, estes itens trabalham em conjunto em uma m�quina, e n�o isoladamente\n");
                    printf("como costumam ser imaginados tradicionalmente.\n");
                    printf("\nAfinal qual � a diferen�a entre hardware e software?\n\nEncontra-se em:https://netsupport.com.br/blog/diferenca-entre-hardware-e-software/n/n");
                    printf("De acordo com o texto acima e seus conhecimentos sobre software e hardware\n\nQuais alternativas est�o corretas.\n\n");

                    printf("I-	S�o exemplos de software Windows, Linux, Android e IOS.\n\n");
                    printf("II-	Mouse, teclado, monitor s�o considerados hardware.\n\n");
                    printf("III-	Os computadores s�o uma jun��o de software\n(IOS, Bluetooth, chromebit.) e hardware (monitor, teclado, winrar).\n\n");
                    printf("IV-	O hardware corresponde aos componentes f�sicos do computador,\nou seja, s�o as pe�as e aparatos eletr�nicos que,\nao se conectarem, fazem o equipamento funcionar.\n\n");
                    printf("V-	 Um software pode ser aplicado para qualquer situa��o em que um\nconjunto de algoritmos � executado para a obten��o de resultados.\n\n");


                    printf("A) I e II\n");
                    printf("B) I, II, III, IV\n");
                    printf("C) II, IV, V\n");
                    printf("D) I, II, IV, V\n");
                    printf("E) IV e V\n");
                    printf("Qual � sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                        i++;
                    certo(nome);
                    }
                    else {
                         e ++;
                         errado(nome);
                    }
                    system("pause");
                    system("cls");
                    r++;

                    printf("\n6- Ao longo da evolu��o da humanidade foi necess�rio a comunica��o entre seres\npara conviv�ncia em sociedade.\n");
                    printf("Conforme evoluem se melhora as formas de comunica��o criando meios mais\neficientes,r�pidos, e de longo alcance com a internet.\n");
                    printf("� evidente, ent�o que sempre foi essencial a comunica��o\npara a humanidade e at� hoje um bom comunicador pode fazer a diferen�a\n");
                    printf("abrir e fechar portas.\nIndependente da �poca h� fatores em comum nas formas de comunica��o\ns�o os chamados elementos de comunica��o\n");
                    printf("\nEscolha a alternativa com os elementos de comunica��o corretos.\n\n");

                    printf("A)Referente, canal, c�digo, receptor.\n");
                    printf("B)Internet, e-mail, whatsapp, computador, servidor.\n");
                    printf("C)Referente, emissor, receptor, canal, mensagem, c�digo.\n");
                    printf("D)Emissor, receptor, canal, mensagem.\n");
                    printf("E)Jornal, revista, internet, televis�o, r�dio.\n");
                    printf("Qual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                        i++;
                    certo(nome);
                    }
                    else {
                        e ++;
                         errado(nome);
                    }
                    r++;
                    system("pause");
                    system("cls");

                        printf("\n7- A comunica��o de dados se tornou crucial em grandes empresas, a mesma\nmultinacional tem pontos no Brasil e em Tokyo ou diversas outros pa�ses, sendo\nt�o importante n�o podemos esquecer que essa comunica��o tem limites.\nNa perda de transmiss�o existe formas diferentes para\nisso observe as informa��es abaixo.\n");

                        printf("\n� correto o que se afirma em:");
                        printf("\nI- Distor��o � a perda da forma original do sinal composto, pela diferen�a de\nvelocidade das ondas senoidais que o formam.");
                        printf("\nII- Atenua��o � a perda de energia ou seja amplitude da onda para vencer a\nresist�ncia do meio.");
                        printf("\nIII- A fibra optica � o �nico meio de transmiss�o\nque usa toda a velocidade da luz.");
                        printf("\nIV- Ru�do � a perda de for�a do sinal pela resist�ncia do meio.");
                        printf("\nV- Outros aparelhos podem interferir no sinal como maquinas el�tricas.\n");

                        printf("\nA)I, II, e V apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I, II, III, IV e V");

                        printf("\nQual � a resposta:\t");
                        scanf(" %s", &resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i++;
                        certo(nome);
                        }
                        else {
                             e ++;
                         errado(nome);
                        }
                        r++;
                        system("pause");
                        system("cls");

                        printf("\n8- Todo processador trabalhar com 2 ciclo fundamentais que � o de instru��o e o de execu��o. Assim que se liga o computador se inicia o ciclo de\ninstru��o para logo em seguida come�ar o ciclo de execu��o e volta\npara o de ciclo de instru��o continuando assim ate que se finaliza.\nO ciclo de instru��o pose simplifica em cinco parte: busca da\ninstru��o, codificador da instru��o, busca do operando, a execu��o da opera��o,\narmazenamento do resultado.\n");

                       printf("\nConsiderando as informa��es acima, avalie as afirma��es a seguir:");

                       printf("\nI. Podemos afirmar que o ciclo de busca � o calculo do endere�o da instru��o,\na busca da instru��o e a codificador da instru��o");
                       printf("\nII. N�o precisa acessar a memoria para fazer o ciclo de instru��o.");
                       printf("\nIII. O registrador acumulador n�o � usado no ciclo de instru��o.");
                       printf("\nIV. No ciclo de busca usa-se os registradores MAR , MBR ,PC e IR.");
                       printf("\nV. A memoria � acessada com as a��es de calculando a instru��o no\nendere�o da memoria, buscando a instru��o e codificando a instru��o.\nE a entrada de dados seria o calculando o endere�o do operando,\nbusca do operando e execu��o da opera��o e a sa�da de dado\nseria calculando o endere�o do resultado e registrando na memoria o resultado.\n");

                       printf("\n� correto o que se afirma em:\n");
                       printf("\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I,IV e V apenas");


                        printf("\nQual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                         i ++ ;
                        certo(nome);

                        }
                        else {
                           e ++;
                         errado(nome);
                        }
                        system("pause");
                        system("cls");
                        r++;

                        printf("\n9- A diferen�a da linguagem formal e informal est� no contexto em que elas s�o\nutilizadas e na escolha das palavras e express�es usadas para comunicar.\nA linguagem formal � aquela que usamos em situa��es mais formais, sendo\nmarcada pelo uso da norma culta. A linguagem informal � utilizada em situa��es\nmais descontra�das, quando existe uma familiaridade entre os interlocutores.");
                       printf("\n\t\tDIANA, Daniela, Linguagem formal e linguagem informal.");

                       printf("\nSobre o texto acima, avalie as afirma��es a seguir:");

                       printf("\nI. Na linguagem formal n�o � necess�rio o uso da norma culta, sendo comum\no uso de g�rias e coloquialismos.");
                       printf("\nII. Uso de palavras abreviadas, como vc, c� e t� � muito comum na linguagem\ncoloquial");
                       printf("\nIII. A pron�ncia correta e clara das palavras � uma caracter�stica da linguagem\ncoloquial.");
                       printf("\nIV. Uma caracter�stica da linguagem formal � a utiliza��o da norma culta,\nrespeitando rigorosamente as normas gramaticais.");
                       printf("\nV. Em situa��es que exigem mais seriedade � usada a norma culta.\n");

                       printf("\n� correto o que se afirma em:\n");
                       printf("\nA)I e V apenas\nB) I, II e III, apenas\nC)I, III e IV, apenas\nD)II, IV e V apenas\nE)I, II, III, IV e V\n");

                        printf("\nQual � a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das op��es.\n");
                            scanf("%s", resp[r]);
                        }

                        if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i++;
                            certo(nome);
                        }
                        else {
                             e ++;
                            errado(nome);
                        }
                        r++;
                        system("pause");
                        system("cls");

                    printf("10- Em um sinal existem elementos cruciais como frequ�ncia e per�odos.\nPer�odo � o tempo necess�rio para completar um ciclo\n");
                   printf("e frequ�ncia � quantos per�odos dentro de um segundo medido em hertz.\nDado uma onda de frequ�ncia 20khz10^3 pode se afirmar que.\n\n\n");
                   printf("I-\tO per�odo � 0,05ms10^-3.\n\n\n");
                   printf("\t\tPORQUE\n\n\n");
                   printf("II-\tOs dois s�o diretamente proporcionais.\n\n");
                   printf("A respeito dessas asser��es, assinale a op��o correta.\n\n");
                   printf("A)As asser��es I e II s�o proposi��es verdadeiras,\ne a II � uma justificativa correta da I.\n");
                   printf("B)As asser��es I e II s�o proposi��es verdadeiras,\nmas a II n�o � uma justificativa correta da I.\n");
                   printf("C)A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o verdadeira.\n");
                   printf("D)A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.\n");
                   printf("E)As asser��es I e II s�o proposi��es falsas.\n");

                   printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;

                    system("pause");
                    system("cls");

                    printf("11- A Intelig�ncia artificial AI � importante porque aborda problemas\nprofundamente dif�ceis e as solu��es para esses problemas");
                    printf(" podem ser aplicadas a\nsetores importantes para o bem-estar humano desde sa�de, educa��o e com�rcio\n");
                    printf("at� transporte, servi�os p�blicos e entretenimento.Desde a d�cada de 1950\n");
                    printf("a pesquisa da AI se concentrou em cinco campos de investiga��o.\n\n\n");
                    printf("I-a capacidade de resolver problemas atrav�s de dedu��o l�gica\n\n");
                    printf("II-a capacidade de representar conhecimento sobre o mundo (o entendimento de\nque existem certas entidades, eventos e situa��es no mundo, de que esses\nelementos t�m propriedades e que os elementos podem ser categorizados.)\n\n");
                    printf("III-a capacidade de definir e atingir metas (h� um estado\nespec�fico no futuro do mundo que � desej�vel e sequ�ncias\nde a��es podem ser realizadas para conseguir progressos neste\nsentido.)\n\n");
                    printf("IV-a capacidade de entender a linguagem escrita e falada.\n\n");
                    printf("V-a capacidade de deduzir coisas sobre o mundo a partir de imagens,\nsons e outros est�mulos sensoriais.\n\n");
                    printf("Quais s�o estes campos de investiga��o:\n");
                    printf("A) Racioc�nio, Planejamento, Conhecimento, Fidelidade e Respeito.\n");
                    printf("B) Racioc�nio, Planejamento,Respeito,Comunica��o e Conhecimento.\n");
                    printf("C) Percep��o, Comunica��o, Planejamento,Conhecimento e Racioc�nio.\n");
                    printf("D) Percep��o, Comunica��o, Respeito, Fidelidade e Racioc�nio.\n");
                    printf("E) Respeito, Planejamento, Percep��o, Comunica��o e Fidelidade.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                    r++;
                    system("pause");
                    system("cls");

                    printf("12- Na hora de fazer reda��o ou slogan ,as pontua��o devem ser usadas\nem seu devidos lugares,");
                    printf("pois se usadas nos lugares errados, as mensagens\ndo remetente sai distorcida para o seu destinat�rio.\n");
                    printf("Entre elas a v�rgula, se empregada n�o em seu lugar exato, a mensagem\nn�o sai com a inten��o devida que o remetente quis passar.\n");
                    printf("Agora imagine isso nas propagandas, que � essencial o uso \ncorreto da gram�tica.");
                    printf("Pois tem que expor as qualidade do produto\ne assim desperta desejos do cliente sobre o produto,\n");
                    printf("para concretizar a venda isso s� � poss�vel com uma boa comunica��o\npara uma boa comunica��o a gram�tica tem que estar afiada .\n\n\n");
                    printf("Depois de analisar o texto acima ,qual das frases abaixo\nque as v�rgulas est�o em seu lugares errados.\n\n\n");
                    printf("A) As pessoas, em casa, est�o medrosas por causa do corona-v�rus.\nB) Medrosas, as pessoas est�o, em casa, por causado corona-v�rus.\n");
                    printf("C) As pessoas est�o medrosas por causa do corona-v�rus, em casa.\nD) As pessoas est�o medrosas, em casa, por cousa do corona-v�rus.\n");
                    printf("E) Em casa, as pessoas, est�o, medrosas, por causa do corona v�rus.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("13- A transmiss�o banda-base requer que tenhamos um canal passa-baixa\num canal com largura de banda que come�a em zero.\n");
                    printf("Este � o caso se tivermos um meio de transmiss�o dedicado com toda\nlargura de banda alocada em apenas um canal.\n");
                    printf("A transmiss�o banda larga, ou modula��o, significa transformar o sinal\ndigital em sinal anal�gico para transmiss�o. A modula��o nos permite usar um\n");
                    printf("canal passa-faixa um canal com largura de banda que n�o se inicie em zero.\nEsse tipo de canal � mais dispon�vel que um canal de passa-baixa.");
                    printf("\n\nFonte :COMUNICA��O DE DADOS E REDES DE COMPUTADORES autor Behrouz A. Forouzan\n\n");
                    printf("Sobre o texto acima, avalie as afirma��es e responda seguir:\nA voz humana Modula v�rios sinais e os manda pelo ar.\n");
                    printf("Sabendo disso trata-se de uma transmiss�o banda-base ou de banda-larga?\n");
                    printf("A)Banda-base, pois � modula��o de sinais.\nB)Banda-larga ,pois n�o tem modula��o de sinais.\nC)Banda-larga ,pois � modula��es de sinais.\n");
                    printf("D) Por ser um sinal digital ele � largura de banda\nE)Banda-base ,pois n�o a muito varia��o de sinal\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("14- Nos Circuitos combinacionais o sinal de sa�da depende �nica\ne exclusivamente das combina��es dos sinais de entrada.\n");
                    printf("Considerando a afirma��o acima e os seus conhecimentos,\navalie as afirma��es a seguir:\n");
                    printf("\nI. A porta l�gica AND (E) fornece na sa�da o valor l�gico 1 apenas quando\ntodas as entradas tamb�m tiverem o n�vel l�gico igual a 1\n");
                    printf("II. A Porta NOT ou inversora � uma porta l�gica que\nimplementa a nega��o l�gica\n");
                    printf("III. A porta l�gica OR (OU), � uma opera��o l�gica entre dois ou mais\noperandos que resulta em um valor l�gico falso se, e somente se, todos os\noperandos tiverem um valor falso.\n");
                    printf("IV. XOR (OU exclusivo) � uma opera��o l�gica entre dois operandos que\nresulta em um valor l�gico verdadeiro se e somente se os dois operandos\nforem diferentes, ou seja, se um for verdadeiro e o outro for falso\n");
                    printf("V. O NOR � um operador booleano l�gico que � resultado\nda nega��o do operador OR.");
                    printf("\n\n� correto o que se afirma em:\nA) I,II,III e IV apenas\nB) II e III, apenas\nC) Ie IV, apenas\nD) II e V, apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("15- Endomarketing pode ser entendido como o Marketing voltado para as a��es\ndentro da empresa, tamb�m conhecido como Marketing Interno.\n");
                    printf("O termo Endo � oriundo do grego Endus e significa para\ndentro, logo seu conceito � definido como:\n");
                    printf("o estudo das necessidades e desejos dos consumidores.");
                    printf("\n\nFONTE: https://novaescolademarketing.com.br/o-que-e-endomarketing/\n\n");
                    printf("Sobre o texto acima avalie as afirma��es a seguir:\nI. Endomarketing � a propaganda fora da empresa para a sociedade.\n");
                    printf("II. Endomarketing � a forma como a sociedade enxerga a empresa\nIII. Endomarketing � a propaganda interna da empresa\n");
                    printf("IV. Endomarketing est� limitada apenas aos funcion�rios.\nV. Endomarketing est� limitada apenas aos clientes.\n");
                    printf("� correto oque se afirma em:\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) III apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("16- A transmiss�o e comunica��o entre computadores utiliza\no sinal digital sendo necess�rio trabalhar comunica��o entre\ncomputadores utilizando o digital-digital.\n");
                    printf("Existem padr�es para ter uma transmiss�o e recep��o de dados\neficientes � necess�rio uma auto sincroniza��o dentre\nos m�todos de sinal digital.\n");
                    printf("\n\nDentre esses padr�es de comunica��o digital-digital avalie quais est�o corretos.\n\n");
                    printf("I-NRZ(Voltagem positiva define 1 bit e voltagem negativa 0)\nII-NRZ-L-I(A mudan�a ou falta de mudan�a no n�vel da voltagem\ndetermina o valor do bit)\n");
                    printf("III-AMI pseudoternario (O bit 1 � codificado com voltagem\nalternativa e 0 voltagem constante)\nIV-MULTINIVEL (Objetivo � aumentar a taxa de dados diminuindo a velocidade)\n");
                    printf("V-MULTILINHA MLT-3(A varia��o de voltagem define zero e a constante define 1)\n");
                    printf("\n\n� correto o que se afirma em:\n\nA) I e II, apenas \nB) II e III, apenas\nC) III e IV, apenas \nD) II, III e V, apenas \nE) I, II, III, IV e V\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("17- Em projetos envolvendo sistemas l�gicos com binacionais,\npara chegar ao circuito final, s�o necess�rios seguir 3 passos:\n");
                    printf("\n\n1� Montar a tabela verdade;\n2�Determinar a express�o l�gica a partir da tabela;\n3�Determinar o circuito l�gico correspondente ao projeto.\n\n");
                    printf("Considerando a afirma��o acima e os seus conhecimentos,\navalie as afirma��es a seguir:\n");
                    printf("I- A tabela verdade corresponde �s sa�das de um sistema\npara todas as combina��es de entrada\nII- Podemos montar o circuito l�gico correspondente a equa��o\ndeterminada a partir da tabela verdade.\n");
                    printf("III- Podemos definir o n�mero de combina��es atrav�s da seguinte\nopera��o n^2 -> onde n � o n�mero de entradas do sistema.\n");
                    printf("IV- Nas colunas de entrada, da esquerda para a direita, sempre\ncome�amos pelo n�mero 1 e a partir da� completamos\nas demais colunas com m�ltiplos de 2.\n");
                    printf("V- A tabela verdade relaciona todas as poss�veis combina��es para os\nn�veis l�gicos presentes nas entradas.\n");
                    printf("\n\n� correto o que se afirma em:\n\nA) I,II, IV e V apenas\nB) II , III e V apenas\nC) I e IV, apenas\n");
                    printf("D) II,IV e V, apenas\nE) I, II, III, IV e V ");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("18- Durante a historia da humanidade a comunica��o sempre se fez presente seja\nentre as pessoas na sociedade, entre sociedades distintas ou mesmo\nescrituras que at� hoje s�o");
                    printf("descobertas e estudadas.\nNa atualidade com o avan�o da tecnologia os computadores\npermitem a intera��o global de forma pr�tica e r�pida podemos dizer com\ntranquilidade");
                    printf("que nasceu uma nova forma de comunica��o que vem ganhando peso\ne as pessoas que n�o se adequarem a essa nova forma ser�o obsoletas.\n");
                    printf("\n\nConsiderando as informa��es acima, avalie as asser��es a seguir e a rela��o proposta entre elas.\n\n");
                    printf("I - N�o existe um sociedade sem comunica��o\n\t\tPORQUE\nII - A intera��o entre as pessoas que forma uma sociedade.\n\n");
                    printf("A) As asser��es I e II s�o proposi��es verdadeiras, e a II � uma\njustificativa correta da I.\nB) As asser��es I e II s�o proposi��es verdadeiras, mas a II n�o\n� uma justificativa correta da I.\n");
                    printf("C) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa\nD) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira\n");
                    printf("E) As asser��es I e II s�o proposi��es falsas\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("19- A transmiss�o de dados digital-digital se faz extremamente\nimportante para comunica��o de computadores, atrav�s dessa transmiss�o\ndos computadores podem trocar dados e");
                    printf(" informa��es importante, oque  tamb�m\nresulta no desenvolvimento de empresas e qualidade do trabalho\nal�m do usa domestico.\n");
                    printf("\n\nConsiderando as informa��es acima, avalie as asser��es a seguir\ne a rela��o proposta entre elas\n");
                    printf("I-Os componentes DC podem atrapalhar a transmiss�o de dados digital-digital\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-� gerando um campo eletromagn�tico que corrompe a mensagem.\n\n");
                    printf("A) As asser��es I e II s�o proposi��es verdadeiras, e a II � uma\njustificativa correta da I.\n");
                    printf("B) As asser��es I e II s�o proposi��es verdadeiras, mas a II n�o\n� uma justificativa correta da I.\n");
                    printf("C) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa.\n");
                    printf("D) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.\n");
                    printf("E) As asser��es I e II s�o proposi��es falsas.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("20- O termo Hierarquia de mem�ria se refere a uma classifica��o de\ntipos de mem�ria em fun��o de desempenho.\nEssa classifica��o geralmente segue duas dimens�es:\n");
                    printf("tamanho/capacidade e velocidade de acesso, sendo tradicionalmente\nrepresentada por uma pir�mide. A base da pir�mide representa dispositivos\nde armazenamentode massa,");
                    printf("de baixo custo por byte e, comparativamente,\nbaixa velocidade de acesso. O pre�o acess�vel faz com que esse tipo de\narmazenamento esteja dispon�vel em grandes");
                    printf(" volumes. Um exemplo � o DVD.\n");
                    printf("No topo da pir�mide encontram-se dispositivos extremamente velozes e, ao mesmo\ntempo, de custo elevado. Exemplo s�o c�lulas de mem�ria 6T usadas na constru��o\n");
                    printf("de mem�ria cache. Devido ao alto pre�o, esse tipo de mem�ria\n� utilizado em pequena quantidade nas m�quinas.\n");
                    printf("\n\t\tFonte: https://pt.wikipedia.org/wiki/Hierarquia_da_mem%C3%B3ria\n\n");
                    printf("Considerando as informa��es acima, avalie as asser��es\na seguir e a rela��o proposta entre elas.\n");
                    printf("I-Quanto mais perto do topo da pir�mide maior o custo e a velocidade de acesso\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-E menor  a capacidade\n\n");
                    printf("A) As asser��es I e II s�o proposi��es verdadeiras, e a II �\numa justificativa correta da I.\n");
                    printf("B) As asser��es I e II s�o proposi��es verdadeiras, mas a II n�o\n� uma justificativa correta da I.\n");
                    printf("C) A asser��o I � uma proposi��o verdadeira, e a II � uma proposi��o falsa.\n");
                    printf("D) A asser��o I � uma proposi��o falsa, e a II � uma proposi��o verdadeira.\n");
                    printf("E) As asser��es I e II s�o proposi��es falsas.\n");

                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");

                    printf("21- A administra��o do tempo se mostra essencial para uma melhor qualidade\nde vida e efici�ncia dos resultados pretendidos. Os grande empres�rios\ntrabalham com organiza��o");
                    printf("do tempo contando com hor�rios de descanso, trabalhos, lazer.J� � comprovado por artigos acad�micos a melhora de qualidade de vida\nsomente de administrar melhor o tempo.\n");
                    printf("\n\nSobre o texto acima, avalie as afirma��es a seguir:\n\n");
                    printf("I � Administra��o do tempo melhora a qualidade do trabalho.\nII � Pessoas com o tempo organizado s�o mais estressadas\nIII � Usar a organiza��o do tempo exige auto controle\n");
                    printf("IV � Organiza��o do tempo faz o trabalho ficar mais tedioso\nV � Usar a organiza��o de tempo melhora a sa�de f�sica e mental \n");
                    printf("A) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas \nD) I, III e V, apenas\nE) I, II, III, IV e V\n");


                    printf("\nQual � a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das op��es.\n");
                        scanf("%s", resp[r]);
                    }

                    if(strcmp(resp[r], certa[r])==0 || strcmp(resp[r], certa2[r])==0){
                            i ++;
                            certo(nome);
                        }
                    else {
                            e ++;
                            errado(nome);
                        }
                        r++;
                    system("pause");
                    system("cls");
                    //Esse for define os valores de coq para ser imprimido em ordem crescente na fun��o
                    for(r=0;r<21;r++){
                        coq[r]=r+1;
                    }
                    /*Chamar fun��o tabela com 3 variaveis coq (ordem das quet�es)
                    nome (o nome do usuario a ser imprimido
                    certa resposta a ser comparada para verificar se a resposta do usuario est� correta
                    resp resposta escolhida pelo usuario*/
                    resultado(i,e,nome);
                    break;
                    }
    /*Chamada de fun��o para imprimir e calcular o resultado final
    i contador quest�es certas
    e contador quest�es erradas
    nome nome do usuario a ser imprimido*/
    tabela(coq,nome,certa,resp);
    return 0;
    }
