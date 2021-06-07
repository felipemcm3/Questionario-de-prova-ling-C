#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*Essa função é para receber e imprimir o resultado final da avaliação a variavel
(i) conta as respostas corretas e a variavel (e) as erradas.*/
void resultado(float i, float e, char nome[10]){
    printf (" \n\nSeu teste de conhecimento chegou ao fim.\n\n ");

                  if( i==21 ){
                    printf("\nParabéns %s você acertou todas.\n\n",nome);
                 }
                 else if ( i>e ){
                      printf("Parabéns %s você tem o indece maior de acertos.\n\n", nome);
                      printf("\n acertos : %.2f%%\n erros : %.2f%% \n\n ", i/21*100 ,e/21*100);
                 }
                 else if(e==21){
                         printf("\nQue pena %s você errou todas.\n\n ",nome);
                 }
                 else if( e>i ){
                    printf("\nQue pena %s voce teve mais erros do que acerto.",nome);
                    printf("\n acertos : %.2f%%\n errada : %.2f%% \n\n ", i/21*100 ,e/21*100);
                 }

                 else {
                    printf(" \n%s você teve o mesmo número de acertos e erros.\n\n",nome);
                 }
}
//Essa função é para imprimir a tabela de quais questão foram respondidas e quais são as respostas certas.
void tabela(int coq[21],char nome[10], char certa[21][2],char resp[21][2]){
    int r;
    printf("%s, sua tabela de respostas\n\n", nome);
    printf("Questão\t\tCerta\t\tResposta\n");
    for(r=0; r<21; r++){
        printf("%d\t\t",coq[r]);
        printf("%s\t\t", certa[r]);
        printf("%s\n", resp[r]);
    }
}
//Imprimir caso a resposta esteja certa
void certo(char nome[10]){
    printf("\nParabéns %s, você acertou.\n\n", nome);
}
//Imprimi caso a resposta esteja errada
void errado(char nome[10]){
    printf("\nQue pena %s, você errou.\n\n", nome);
}
int main(){
    setlocale(LC_ALL, "portuguese");
    int opcao, opcao2,cont=0,r=0,coq[21],s=0;
    float i = 0, e = 0;
    //Essa char contém as respostas certas a serem comparadas caso adicione questões coloque as respostas aqui uma para maiusculo e outro para minusculo.
    char nome[10], resp[21][2], certa[21][2]={"b","c","c","b","b","c","a","e","d","c","c","e","c","e","d","a","a","a","c","a","d"};
    char certa2[21][2]={"B","C","C","B","B","C","A","E","D","C","C","E","C","E","D","A","A","A","C","A","D"};

    printf("Bem vindo ao exame do grupo 4.\n");
    printf("Informe seu primeiro nome: ");
    scanf("%s", nome);
    printf("\n");
    printf("Você pode escolher se quer fazer as questões sorteadas ou seguidas.\nDigite 1 para sortiadas e 2 para seguidas.\n");
    printf("Qual é sua escolha?\t");
    scanf("%d", &opcao2);
    while(opcao2 != 1 && opcao2 != 2){
        printf("Informe a resposta dentro das opções.\n");
        scanf("%d", &opcao2);
        }
    system("pause");
    system("cls");
    srand(time(NULL));
    //Esse switch é para selecionar se quer as questões seguidas ou sortiadas
    switch(opcao2){
        case 1:
        //Esse cont é o laço que vai determinar quantos sorteios seram feitos aumente ele caso queira mais sorteios
        while(cont<21){
            //Essa comando rand sorteada as questões mude o valor máximo dos números a serem sorteados caso adicione mais questões
            opcao = 1+ rand() % 20;
            coq[s]=opcao;
            s++;
            //Esse switch sortea as questões
            switch(opcao){
                case 1:
                printf("\n1- Um switch de endereço IP 192.168.63.2\nrecebe uma mensagem do endereço IP 192.168.63.5\npara ser entregue ao endereço IP 192.168.45.8\nQual será aproxima ação do switch?");
                printf("\nA)Retornar a mensagem ao remetente. \nB)Enviar a mensagem ao roteador. \nC)Enviar a mensagem para o destinatário. \nD)Duplicar a mensagem e enviar para o destinatário e o remetente. \nE)Armazena a mensagem e destruí-la.\n");
                printf("\nQual é sua resposta :");
                scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("2- John vonNeumann propôs a idéia que transformou os calculadores eletrônicos\nem “cérebros eletrônicos ”:modelar a arquitetura do computador segundo \no sistema nervoso central.\n");
                    printf("Para isso, eles teriam que ter três características:\n1.Codificar as instruções de uma forma possível de ser armazenada na memória do computador. Von Neumann sugeriu que fossem usados uns e zeros. \n2.Armazenar as instruções na memória, bem com o toda e qualquer informação\nnecessária a execução da tarefa. \n3.Quando processar o programa, buscar as instruções diretamente na memória,\nao invés  de lerem um novo cartão perfurado a cada passo.\n");
                    printf("Este é o conceito de programa armazenado, cujas principais vantagens são:\nrapidez, versatilidade e auto modificação.\nAssim, o computador programável que conhecemos hoje, onde o programa \ne os dados estão armazenados na memória ficou conhecido como\nArquitetura de von Neumann.");
                    printf("\n\n\t\t\tFONTE:UNESP Computadores historia e arquitetura.\n\n");
                    printf("Sobre o texto acima, avalie as afirmações a seguir:\n");


                    printf("\nI – Von Neumann propôs que o computador não precisa de memoria.");
                    printf("\nII – Von Neumann propôs que é desnecessário busca  a instrução direta\nna memoria para a rapidez do processamento.");
                    printf("\nIII - Von Neumann sugeriu que fossem usados uns e zeros.\nPara Codificar as instruções de uma forma possível de ser armazenada\nna memória do computador.");
                    printf("\nIV –Então a visão simplifica de von neumann seria:\nmemoria principal ,unidade de controle ,unidade logico\ne aritmética e unidade de entrada e saída.");
                    printf("\nv- Von Neumann  disse que o computador não fuciona bem com uns e zeros.\n");


                    printf("É correto o que se afirma em:\n");
                    printf("A) I e II, apenas\n");
                    printf("B) II e III, apenas\n");
                    printf("C) III e IV, apenas\n");
                    printf("D) II, III e V, apenas\n");
                    printf("E) I, II, III, IV e V\n");
                    printf("Qual é sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                        printf("3- O surto do corona vírus obrigou as pessoas há ficarem em casa,\nno entanto a quem use esse tempo para novos projetos.\nA competição de segurança PWn20Wn reúne especialistas em programação\npara encontrarem falhas nos programas onde é organizada por acesso remoto.\nOs vencedores ganharam 270 mil dólares equivalente a 1,35 milhões\ne são incentivados pelas grandes empresas de tecnologia.\n");
                        printf("Considerando as informações acima, avalie as asserções a seguir e a relação\nproposta entre elas.");
                        printf("\nI- A dissertação acima usa de função de linguagem referencial.\n");
                        printf("\n\t\t\tPORQUE\n");
                        printf("\nII- Informa os sentimentos dos participantes da competição.\n");

                        printf("\nA respeito dessas asserções, assinale a opção correta. ");
                        printf("\n");
                        printf("\nA) As asserções I e II são proposições verdadeiras, e a II\né uma justificativa correta da I.");
                        printf("\nB) As asserções I e II são proposições verdadeiras, mas a II\nnão é uma justificativa correta da I.");
                        printf("\nC) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa.");
                        printf("\nD) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.");
                        printf("\nE) As asserções I e II são proposições falsas.\n");
                        printf("Qual é sua resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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

                        printf("\n4- O surgimento das redes de computadores com certeza representou\numa grande evolução para as pessoas e empresas,trazendo diversos beneficios.\n");
                        printf("Entre eles, destacam-se a possibilidade de troca de informações\nentre diferentes usuários, o compartilhamento de recursos computacionais,\n");
                        printf("conectar a sede e as filiais de uma empresa e, principalmente,\nter acesso á internet,tão presente em nosso cotidiano.\n");
                        printf("\nPor VINICIUS Você conhece os principais tipos de redes de computadores?\n\t\t\t\t\tCONFIRA!04 JULHO 2018.\n\n");
                        printf("De acordo com o texto acima e com seus conhecimentos marque a opção correta:\n\n");

                        printf("A)Empresas mundiais usam geralmente duas redes uma de comunicação\nLAN para redes locais e MAN para redes globais.\n");
                        printf("B)A WAN tem um grande alcance e permite conectar redes locais ou metropolitanas umas ás outras.\n");
                        printf("C)A WAN é geralmente usada para conectar dispositivos dentro de uma cidade.\n");
                        printf("D)RAN é usada para conectar dispositivos com fones de ouvido,mouse,etc...\n");
                        printf("E)WAN, LAN, MAN são exatamente o mesmo tipo de conexão.\n");
                        printf("Qual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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
                    printf("\n5- A diferença entre hardware e software é uma dúvida\nrecorrente entre os usuários que não tem tanto conhecimento sobre dispositivos\n");
                    printf("tecnológicos como computadores desktops, notebooks, tablets, entre outros.\nPara contextualizar, em primeiro lugar, é importante ressaltar\n");
                    printf("que todos os computadores são uma combinação entre hardware e software.\nOu seja, estes itens trabalham em conjunto em uma máquina, e não isoladamente\n");
                    printf("como costumam ser imaginados tradicionalmente.\n");
                    printf("\nAfinal qual é a diferença entre hardware e software?\n\nEncontra-se em:https://netsupport.com.br/blog/diferenca-entre-hardware-e-software/n/n");
                    printf("De acordo com o texto acima e seus conhecimentos sobre software e hardware\n\nQuais alternativas estão corretas.\n\n");

                    printf("I-	São exemplos de software Windows, Linux, Android e IOS.\n\n");
                    printf("II-	Mouse, teclado, monitor são considerados hardware.\n\n");
                    printf("III-	Os computadores são uma junção de software\n(IOS, Bluetooth, chromebit.) e hardware (monitor, teclado, winrar).\n\n");
                    printf("IV-	O hardware corresponde aos componentes físicos do computador,\nou seja, são as peças e aparatos eletrônicos que,\nao se conectarem, fazem o equipamento funcionar.\n\n");
                    printf("V-	 Um software pode ser aplicado para qualquer situação em que um\nconjunto de algoritmos é executado para a obtenção de resultados.\n\n");


                    printf("A) I e II\n");
                    printf("B) I, II, III, IV\n");
                    printf("C) II, IV, V\n");
                    printf("D) I, II, IV, V\n");
                    printf("E) IV e V\n");
                    printf("Qual é sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                        printf("\n6- Ao longo da evolução da humanidade foi necessário a comunicação entre seres\npara convivência em sociedade.\n");
                        printf("Conforme evoluem se melhora as formas de comunicação criando meios mais\neficientes,rápidos, e de longo alcance com a internet.\n");
                        printf("É evidente, então que sempre foi essencial a comunicação\npara a humanidade e até hoje um bom comunicador pode fazer a diferença\n");
                        printf("abrir e fechar portas.\nIndependente da época há fatores em comum nas formas de comunicação\nsão os chamados elementos de comunicação\n");
                        printf("\nEscolha a alternativa com os elementos de comunicação corretos.\n\n");

                        printf("A)Referente, canal, código, receptor.\n");
                        printf("B)Internet, e-mail, whatsapp, computador, servidor.\n");
                        printf("C)Referente, emissor, receptor, canal, mensagem, código.\n");
                        printf("D)Emissor, receptor, canal, mensagem.\n");
                        printf("E)Jornal, revista, internet, televisão, rádio.\n");
                        printf("Qual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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
                        printf("\n7- A comunicação de dados se tornou crucial em grandes empresas, a mesma\nmultinacional tem pontos no Brasil e em Tokyo ou diversas outros países, sendo\ntão importante não podemos esquecer que essa comunicação tem limites.\nNaperda de transmissão existe formas diferentes para\nisso observe as informações abaixo.\n");

                        printf("\nÉ correto o que se afirma em:");
                        printf("\nI- Distorção é a perda da forma original do sinal composto, pela diferença de\nvelocidade das ondas senoidais que o formam.");
                        printf("\nII- Atenuação é a perda de energia ou seja amplitude da onda para vencer a\nresistência do meio.");
                        printf("\nIII- A fibra optica é o único meio de transmissão\nque usa toda a velocidade da luz.");
                        printf("\nIV- Ruído é a perda de força do sinal pela resistência do meio.");
                        printf("\nV- Outros aparelhos podem interferir no sinal como maquinas elétricas.\n");

                        printf("\nA)I, II, e V apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I, II, III, IV e V");

                        printf("\nQual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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
                       printf("\n8- Todo processador trabalhar com 2 ciclo fundamentais que é o de instrução e o de\nexecução. Assim que se liga o computador se inicia o ciclo de instrução\npara logo em seguida começar o ciclo de execução e volta\npara o de ciclo de instrução continuando assim ate que se finaliza.\nO ciclo de instrução pose simplifica em cinco parte: busca da\ninstrução, codificador da instrução, busca do operando, a execução da operação,\narmazenamento do resultado.\n");

                       printf("\nConsiderando as informações acima, avalie as afirmações a seguir:");

                       printf("\nI. Podemos afirmar que o ciclo de busca é o calculo do endereço da instrução,\na busca da instrução e a codificador da instrução");
                       printf("\nII. Não precisa acessar a memoria para fazer o ciclo de instrução.");
                       printf("\nIII. O registrador acumulador não é usado no ciclo de instrução.");
                       printf("\nIV. No ciclo de busca usa-se os registradores MAR , MBR ,PC e IR.");
                       printf("\nV. A memoria é acessada com as ações de calculando a instrução no\nendereço da memoria, buscando a instrução e codificando a instrução.\nE a entrada de dados seria o calculando o endereço do operando,\nbusca do operando e execução da operação e a saída de dado\nseria calculando o endereço do resultado e registrando na memoria o resultado.\n");

                       printf("\nÉ correto o que se afirma em:\n");
                       printf("\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I,IV e V apenas");


                        printf("\nQual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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
                       printf("\n9- A diferença da linguagem formal e informal está no contexto em que elas são\nutilizadas e na escolha das palavras e expressões usadas para comunicar.\nA linguagem formal é aquela que usamos em situações mais formais, sendo\nmarcada pelo uso da norma culta. A linguagem informal é utilizada em situações\nmais descontraídas, quando existe uma familiaridade entre os interlocutores.");
                       printf("\n\t\tDIANA, Daniela, Linguagem formal e linguagem informal.");

                       printf("\nSobre o texto acima, avalie as afirmações a seguir:");

                       printf("\nI. Na linguagem formal não é necessário o uso da norma culta, sendo comum\no uso de gírias e coloquialismos.");
                       printf("\nII. Uso de palavras abreviadas, como vc, cê e tô é muito comum na linguagem\ncoloquial");
                       printf("\nIII. A pronúncia correta e clara das palavras é uma característica da linguagem\ncoloquial.");
                       printf("\nIV. Uma característica da linguagem formal é a utilização da norma culta,\nrespeitando rigorosamente as normas gramaticais.");
                       printf("\nV. Em situações que exigem mais seriedade é usada a norma culta.\n");

                       printf("\nÉ correto o que se afirma em:\n");
                       printf("\nA)I e V apenas\nB) I, II e III, apenas\nC)I, III e IV, apenas\nD)II, IV e V apenas\nE)I, II, III, IV e V\n");

                        printf("\nQual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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
                   printf("10- Em um sinal existem elementos cruciais como frequência e períodos.\nPeríodo é o tempo necessário para completar um ciclo\n");
                   printf("e frequência é quantos períodos dentro de um segundo medido em hertz.\nDado uma onda de frequência 20khz10^3 pode se afirmar que.\n\n\n");
                   printf("I-\tO período é 0,05ms10^-3.\n\n\n");
                   printf("\t\tPORQUE\n\n\n");
                   printf("II-\tOs dois são diretamente proporcionais.\n\n");
                   printf("A respeito dessas asserções, assinale a opção correta.\n\n");
                   printf("A)As asserções I e II são proposições verdadeiras,\ne a II é uma justificativa correta da I.\n");
                   printf("B)As asserções I e II são proposições verdadeiras,\nmas a II não é uma justificativa correta da I.\n");
                   printf("C)A asserção I é uma proposição verdadeira, e a II é uma proposição verdadeira.\n");
                   printf("D)A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.\n");
                   printf("E)As asserções I e II são proposições falsas.\n");

                   printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("11- A Inteligência artificial AI é importante porque aborda problemas\nprofundamente difíceis e as soluções para esses problemas");
                    printf(" podem ser aplicadas a\nsetores importantes para o bem-estar humano desde saúde, educação e comércio\n");
                    printf("até transporte, serviços públicos e entretenimento.Desde a década de 1950\n");
                    printf("a pesquisa da AI se concentrou em cinco campos de investigação.\n\n\n");
                    printf("I-a capacidade de resolver problemas através de dedução lógica\n\n");
                    printf("II-a capacidade de representar conhecimento sobre o mundo (o entendimento de\nque existem certas entidades, eventos e situações no mundo, de que esses\nelementos têm propriedades e que os elementos podem ser categorizados.)\n\n");
                    printf("III-a capacidade de definir e atingir metas (há um estado\nespecífico no futuro do mundo que é desejável e sequências\nde ações podem ser realizadas para conseguir progressos neste\nsentido.)\n\n");
                    printf("IV-a capacidade de entender a linguagem escrita e falada.\n\n");
                    printf("V-a capacidade de deduzir coisas sobre o mundo a partir de imagens,\nsons e outros estímulos sensoriais.\n\n");
                    printf("Quais são estes campos de investigação:\n");
                    printf("A) Raciocínio, Planejamento, Conhecimento, Fidelidade e Respeito.\n");
                    printf("B) Raciocínio, Planejamento,Respeito,Comunicação e Conhecimento.\n");
                    printf("C) Percepção, Comunicação, Planejamento,Conhecimento e Raciocínio.\n");
                    printf("D) Percepção, Comunicação, Respeito, Fidelidade e Raciocínio.\n");
                    printf("E) Respeito, Planejamento, Percepção, Comunicação e Fidelidade.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("12- Na hora de fazer redação ou slogan ,as pontuação devem ser usadas\nem seu devidos lugares,");
                    printf("pois se usadas nos lugares errados, as mensagens\ndo remetente sai distorcida para o seu destinatário.\n");
                    printf("Entre elas a vírgula, se empregada não em seu lugar exato, a mensagem\nnão sai com a intenção devida que o remetente quis passar.\n");
                    printf("Agora imagine isso nas propagandas, que é essencial o uso \ncorreto da gramática.");
                    printf("Pois tem que expor as qualidade do produto\ne assim desperta desejos do cliente sobre o produto,\n");
                    printf("para concretizar a venda isso só é possível com uma boa comunicação\npara uma boa comunicação a gramática tem que estar afiada .\n\n\n");
                    printf("Depois de analisar o texto acima ,qual das frases abaixo\nque as vírgulas estão em seu lugares errados.\n\n\n");
                    printf("A) As pessoas, em casa, estão medrosas por causa do corona-vírus.\nB) Medrosas, as pessoas estão, em casa, por causado corona-vírus.\n");
                    printf("C) As pessoas estão medrosas por causa do corona-vírus, em casa.\nD) As pessoas estão medrosas, em casa, por cousa do corona-vírus.\n");
                    printf("E) Em casa, as pessoas, estão, medrosas, por causa do corona vírus.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("13- A transmissão banda-base requer que tenhamos um canal passa-baixa\num canal com largura de banda que começa em zero.\n");
                    printf("Este é o caso se tivermos um meio de transmissão dedicado com toda\nlargura de banda alocada em apenas um canal.\n");
                    printf("A transmissão banda larga, ou modulação, significa transformar o sinal\ndigital em sinal analógico para transmissão. A modulação nos permite usar um\n");
                    printf("canal passa-faixa um canal com largura de banda que não se inicie em zero.\nEsse tipo de canal é mais disponível que um canal de passa-baixa.");
                    printf("\n\nFonte :COMUNICAÇÃO DE DADOS E REDES DE COMPUTADORES autor Behrouz A. Forouzan\n\n");
                    printf("Sobre o texto acima, avalie as afirmações e responda seguir:\nA voz humana Modula vários sinais e os manda pelo ar.\n");
                    printf("Sabendo disso trata-se de uma transmissão banda-base ou de banda-larga?\n");
                    printf("A)Banda-base, pois à modulação de sinais.\nB)Banda-larga ,pois não tem modulação de sinais.\nC)Banda-larga ,pois á modulações de sinais.\n");
                    printf("D) Por ser um sinal digital ele é largura de banda\nE)Banda-base ,pois não a muito variação de sinal\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("14- Nos Circuitos combinacionais o sinal de saída depende única\ne exclusivamente das combinações dos sinais de entrada.\n");
                    printf("Considerando a afirmação acima e os seus conhecimentos,\navalie as afirmações a seguir:\n");
                    printf("\nI. A porta lógica AND (E) fornece na saída o valor lógico 1 apenas quando\ntodas as entradas também tiverem o nível lógico igual a 1\n");
                    printf("II. A Porta NOT ou inversora é uma porta lógica que\nimplementa a negação lógica\n");
                    printf("III. A porta lógica OR (OU), é uma operação lógica entre dois ou mais\noperandos que resulta em um valor lógico falso se, e somente se, todos os\noperandos tiverem um valor falso.\n");
                    printf("IV. XOR (OU exclusivo) é uma operação lógica entre dois operandos que\nresulta em um valor lógico verdadeiro se e somente se os dois operandos\nforem diferentes, ou seja, se um for verdadeiro e o outro for falso\n");
                    printf("V. O NOR é um operador booleano lógico que é resultado\nda negação do operador OR.");
                    printf("\n\nÉ correto o que se afirma em:\nA) I,II,III e IV apenas\nB) II e III, apenas\nC) Ie IV, apenas\nD) II e V, apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("15- Endomarketing pode ser entendido como o Marketing voltado para as ações\ndentro da empresa, também conhecido como Marketing Interno.\n");
                    printf("O termo Endo é oriundo do grego Endus e significa para\ndentro, logo seu conceito é definido como:\n");
                    printf("o estudo das necessidades e desejos dos consumidores.");
                    printf("\n\nFONTE: https://novaescolademarketing.com.br/o-que-e-endomarketing/\n\n");
                    printf("Sobre o texto acima avalie as afirmações a seguir:\nI. Endomarketing é a propaganda fora da empresa para a sociedade.\n");
                    printf("II. Endomarketing é a forma como a sociedade enxerga a empresa\nIII. Endomarketing é a propaganda interna da empresa\n");
                    printf("IV. Endomarketing está limitada apenas aos funcionários.\nV. Endomarketing está limitada apenas aos clientes.\n");
                    printf("É correto oque se afirma em:\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) III apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("16- A transmissão e comunicação entre computadores utiliza\no sinal digital sendo necessário trabalhar comunicação entre\ncomputadores utilizando o digital-digital.\n");
                    printf("Existem padrões para ter uma transmissão e recepção de dados\neficientes é necessário uma auto sincronização dentre\nos métodos de sinal digital.\n");
                    printf("\n\nDentre esses padrões de comunicação digital-digital avalie quais estão corretos.\n\n");
                    printf("I-NRZ(Voltagem positiva define 1 bit e voltagem negativa 0)\nII-NRZ-L-I(A mudança ou falta de mudança no nível da voltagem\ndetermina o valor do bit)\n");
                    printf("III-AMI pseudoternario (O bit 1 é codificado com voltagem\nalternativa e 0 voltagem constante)\nIV-MULTINIVEL (Objetivo é aumentar a taxa de dados diminuindo a velocidade)\n");
                    printf("V-MULTILINHA MLT-3(A variação de voltagem define zero e a constante define 1)\n");
                    printf("\n\nÉ correto o que se afirma em:\n\nA) I e II, apenas \nB) II e III, apenas\nC) III e IV, apenas \nD) II, III e V, apenas \nE) I, II, III, IV e V\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("17- Em projetos envolvendo sistemas lógicos com binacionais,\npara chegar ao circuito final, são necessários seguir 3 passos:\n");
                    printf("\n\n1º Montar a tabela verdade;\n2ºDeterminar a expressão lógica a partir da tabela;\n3ºDeterminar o circuito lógico correspondente ao projeto.\n\n");
                    printf("Considerando a afirmação acima e os seus conhecimentos,\navalie as afirmações a seguir:\n");
                    printf("I- A tabela verdade corresponde às saídas de um sistema\npara todas as combinações de entrada\nII- Podemos montar o circuito lógico correspondente a equação\ndeterminada a partir da tabela verdade.\n");
                    printf("III- Podemos definir o número de combinações através da seguinte\noperação n^2 -> onde n é o número de entradas do sistema.\n");
                    printf("IV- Nas colunas de entrada, da esquerda para a direita, sempre\ncomeçamos pelo número 1 e a partir daí completamos\nas demais colunas com múltiplos de 2.\n");
                    printf("V- A tabela verdade relaciona todas as possíveis combinações para os\nníveis lógicos presentes nas entradas.\n");
                    printf("\n\nÉ correto o que se afirma em:\n\nA) I,II, IV e V apenas\nB) II , III e V apenas\nC) I e IV, apenas\n");
                    printf("D) II,IV e V, apenas\nE) I, II, III, IV e V ");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("18- Durante a historia da humanidade a comunicação sempre se fez presente seja\nentre as pessoas na sociedade, entre sociedades distintas ou mesmo\nescrituras que até hoje são");
                    printf("descobertas e estudadas.\nNa atualidade com o avanço da tecnologia os computadores\npermitem a interação global de forma prática e rápida podemos dizer com\ntranquilidade");
                    printf("que nasceu uma nova forma de comunicação que vem ganhando peso\ne as pessoas que não se adequarem a essa nova forma serão obsoletas.\n");
                    printf("\n\nConsiderando as informações acima, avalie as asserções a seguir e a relação proposta entre elas.\n\n");
                    printf("I - Não existe um sociedade sem comunicação\n\t\tPORQUE\nII - A interação entre as pessoas que forma uma sociedade.\n\n");
                    printf("A) As asserções I e II são proposições verdadeiras, e a II é uma\njustificativa correta da I.\nB) As asserções I e II são proposições verdadeiras, mas a II não\né uma justificativa correta da I.\n");
                    printf("C) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa\nD) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira\n");
                    printf("E) As asserções I e II são proposições falsas\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("19- A transmissão de dados digital-digital se faz extremamente\nimportante para comunicação de computadores, através dessa transmissão\ndos computadores podem trocar dados e");
                    printf(" informações importante, oque  também\nresulta no desenvolvimento de empresas e qualidade do trabalho\nalém do usa domestico.\n");
                    printf("\n\nConsiderando as informações acima, avalie as asserções a seguir\ne a relação proposta entre elas\n");
                    printf("I-Os componentes DC podem atrapalhar a transmissão de dados digital-digital\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-É gerando um campo eletromagnético que corrompe a mensagem.\n\n");
                    printf("A) As asserções I e II são proposições verdadeiras, e a II é uma\njustificativa correta da I.\n");
                    printf("B) As asserções I e II são proposições verdadeiras, mas a II não\né uma justificativa correta da I.\n");
                    printf("C) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa.\n");
                    printf("D) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.\n");
                    printf("E) As asserções I e II são proposições falsas.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("20- O termo Hierarquia de memória se refere a uma classificação de\ntipos de memória em função de desempenho.\nEssa classificação geralmente segue duas dimensões:\n");
                    printf("tamanho/capacidade e velocidade de acesso, sendo tradicionalmente\nrepresentada por uma pirâmide. A base da pirâmide representa dispositivos\nde armazenamentode massa,");
                    printf("de baixo custo por byte e, comparativamente,\nbaixa velocidade de acesso. O preço acessível faz com que esse tipo de\narmazenamento esteja disponível em grandes");
                    printf(" volumes. Um exemplo é o DVD.\n");
                    printf("No topo da pirâmide encontram-se dispositivos extremamente velozes e, ao mesmo\ntempo, de custo elevado. Exemplo são células de memória 6T usadas na construção\n");
                    printf("de memória cache. Devido ao alto preço, esse tipo de memória\né utilizado em pequena quantidade nas máquinas.\n");
                    printf("\n\t\tFonte: https://pt.wikipedia.org/wiki/Hierarquia_da_mem%C3%B3ria\n\n");
                    printf("Considerando as informações acima, avalie as asserções\na seguir e a relação proposta entre elas.\n");
                    printf("I-Quanto mais perto do topo da pirâmide maior o custo e a velocidade de acesso\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-E menor  a capacidade\n\n");
                    printf("A) As asserções I e II são proposições verdadeiras, e a II é\numa justificativa correta da I.\n");
                    printf("B) As asserções I e II são proposições verdadeiras, mas a II não\né uma justificativa correta da I.\n");
                    printf("C) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa.\n");
                    printf("D) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.\n");
                    printf("E) As asserções I e II são proposições falsas.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    printf("21- A administração do tempo se mostra essencial para uma melhor qualidade\nde vida e eficiência dos resultados pretendidos. Os grande empresários\ntrabalham com organização");
                    printf("do tempo contando com horários de descanso, trabalhos, lazer.Já é comprovado por artigos acadêmicos a melhora de qualidade de vida\nsomente de administrar melhor o tempo.\n");
                    printf("\n\nSobre o texto acima, avalie as afirmações a seguir:\n\n");
                    printf("I – Administração do tempo melhora a qualidade do trabalho.\nII – Pessoas com o tempo organizado são mais estressadas\nIII – Usar a organização do tempo exige auto controle\n");
                    printf("IV – Organização do tempo faz o trabalho ficar mais tedioso\nV – Usar a organização de tempo melhora a saúde física e mental \n");
                    printf("A) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas \nD) I, III e V, apenas\nE) I, II, III, IV e V\n");


                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
            /*Chamar função tabela com 3 variaveis coq (ordem das quetões)
            nome (o nome do usuario a ser imprimido
            certa resposta a ser comparada para verificar se a resposta do usuario está correta
            resp resposta escolhida pelo usuario*/
            resultado(i,e,nome);
            break;
            //Esse case é a segundo opção para questões seguidas
            case 2:
            printf("\n1- Um switch de endereço IP 192.168.63.2\nrecebe uma mensagem do endereço IP 192.168.63.5\npara ser entregue ao endereço IP 192.168.45.8\nQual será aproxima ação do switch?");
            printf("\nA)Retornar a mensagem ao remetente. \nB)Enviar a mensagem ao roteador. \nC)Enviar a mensagem para o destinatário. \nD)Duplicar a mensagem e enviar para o destinatário e o remetente. \nE)Armazena a mensagem e destruí-la.\n");
            printf("\nQual é sua resposta :");
            scanf("%s", resp[r]);

            while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                printf("Informe a resposta dentro das opções.\n");
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

                printf("2- John vonNeumann propôs a idéia que transformou os calculadores eletrônicos\nem “cérebros eletrônicos ”:modelar a arquitetura do computador segundo \no sistema nervoso central.\n");
                printf("Para isso, eles teriam que ter três características:\n1.Codificar as instruções de uma forma possível de ser armazenada na memória do computador. Von Neumann sugeriu que fossem usados uns e zeros. \n2.Armazenar as instruções na memória, bem com o toda e qualquer informação\nnecessária a execução da tarefa. \n3.Quando processar o programa, buscar as instruções diretamente na memória,\nao invés  de lerem um novo cartão perfurado a cada passo.\n");
                printf("Este é o conceito de programa armazenado, cujas principais vantagens são:\nrapidez, versatilidade e auto modificação.\nAssim, o computador programável que conhecemos hoje, onde o programa \ne os dados estão armazenados na memória ficou conhecido como\nArquitetura de von Neumann.");
                printf("\n\n\t\t\tFONTE:UNESP Computadores historia e arquitetura.\n\n");
                printf("Sobre o texto acima, avalie as afirmações a seguir:");


                printf("\nI – Von Neumann propôs que o computador não precisa de memoria.");
                printf("\nII – Von Neumann propôs que é desnecessário busca  a instrução direta\nna memoria para a rapidez do processamento.");
                printf("\nIII - Von Neumann sugeriu que fossem usados uns e zeros.\nPara Codificar as instruções de uma forma possível de ser armazenada\nna memória do computador.");
                printf("\nIV –Então a visão simplifica de von neumann seria:\nmemoria principal ,unidade de controle ,unidade logico\ne aritmética e unidade de entrada e saída.");
                printf("\nv- Von Neumann  disse que o computador não fuciona bem com uns e zeros.\n");


                printf("É correto o que se afirma em:\n");
                printf("A) I e II, apenas\n");
                printf("B) II e III, apenas\n");
                printf("C) III e IV, apenas\n");
                printf("D) II, III e V, apenas\n");
                printf("E) I, II, III, IV e V\n");
                printf("Qual é sua resposta:\t");
                scanf("%s", resp[r]);

                while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                    printf("Informe a resposta dentro das opções.\n");
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



                    printf("3- O surto do corona vírus obrigou as pessoas há ficarem em casa,\nno entanto a quem use esse tempo para novos projetos.\nA competição de segurança PWn20Wn reúne especialistas em programação\npara encontrarem falhas nos programas onde é organizada por acesso remoto.\nOs vencedores ganharam 270 mil dólares equivalente a 1,35 milhões\ne são incentivados pelas grandes empresas de tecnologia.\n");
                    printf("Considerando as informações acima, avalie as asserções a seguir e a relação\nproposta entre elas.");
                    printf("\nI- A dissertação acima usa de função de linguagem referencial.\n");
                    printf("\n\t\t\tPORQUE\n");
                    printf("\nII- Informa os sentimentos dos participantes da competição.\n");

                    printf("\nA respeito dessas asserções, assinale a opção correta. ");
                    printf("\nA) As asserções I e II são proposições verdadeiras, e a II\né uma justificativa correta da I.");
                    printf("\nB) As asserções I e II são proposições verdadeiras, mas a II\nnão é uma justificativa correta da I.");
                    printf("\nC) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa.");
                    printf("\nD) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.");
                    printf("\nE) As asserções I e II são proposições falsas.\n");
                    printf("Qual é sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("\n4- O surgimento das redes de computadores com certeza representou\numa grande evolução para as pessoas e empresas,trazendo diversos beneficios.\n");
                    printf("Entre eles, destacam-se a possibilidade de troca de informações\nentre diferentes usuários, o compartilhamento de recursos computacionais,\n");
                    printf("conectar a sede e as filiais de uma empresa e, principalmente,\nter acesso á internet,tão presente em nosso cotidiano.\n");
                    printf("\nPor VINICIUS Você conhece os principais tipos de redes de computadores?\n\t\t\t\t\tCONFIRA!04 JULHO 2018.\n\n");
                    printf("\nDe acordo com o texto acima e com seus conhecimentos marque a opção correta:\n\n");

                    printf("A)Empresas mundiais usam geralmente duas redes de comunicação\nLAN para redes locais é MAN para redes globais.\n");
                    printf("B)A WAN tem um grande alcance e permite conectar redes locais ou metropolitanas umas ás outras.\n");
                    printf("C)A WAN é geralmente usada para conectar dispositivos dentro de uma cidade.\n");
                    printf("D)RAN é usada para conectar dispositivos com fones de ouvido,mouse,etc...\n");
                    printf("E)WAN, LAN, MAN são exatamente o mesmo tipo de conexão.\n");
                    printf("Qual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("\n5- A diferença entre hardware e software é uma dúvida\nrecorrente entre os usuários que não tem tanto conhecimento sobre dispositivos\n");
                    printf("tecnológicos como computadores desktops, notebooks, tablets, entre outros.\nPara contextualizar, em primeiro lugar, é importante ressaltar\n");
                    printf("que todos os computadores são uma combinação entre hardware e software.\nOu seja, estes itens trabalham em conjunto em uma máquina, e não isoladamente\n");
                    printf("como costumam ser imaginados tradicionalmente.\n");
                    printf("\nAfinal qual é a diferença entre hardware e software?\n\nEncontra-se em:https://netsupport.com.br/blog/diferenca-entre-hardware-e-software/n/n");
                    printf("De acordo com o texto acima e seus conhecimentos sobre software e hardware\n\nQuais alternativas estão corretas.\n\n");

                    printf("I-	São exemplos de software Windows, Linux, Android e IOS.\n\n");
                    printf("II-	Mouse, teclado, monitor são considerados hardware.\n\n");
                    printf("III-	Os computadores são uma junção de software\n(IOS, Bluetooth, chromebit.) e hardware (monitor, teclado, winrar).\n\n");
                    printf("IV-	O hardware corresponde aos componentes físicos do computador,\nou seja, são as peças e aparatos eletrônicos que,\nao se conectarem, fazem o equipamento funcionar.\n\n");
                    printf("V-	 Um software pode ser aplicado para qualquer situação em que um\nconjunto de algoritmos é executado para a obtenção de resultados.\n\n");


                    printf("A) I e II\n");
                    printf("B) I, II, III, IV\n");
                    printf("C) II, IV, V\n");
                    printf("D) I, II, IV, V\n");
                    printf("E) IV e V\n");
                    printf("Qual é sua resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("\n6- Ao longo da evolução da humanidade foi necessário a comunicação entre seres\npara convivência em sociedade.\n");
                    printf("Conforme evoluem se melhora as formas de comunicação criando meios mais\neficientes,rápidos, e de longo alcance com a internet.\n");
                    printf("É evidente, então que sempre foi essencial a comunicação\npara a humanidade e até hoje um bom comunicador pode fazer a diferença\n");
                    printf("abrir e fechar portas.\nIndependente da época há fatores em comum nas formas de comunicação\nsão os chamados elementos de comunicação\n");
                    printf("\nEscolha a alternativa com os elementos de comunicação corretos.\n\n");

                    printf("A)Referente, canal, código, receptor.\n");
                    printf("B)Internet, e-mail, whatsapp, computador, servidor.\n");
                    printf("C)Referente, emissor, receptor, canal, mensagem, código.\n");
                    printf("D)Emissor, receptor, canal, mensagem.\n");
                    printf("E)Jornal, revista, internet, televisão, rádio.\n");
                    printf("Qual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                        printf("\n7- A comunicação de dados se tornou crucial em grandes empresas, a mesma\nmultinacional tem pontos no Brasil e em Tokyo ou diversas outros países, sendo\ntão importante não podemos esquecer que essa comunicação tem limites.\nNa perda de transmissão existe formas diferentes para\nisso observe as informações abaixo.\n");

                        printf("\nÉ correto o que se afirma em:");
                        printf("\nI- Distorção é a perda da forma original do sinal composto, pela diferença de\nvelocidade das ondas senoidais que o formam.");
                        printf("\nII- Atenuação é a perda de energia ou seja amplitude da onda para vencer a\nresistência do meio.");
                        printf("\nIII- A fibra optica é o único meio de transmissão\nque usa toda a velocidade da luz.");
                        printf("\nIV- Ruído é a perda de força do sinal pela resistência do meio.");
                        printf("\nV- Outros aparelhos podem interferir no sinal como maquinas elétricas.\n");

                        printf("\nA)I, II, e V apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I, II, III, IV e V");

                        printf("\nQual é a resposta:\t");
                        scanf(" %s", &resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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

                        printf("\n8- Todo processador trabalhar com 2 ciclo fundamentais que é o de instrução e o de execução. Assim que se liga o computador se inicia o ciclo de\ninstrução para logo em seguida começar o ciclo de execução e volta\npara o de ciclo de instrução continuando assim ate que se finaliza.\nO ciclo de instrução pose simplifica em cinco parte: busca da\ninstrução, codificador da instrução, busca do operando, a execução da operação,\narmazenamento do resultado.\n");

                       printf("\nConsiderando as informações acima, avalie as afirmações a seguir:");

                       printf("\nI. Podemos afirmar que o ciclo de busca é o calculo do endereço da instrução,\na busca da instrução e a codificador da instrução");
                       printf("\nII. Não precisa acessar a memoria para fazer o ciclo de instrução.");
                       printf("\nIII. O registrador acumulador não é usado no ciclo de instrução.");
                       printf("\nIV. No ciclo de busca usa-se os registradores MAR , MBR ,PC e IR.");
                       printf("\nV. A memoria é acessada com as ações de calculando a instrução no\nendereço da memoria, buscando a instrução e codificando a instrução.\nE a entrada de dados seria o calculando o endereço do operando,\nbusca do operando e execução da operação e a saída de dado\nseria calculando o endereço do resultado e registrando na memoria o resultado.\n");

                       printf("\nÉ correto o que se afirma em:\n");
                       printf("\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) II, III e V, apenas\nE) I,IV e V apenas");


                        printf("\nQual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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

                        printf("\n9- A diferença da linguagem formal e informal está no contexto em que elas são\nutilizadas e na escolha das palavras e expressões usadas para comunicar.\nA linguagem formal é aquela que usamos em situações mais formais, sendo\nmarcada pelo uso da norma culta. A linguagem informal é utilizada em situações\nmais descontraídas, quando existe uma familiaridade entre os interlocutores.");
                       printf("\n\t\tDIANA, Daniela, Linguagem formal e linguagem informal.");

                       printf("\nSobre o texto acima, avalie as afirmações a seguir:");

                       printf("\nI. Na linguagem formal não é necessário o uso da norma culta, sendo comum\no uso de gírias e coloquialismos.");
                       printf("\nII. Uso de palavras abreviadas, como vc, cê e tô é muito comum na linguagem\ncoloquial");
                       printf("\nIII. A pronúncia correta e clara das palavras é uma característica da linguagem\ncoloquial.");
                       printf("\nIV. Uma característica da linguagem formal é a utilização da norma culta,\nrespeitando rigorosamente as normas gramaticais.");
                       printf("\nV. Em situações que exigem mais seriedade é usada a norma culta.\n");

                       printf("\nÉ correto o que se afirma em:\n");
                       printf("\nA)I e V apenas\nB) I, II e III, apenas\nC)I, III e IV, apenas\nD)II, IV e V apenas\nE)I, II, III, IV e V\n");

                        printf("\nQual é a resposta:\t");
                        scanf("%s", resp[r]);

                        while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                            printf("Informe a resposta dentro das opções.\n");
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

                    printf("10- Em um sinal existem elementos cruciais como frequência e períodos.\nPeríodo é o tempo necessário para completar um ciclo\n");
                   printf("e frequência é quantos períodos dentro de um segundo medido em hertz.\nDado uma onda de frequência 20khz10^3 pode se afirmar que.\n\n\n");
                   printf("I-\tO período é 0,05ms10^-3.\n\n\n");
                   printf("\t\tPORQUE\n\n\n");
                   printf("II-\tOs dois são diretamente proporcionais.\n\n");
                   printf("A respeito dessas asserções, assinale a opção correta.\n\n");
                   printf("A)As asserções I e II são proposições verdadeiras,\ne a II é uma justificativa correta da I.\n");
                   printf("B)As asserções I e II são proposições verdadeiras,\nmas a II não é uma justificativa correta da I.\n");
                   printf("C)A asserção I é uma proposição verdadeira, e a II é uma proposição verdadeira.\n");
                   printf("D)A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.\n");
                   printf("E)As asserções I e II são proposições falsas.\n");

                   printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("11- A Inteligência artificial AI é importante porque aborda problemas\nprofundamente difíceis e as soluções para esses problemas");
                    printf(" podem ser aplicadas a\nsetores importantes para o bem-estar humano desde saúde, educação e comércio\n");
                    printf("até transporte, serviços públicos e entretenimento.Desde a década de 1950\n");
                    printf("a pesquisa da AI se concentrou em cinco campos de investigação.\n\n\n");
                    printf("I-a capacidade de resolver problemas através de dedução lógica\n\n");
                    printf("II-a capacidade de representar conhecimento sobre o mundo (o entendimento de\nque existem certas entidades, eventos e situações no mundo, de que esses\nelementos têm propriedades e que os elementos podem ser categorizados.)\n\n");
                    printf("III-a capacidade de definir e atingir metas (há um estado\nespecífico no futuro do mundo que é desejável e sequências\nde ações podem ser realizadas para conseguir progressos neste\nsentido.)\n\n");
                    printf("IV-a capacidade de entender a linguagem escrita e falada.\n\n");
                    printf("V-a capacidade de deduzir coisas sobre o mundo a partir de imagens,\nsons e outros estímulos sensoriais.\n\n");
                    printf("Quais são estes campos de investigação:\n");
                    printf("A) Raciocínio, Planejamento, Conhecimento, Fidelidade e Respeito.\n");
                    printf("B) Raciocínio, Planejamento,Respeito,Comunicação e Conhecimento.\n");
                    printf("C) Percepção, Comunicação, Planejamento,Conhecimento e Raciocínio.\n");
                    printf("D) Percepção, Comunicação, Respeito, Fidelidade e Raciocínio.\n");
                    printf("E) Respeito, Planejamento, Percepção, Comunicação e Fidelidade.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("12- Na hora de fazer redação ou slogan ,as pontuação devem ser usadas\nem seu devidos lugares,");
                    printf("pois se usadas nos lugares errados, as mensagens\ndo remetente sai distorcida para o seu destinatário.\n");
                    printf("Entre elas a vírgula, se empregada não em seu lugar exato, a mensagem\nnão sai com a intenção devida que o remetente quis passar.\n");
                    printf("Agora imagine isso nas propagandas, que é essencial o uso \ncorreto da gramática.");
                    printf("Pois tem que expor as qualidade do produto\ne assim desperta desejos do cliente sobre o produto,\n");
                    printf("para concretizar a venda isso só é possível com uma boa comunicação\npara uma boa comunicação a gramática tem que estar afiada .\n\n\n");
                    printf("Depois de analisar o texto acima ,qual das frases abaixo\nque as vírgulas estão em seu lugares errados.\n\n\n");
                    printf("A) As pessoas, em casa, estão medrosas por causa do corona-vírus.\nB) Medrosas, as pessoas estão, em casa, por causado corona-vírus.\n");
                    printf("C) As pessoas estão medrosas por causa do corona-vírus, em casa.\nD) As pessoas estão medrosas, em casa, por cousa do corona-vírus.\n");
                    printf("E) Em casa, as pessoas, estão, medrosas, por causa do corona vírus.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("13- A transmissão banda-base requer que tenhamos um canal passa-baixa\num canal com largura de banda que começa em zero.\n");
                    printf("Este é o caso se tivermos um meio de transmissão dedicado com toda\nlargura de banda alocada em apenas um canal.\n");
                    printf("A transmissão banda larga, ou modulação, significa transformar o sinal\ndigital em sinal analógico para transmissão. A modulação nos permite usar um\n");
                    printf("canal passa-faixa um canal com largura de banda que não se inicie em zero.\nEsse tipo de canal é mais disponível que um canal de passa-baixa.");
                    printf("\n\nFonte :COMUNICAÇÃO DE DADOS E REDES DE COMPUTADORES autor Behrouz A. Forouzan\n\n");
                    printf("Sobre o texto acima, avalie as afirmações e responda seguir:\nA voz humana Modula vários sinais e os manda pelo ar.\n");
                    printf("Sabendo disso trata-se de uma transmissão banda-base ou de banda-larga?\n");
                    printf("A)Banda-base, pois à modulação de sinais.\nB)Banda-larga ,pois não tem modulação de sinais.\nC)Banda-larga ,pois á modulações de sinais.\n");
                    printf("D) Por ser um sinal digital ele é largura de banda\nE)Banda-base ,pois não a muito variação de sinal\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("14- Nos Circuitos combinacionais o sinal de saída depende única\ne exclusivamente das combinações dos sinais de entrada.\n");
                    printf("Considerando a afirmação acima e os seus conhecimentos,\navalie as afirmações a seguir:\n");
                    printf("\nI. A porta lógica AND (E) fornece na saída o valor lógico 1 apenas quando\ntodas as entradas também tiverem o nível lógico igual a 1\n");
                    printf("II. A Porta NOT ou inversora é uma porta lógica que\nimplementa a negação lógica\n");
                    printf("III. A porta lógica OR (OU), é uma operação lógica entre dois ou mais\noperandos que resulta em um valor lógico falso se, e somente se, todos os\noperandos tiverem um valor falso.\n");
                    printf("IV. XOR (OU exclusivo) é uma operação lógica entre dois operandos que\nresulta em um valor lógico verdadeiro se e somente se os dois operandos\nforem diferentes, ou seja, se um for verdadeiro e o outro for falso\n");
                    printf("V. O NOR é um operador booleano lógico que é resultado\nda negação do operador OR.");
                    printf("\n\nÉ correto o que se afirma em:\nA) I,II,III e IV apenas\nB) II e III, apenas\nC) Ie IV, apenas\nD) II e V, apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("15- Endomarketing pode ser entendido como o Marketing voltado para as ações\ndentro da empresa, também conhecido como Marketing Interno.\n");
                    printf("O termo Endo é oriundo do grego Endus e significa para\ndentro, logo seu conceito é definido como:\n");
                    printf("o estudo das necessidades e desejos dos consumidores.");
                    printf("\n\nFONTE: https://novaescolademarketing.com.br/o-que-e-endomarketing/\n\n");
                    printf("Sobre o texto acima avalie as afirmações a seguir:\nI. Endomarketing é a propaganda fora da empresa para a sociedade.\n");
                    printf("II. Endomarketing é a forma como a sociedade enxerga a empresa\nIII. Endomarketing é a propaganda interna da empresa\n");
                    printf("IV. Endomarketing está limitada apenas aos funcionários.\nV. Endomarketing está limitada apenas aos clientes.\n");
                    printf("É correto oque se afirma em:\nA) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas\nD) III apenas\nE) I, II, III, IV e V\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("16- A transmissão e comunicação entre computadores utiliza\no sinal digital sendo necessário trabalhar comunicação entre\ncomputadores utilizando o digital-digital.\n");
                    printf("Existem padrões para ter uma transmissão e recepção de dados\neficientes é necessário uma auto sincronização dentre\nos métodos de sinal digital.\n");
                    printf("\n\nDentre esses padrões de comunicação digital-digital avalie quais estão corretos.\n\n");
                    printf("I-NRZ(Voltagem positiva define 1 bit e voltagem negativa 0)\nII-NRZ-L-I(A mudança ou falta de mudança no nível da voltagem\ndetermina o valor do bit)\n");
                    printf("III-AMI pseudoternario (O bit 1 é codificado com voltagem\nalternativa e 0 voltagem constante)\nIV-MULTINIVEL (Objetivo é aumentar a taxa de dados diminuindo a velocidade)\n");
                    printf("V-MULTILINHA MLT-3(A variação de voltagem define zero e a constante define 1)\n");
                    printf("\n\nÉ correto o que se afirma em:\n\nA) I e II, apenas \nB) II e III, apenas\nC) III e IV, apenas \nD) II, III e V, apenas \nE) I, II, III, IV e V\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("17- Em projetos envolvendo sistemas lógicos com binacionais,\npara chegar ao circuito final, são necessários seguir 3 passos:\n");
                    printf("\n\n1º Montar a tabela verdade;\n2ºDeterminar a expressão lógica a partir da tabela;\n3ºDeterminar o circuito lógico correspondente ao projeto.\n\n");
                    printf("Considerando a afirmação acima e os seus conhecimentos,\navalie as afirmações a seguir:\n");
                    printf("I- A tabela verdade corresponde às saídas de um sistema\npara todas as combinações de entrada\nII- Podemos montar o circuito lógico correspondente a equação\ndeterminada a partir da tabela verdade.\n");
                    printf("III- Podemos definir o número de combinações através da seguinte\noperação n^2 -> onde n é o número de entradas do sistema.\n");
                    printf("IV- Nas colunas de entrada, da esquerda para a direita, sempre\ncomeçamos pelo número 1 e a partir daí completamos\nas demais colunas com múltiplos de 2.\n");
                    printf("V- A tabela verdade relaciona todas as possíveis combinações para os\nníveis lógicos presentes nas entradas.\n");
                    printf("\n\nÉ correto o que se afirma em:\n\nA) I,II, IV e V apenas\nB) II , III e V apenas\nC) I e IV, apenas\n");
                    printf("D) II,IV e V, apenas\nE) I, II, III, IV e V ");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("18- Durante a historia da humanidade a comunicação sempre se fez presente seja\nentre as pessoas na sociedade, entre sociedades distintas ou mesmo\nescrituras que até hoje são");
                    printf("descobertas e estudadas.\nNa atualidade com o avanço da tecnologia os computadores\npermitem a interação global de forma prática e rápida podemos dizer com\ntranquilidade");
                    printf("que nasceu uma nova forma de comunicação que vem ganhando peso\ne as pessoas que não se adequarem a essa nova forma serão obsoletas.\n");
                    printf("\n\nConsiderando as informações acima, avalie as asserções a seguir e a relação proposta entre elas.\n\n");
                    printf("I - Não existe um sociedade sem comunicação\n\t\tPORQUE\nII - A interação entre as pessoas que forma uma sociedade.\n\n");
                    printf("A) As asserções I e II são proposições verdadeiras, e a II é uma\njustificativa correta da I.\nB) As asserções I e II são proposições verdadeiras, mas a II não\né uma justificativa correta da I.\n");
                    printf("C) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa\nD) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira\n");
                    printf("E) As asserções I e II são proposições falsas\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("19- A transmissão de dados digital-digital se faz extremamente\nimportante para comunicação de computadores, através dessa transmissão\ndos computadores podem trocar dados e");
                    printf(" informações importante, oque  também\nresulta no desenvolvimento de empresas e qualidade do trabalho\nalém do usa domestico.\n");
                    printf("\n\nConsiderando as informações acima, avalie as asserções a seguir\ne a relação proposta entre elas\n");
                    printf("I-Os componentes DC podem atrapalhar a transmissão de dados digital-digital\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-É gerando um campo eletromagnético que corrompe a mensagem.\n\n");
                    printf("A) As asserções I e II são proposições verdadeiras, e a II é uma\njustificativa correta da I.\n");
                    printf("B) As asserções I e II são proposições verdadeiras, mas a II não\né uma justificativa correta da I.\n");
                    printf("C) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa.\n");
                    printf("D) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.\n");
                    printf("E) As asserções I e II são proposições falsas.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("20- O termo Hierarquia de memória se refere a uma classificação de\ntipos de memória em função de desempenho.\nEssa classificação geralmente segue duas dimensões:\n");
                    printf("tamanho/capacidade e velocidade de acesso, sendo tradicionalmente\nrepresentada por uma pirâmide. A base da pirâmide representa dispositivos\nde armazenamentode massa,");
                    printf("de baixo custo por byte e, comparativamente,\nbaixa velocidade de acesso. O preço acessível faz com que esse tipo de\narmazenamento esteja disponível em grandes");
                    printf(" volumes. Um exemplo é o DVD.\n");
                    printf("No topo da pirâmide encontram-se dispositivos extremamente velozes e, ao mesmo\ntempo, de custo elevado. Exemplo são células de memória 6T usadas na construção\n");
                    printf("de memória cache. Devido ao alto preço, esse tipo de memória\né utilizado em pequena quantidade nas máquinas.\n");
                    printf("\n\t\tFonte: https://pt.wikipedia.org/wiki/Hierarquia_da_mem%C3%B3ria\n\n");
                    printf("Considerando as informações acima, avalie as asserções\na seguir e a relação proposta entre elas.\n");
                    printf("I-Quanto mais perto do topo da pirâmide maior o custo e a velocidade de acesso\n");
                    printf("\t\t\tPORQUE\n");
                    printf("II-E menor  a capacidade\n\n");
                    printf("A) As asserções I e II são proposições verdadeiras, e a II é\numa justificativa correta da I.\n");
                    printf("B) As asserções I e II são proposições verdadeiras, mas a II não\né uma justificativa correta da I.\n");
                    printf("C) A asserção I é uma proposição verdadeira, e a II é uma proposição falsa.\n");
                    printf("D) A asserção I é uma proposição falsa, e a II é uma proposição verdadeira.\n");
                    printf("E) As asserções I e II são proposições falsas.\n");

                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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

                    printf("21- A administração do tempo se mostra essencial para uma melhor qualidade\nde vida e eficiência dos resultados pretendidos. Os grande empresários\ntrabalham com organização");
                    printf("do tempo contando com horários de descanso, trabalhos, lazer.Já é comprovado por artigos acadêmicos a melhora de qualidade de vida\nsomente de administrar melhor o tempo.\n");
                    printf("\n\nSobre o texto acima, avalie as afirmações a seguir:\n\n");
                    printf("I – Administração do tempo melhora a qualidade do trabalho.\nII – Pessoas com o tempo organizado são mais estressadas\nIII – Usar a organização do tempo exige auto controle\n");
                    printf("IV – Organização do tempo faz o trabalho ficar mais tedioso\nV – Usar a organização de tempo melhora a saúde física e mental \n");
                    printf("A) I e II, apenas\nB) II e III, apenas\nC) III e IV, apenas \nD) I, III e V, apenas\nE) I, II, III, IV e V\n");


                    printf("\nQual é a resposta:\t");
                    scanf("%s", resp[r]);

                    while(strcmp(resp[r], "A")<0 || strcmp(resp[r], "E")>0 && strcmp(resp[r], "a")<0 || strcmp(resp[r], "e")>0){
                        printf("Informe a resposta dentro das opções.\n");
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
                    //Esse for define os valores de coq para ser imprimido em ordem crescente na função
                    for(r=0;r<21;r++){
                        coq[r]=r+1;
                    }
                    /*Chamar função tabela com 3 variaveis coq (ordem das quetões)
                    nome (o nome do usuario a ser imprimido
                    certa resposta a ser comparada para verificar se a resposta do usuario está correta
                    resp resposta escolhida pelo usuario*/
                    resultado(i,e,nome);
                    break;
                    }
    /*Chamada de função para imprimir e calcular o resultado final
    i contador questões certas
    e contador questões erradas
    nome nome do usuario a ser imprimido*/
    tabela(coq,nome,certa,resp);
    return 0;
    }
