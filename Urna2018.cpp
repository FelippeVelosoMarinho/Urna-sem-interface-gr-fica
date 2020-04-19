	#include<stdio.h>
	#include<stdlib.h>
	
	int main(){
		
		int nro, cont=0, voto=0, voto2=0, voto3=0;
		
		while(cont<=5){
		printf("_________________________ \n");
		printf(" 78 Policial Disfarcado-PDE \n");
		printf(" 34 Natasha Caldeirao-PNC \n");
		printf(" 00 BRANCO \n");
		printf( "________________________ \n");
		printf( "Informe o numero do candidato: ");
		scanf("%d", &nro);
		system("cls");
		
		switch(nro){
		case 78:{
			printf(" Voce votou em Policial Disfarcado-PDE \n");
			printf(" Computado com sucesso ! \n");
			
			voto=voto+1;
			system("pause");
			system("cls");
			break;
		}
		case 34:{
			printf(" Voce votou em Natasha Caldeirao-PNC \n");
			printf(" Computado com sucesso ! \n");
			
			voto2=voto2+1;
			system("pause");
			system("cls");
			break;
		}

		case 00:{
			printf(" Voce votou em BRANCO \n");
			printf(" Computado com sucesso ! \n");
			
			voto3=voto3+1;
			system("pause");
			system("cls");
			break;
		}
		
		}
		
		cont=cont+1;
	}
	
		printf("Resultado\n");
		printf("Policial Disfarcado-PDE: %d\n", voto);
		printf("Natasha Caldeirao-PNC: %d\n", voto2);
		printf("BRANCO: %d\n", voto3);
	
	
	
	}
