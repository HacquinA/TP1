#include <stdio.h>

int ninjago = 30;
int ninjaga = 30;
float huss = 5.0;
int choix = 0;
int i=100;                                                                                                                                                                                                                                      


int main(){

printf("Pv ninjaga: %d\n",ninjago);
printf("Pv ninjaga: %d\n",ninjaga);


	for (i=100; i>=0;i--){
	    
	    while(ninjaga >0 && ninjago>0){

	    	printf("Ninjago t'inflige l'attaque 'huss', tu perds 5 PV !\n");

	        ninjaga= ninjaga - huss;

		    printf("Pv ninjaga restant: %d\n",ninjaga);
	    	
	    	printf("Ninjaga contre attaque que fait-elle ?  \n");
		
		    printf("(1): attaque (2): défense \n");

		    scanf("%d", &choix);
		    	if(choix == 1){
			        ninjago= ninjago - huss;
			    }
		        else if(choix==2){
			        huss= huss / 4;
			    }

	        printf("Pv restant ninjago: %d\n",ninjago);

	    }
	
	}
return 0;
}
