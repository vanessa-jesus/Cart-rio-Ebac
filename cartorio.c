#include <stdio.h>//biblioteca de comunica��o com usu�rio
#include <stdlib.h>//biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblioteca de aloca��es de texto por regi�o
#include<string.h>//biblioteca respons�vel por cuidar das string
    
    int registro()//fun��o respons�vel por cadastrar os usu�rios no sistema
    {
      //inicio cria��o de variaveis/string
      
      char arquivo[40];
      char cpf[40];
      char nome[40];
      char sobrenome[40];
      char cargo[40];
      //final da cria��o de variaveis/string
      
      printf("Digite o CPF a ser cadastrado:");//coletando informa��o do usuario
      scanf("%s",cpf);//%s refere-se a string
      
      strcpy(arquivo,cpf);//respons�vel por copiar os valores das string
      
      FILE*file;//cria arquivo
      file=fopen(arquivo,"w");//cria arquivo e a "w" significa escrever
      fprintf(file,cpf);//salvo o valor da variavel
      fclose(file);//fecha o arquivo
      
      file=fopen(arquivo,"a");//abrindo arquivo
      fprintf(file,",");
      fclose(file);//fechando arquivo
      
      printf("Digite o nome a ser cadastrado:");//coletando informa��o do usu�rio
      scanf("%s",nome);
      
      file=fopen(arquivo,"a");//abre arquivo
      fprintf(file,nome);
      fclose(file);//fecha arquivo
      
      file=fopen(arquivo,"a");//abre arquivo
      fprintf(file,",");
      fclose(file);//fecha arquivo
	        
      printf("Digite o sobrenome a ser cadastrado:");//coletando informa��o do usu�rio
      scanf("%s",sobrenome);
      
      file=fopen(arquivo,"a");
      fprintf(file,sobrenome);
      fclose(file);
      
      file=fopen(arquivo,"a");
      fprintf(file,",");
      fclose(file);
	        
      printf("Digite o cargo a ser cadastrado:");//coletando informa��o do usu�rio
      scanf("%s",cargo);
      
      file=fopen(arquivo,"a");
      fprintf(file,cargo);
      fclose(file);
      
      system("pause");//pausa na op��o desejada
   
    	
	}
    int consultar()
    {
     setlocale(LC_ALL,"portuguese");//definindo linguagem
     
     //inicio cria��o variaveis/string	
     char cpf[40];
     char conteudo[200];
     //fim cria��o variaveis
     
     printf("Digite o CPF a ser consultado:");//coletando informa��o do usus�rio
     scanf("%s",cpf);//refere-se a string
     
     FILE *file;//cria arquivo
     file=fopen(cpf,"r");
     
     if(file==NULL)
     {
      printf("N�o foi possivel abrir arquivo,n�o localizado!\n");
	 }
	 
	  while(fgets(conteudo ,200 ,file)!=NULL)//caso o conteudo for nulo
	  {
	   printf("\nEssas s�o as informa��es do usuario:");
	   printf("%s",conteudo);
	   printf("\n\n");
	  }
	   system("pause");
	  
	}
	  
	  
	  
	  
	int deletar()
	{
	 	printf("Voc� escolheu deletar nomes!\n");
	    system("pause");//pausa na escolha op��o desejada
	}
	
	
    int main()
	{	
    int opcao=0;//Definindo vari�veis
   	int laco=1;
   	
	  
   	for(laco=1;laco=1;)
   	
   	{
     system("cls");//respons�vel por limpar tela
   
	setlocale(LC_ALL,"portuguese");//Definindo a linguagem
	
	printf("### cart�rio da ebac###\n\n");//Inicio do menu
	printf("Escolha a op��o desejada do menu:\n");
	printf("\t1-Registrar nomes\n");
	printf("\t2-Consultar nomes\n");
	printf("\t3-Deletar nomes\n");
	printf("Op��o:");//Fim do menu
	
	scanf("%d",&opcao);//armazenando a escolha do usuario
		
	system("cls");//respons�vel por limpar a tela

	switch(opcao)//inicio da seloe��o
	{
    case 1:
    registro();//chamada de fun��es
    break;
	
	case 2:
	consultar();
	break;
	
	case 3:
	deletar();
	break;
	
	default:
	printf("Essa op��o n�o est� dispon�vel!\n");
	system("pause");
	break;
	//fim da sele��o
    
	}
 }
}
	
	


	
	

