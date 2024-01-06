#include <stdio.h>//biblioteca de comunicação com usuário
#include <stdlib.h>//biblioteca de alocação de espaço em memória
#include <locale.h>//biblioteca de alocações de texto por região
#include<string.h>//biblioteca responsável por cuidar das string
    
    int registro()//função responsável por cadastrar os usuários no sistema
    {
      //inicio criação de variaveis/string
      
      char arquivo[40];
      char cpf[40];
      char nome[40];
      char sobrenome[40];
      char cargo[40];
      //final da criação de variaveis/string
      
      printf("Digite o CPF a ser cadastrado:");//coletando informação do usuario
      scanf("%s",cpf);//%s refere-se a string
      
      strcpy(arquivo,cpf);//responsável por copiar os valores das string
      
      FILE*file;//cria arquivo
      file=fopen(arquivo,"w");//cria arquivo e a "w" significa escrever
      fprintf(file,cpf);//salvo o valor da variavel
      fclose(file);//fecha o arquivo
      
      file=fopen(arquivo,"a");//abrindo arquivo
      fprintf(file,",");
      fclose(file);//fechando arquivo
      
      printf("Digite o nome a ser cadastrado:");//coletando informação do usuário
      scanf("%s",nome);
      
      file=fopen(arquivo,"a");//abre arquivo
      fprintf(file,nome);
      fclose(file);//fecha arquivo
      
      file=fopen(arquivo,"a");//abre arquivo
      fprintf(file,",");
      fclose(file);//fecha arquivo
	        
      printf("Digite o sobrenome a ser cadastrado:");//coletando informação do usuário
      scanf("%s",sobrenome);
      
      file=fopen(arquivo,"a");
      fprintf(file,sobrenome);
      fclose(file);
      
      file=fopen(arquivo,"a");
      fprintf(file,",");
      fclose(file);
	        
      printf("Digite o cargo a ser cadastrado:");//coletando informação do usuário
      scanf("%s",cargo);
      
      file=fopen(arquivo,"a");
      fprintf(file,cargo);
      fclose(file);
      
      system("pause");//pausa na opção desejada
   
    	
	}
    int consultar()
    {
     setlocale(LC_ALL,"portuguese");//definindo linguagem
     
     //inicio criação variaveis/string	
     char cpf[40];
     char conteudo[200];
     //fim criação variaveis
     
     printf("Digite o CPF a ser consultado:");//coletando informação do ususário
     scanf("%s",cpf);//refere-se a string
     
     FILE *file;//cria arquivo
     file=fopen(cpf,"r");
     
     if(file==NULL)
     {
      printf("Não foi possivel abrir arquivo,não localizado!\n");
	 }
	 
	  while(fgets(conteudo ,200 ,file)!=NULL)//caso o conteudo for nulo
	  {
	   printf("\nEssas são as informações do usuario:");
	   printf("%s",conteudo);
	   printf("\n\n");
	  }
	   system("pause");
	  
	}
	  
	  
	  
	  
	int deletar()
	{
	 	printf("Você escolheu deletar nomes!\n");
	    system("pause");//pausa na escolha opção desejada
	}
	
	
    int main()
	{	
    int opcao=0;//Definindo variáveis
   	int laco=1;
   	
	  
   	for(laco=1;laco=1;)
   	
   	{
     system("cls");//responsável por limpar tela
   
	setlocale(LC_ALL,"portuguese");//Definindo a linguagem
	
	printf("### cartório da ebac###\n\n");//Inicio do menu
	printf("Escolha a opção desejada do menu:\n");
	printf("\t1-Registrar nomes\n");
	printf("\t2-Consultar nomes\n");
	printf("\t3-Deletar nomes\n");
	printf("Opção:");//Fim do menu
	
	scanf("%d",&opcao);//armazenando a escolha do usuario
		
	system("cls");//responsável por limpar a tela

	switch(opcao)//inicio da seloeção
	{
    case 1:
    registro();//chamada de funções
    break;
	
	case 2:
	consultar();
	break;
	
	case 3:
	deletar();
	break;
	
	default:
	printf("Essa opção não está disponível!\n");
	system("pause");
	break;
	//fim da seleção
    
	}
 }
}
	
	


	
	

