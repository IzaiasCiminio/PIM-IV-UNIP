#import <stdio.h>
#import <stdlib.h>
#import <string.h>
#import <locale.h>
#import <time.h>

#define SIZE 30

void main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;
    char login1[SIZE],senha1[SIZE];
    char login[SIZE] = "PIMIV";
    char senha[SIZE] = "UNIP123";
    char nomeResponsavel[SIZE],nomeEmpresa[SIZE],cnpj[SIZE],razaoSocial[SIZE],nomeFantasia[SIZE],telefone[SIZE],email[SIZE],insumo[SIZE],quantidade[SIZE];
    char rua[SIZE],num[SIZE],bairro[SIZE],cidade[SIZE],estado[SIZE],cep[SIZE];
    int diaN,mesN, anoN;
    int respC;
    int logado;
    time_t t;
    time(&t);


    struct tm*data = localtime(&t);
    int anoA = data->tm_year+1900;
    int diaA = data->tm_mday;
    int mesA = data->tm_mon+1;

    printf("+++++++++++++++++++++++++++++++++++++++\n");
    printf("+            BEM VINDO(A)!            +\n");
    printf("+         SISTEMA DE CADASTRO         +\n");
    printf("+            DE IND�STRIA             +\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");

    printf("LOGIN:");
    fflush(stdin);
    gets(login1);
        if(strcmp(login1,login)==0){
            printf("SENHA: ");
            fflush(stdin);
            gets(senha1);
            if(strcmp(senha1,senha)==0){
                logado=1;
            } else{
                printf("SENHA INCORRETA");
            }
        } else{
            printf("LOGIN INCORRETO");
        }

    if(logado==1){
        system("cls");
        FILE *ponteiroCadastro;
        ponteiroCadastro=fopen("cadastro.txt", "a");
        printf("CADASTRO EMPRESA\n");
        printf("DATA %d/%d/%d\n", diaA,mesA,anoA);
        printf("NOME DA EMPRESA: ");
        fflush(stdin);
        gets(nomeEmpresa);
        printf("NOME FANTASIA: ");
        fflush(stdin);
        gets(nomeFantasia);
        printf("NOME RESPONS�VEL: ");
        fflush(stdin);
        gets(nomeResponsavel);
        printf("RAZ�O SOCIAL: ");
        fflush(stdin);
        gets(razaoSocial);
        printf("CNPJ EMPRESA XX.XXX.XXX/XXXX-XX: ");
        fflush(stdin);
        gets(cnpj);
        printf("TIPO DE INSUMO: ");
        fflush(stdin);
        gets(insumo);
        printf("QUANTIDADE Quilograma (KG)/Tonelada(T): ");
        fflush(stdin);
        gets(quantidade);

        printf("=DATA DE CRIA��O DA EMPRESA=\n");
        printf("DIA:");
        fflush(stdin);
        scanf("%d", &diaN);
        printf("MES:");
        fflush(stdin);
        scanf("%d", &mesN);
        printf("ANO(AAAA):");
        fflush(stdin);
        scanf("%d", &anoN);

        printf("\n=====INFORMAR ENDERE�O DA EMPRESA===\n");
        printf("RUA: ");
        fflush(stdin);
        gets(rua);
        printf("NUMERO: ");
        fflush(stdin);
        gets(num);
        printf("BAIRRO: ");
        fflush(stdin);
        gets(bairro);
        printf("CIDADE: ");
        fflush(stdin);
        gets(cidade);
        printf("ESTADO: ");
        fflush(stdin);
        gets(estado);
        printf("CEP: ");
        fflush(stdin);
        gets(cep);

        printf("E-MAIL(CASO N�O TENHA, COLOCAR N/P): ");
        fflush(stdin);
        gets(email);;


        fprintf(ponteiroCadastro, "\nCADASTRO EMPRESA\n");
        fprintf(ponteiroCadastro, "NOME DA EMPRESA:%s", nomeEmpresa);
        fprintf(ponteiroCadastro, "\nNOME FANTASIA:%s", nomeFantasia);
        fprintf(ponteiroCadastro, "\nNOME RESPONS�VEL:%s", nomeResponsavel);
        fprintf(ponteiroCadastro, "\nRAZ�O SOCIAL:%s", razaoSocial);
        fprintf(ponteiroCadastro, "\nCNPJ EMPRESA:%s", cnpj);
        fprintf(ponteiroCadastro, "\nDATA DE CRIA��O DA EMPRESA:%d/%d/%d", diaN,mesN,anoN);
        fprintf(ponteiroCadastro, "\nEndere�o:%s, %s, %s, %s, %s", rua,num,bairro,cidade,estado);
        fprintf(ponteiroCadastro, "\nCEP:%s\n",cep);
        fprintf(ponteiroCadastro, "\nTIPO DE INSUMO :%s",insumo);
        fprintf(ponteiroCadastro, "\nQUANTIDADE:%s", quantidade);

        }

        system("pause");

    }

