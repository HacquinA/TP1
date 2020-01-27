#include <stdio.h>

float monstre = 30;
float ninjaga = 30;
float huss = 5.0;
int choix = 0;
int i=100; 


int main(){

printf("Pv Monstre: %d\n",monstre);
printf("Pv ninjaga: %d\n",ninjaga);


	for (i=100; i>=0;i--){
	    
	    while(ninjaga >0 && monstre>0){
	    	int a = 1;
            int b = 3;
	        int choixmonstre=rand_a_b(1, 3);

	    	printf("monstre t'inflige l'attaque 'huss', tu perds 5 PV !\n");

	        ninjaga= ninjaga - huss;

		    printf("Pv ninjaga restant: %f\n",ninjaga);
	    	
	    	printf("Ninjaga contre attaque que fait-elle ?  \n");
		
		    printf("(1): attaque (2): défense \n");

		    scanf("%d", &choix);
		    	if(choix == 1){
			        monstre= monstre - huss;
			        printf("Tu attaque le monstre perd 5 PV:%f\n",monstre);
			    }
		        else if(choix==2){
			        huss= huss / 4;
			        printf("Tu te defends tu ne perds pas de vie:%f\n",ninjaga );
			    }

	        printf("Pv restant monstre: %f\n",monstre);

	    }
	
	}
return 0;
}
