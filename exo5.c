#include <stdio.h>


float monstre = 30.0;
float ninjaga = 30.0;
float huss = 5.0;
int choix = 0;


int i=100;


int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}


int main(){

printf("Pv monstre: %f\n",monstre);
printf("Pv ninjaga: %f\n",ninjaga);


	for (i=100; i>=0;i--){

	    	while(ninjaga >0 && monstre>0){

		    	int a = 1;
                int b = 3;
	            int choixmonstre=rand_a_b(1, 3);

			    scanf("%d", &choix);
			    	if(choix == 1){
			    	    if(choix== 1){
				        monstre= monstre - huss;
    				        printf("monstre t'inflige l'attaque 'huss', tu perds 5 PV !\n");
    
    				        ninjaga= ninjaga - huss;
    
    					    printf("Pv ninjaga restant: %f\n",ninjaga);
    				    	
    				    	printf("Ninjaga contre attaque que fait-elle ?  \n");
    				    	printf("(1): attaque (2): défense \n");
			    	    }
				    	else if(choixmonstre == 2){
    				        monstre= monstre - huss/4;
    
    					    printf("Pv monstre restant: %f\n",ninjaga);
    				    	
    				    	printf("Ninjaga contre attaque que fait-elle ?  \n");
    						printf("(1): attaque (2): défense \n");
	
				        }
			    	}
			        else if(choix == 2){
			            if(choixmonstre == 1){
			            printf("Pv ninjaga restant: %f\n",ninjaga);

				        huss= huss / 4;
				        }
				        else if(choixmonstre == 2){
				        printf("Pv ninjaga restant: %f\n",ninjaga);
				        }
			        }

		        printf("Pv restant monstre: %f\n",monstre);

	    }
	
	}
return 0;
}

