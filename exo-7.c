#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}

 
int main(){

	float ninjaga = 30;
	int choix = 0;

	srand(time(NULL));

	float monstre = 30;
	
	float huss = 5.0;
	float gigahuss = 7.0;
	
	int choixmonstre=0;
	int i=100;
	int pm= 15;
	int pmMonstre=15;
	int hussPoison = 4;
	int isNinjagaPoison=0;


	int nTour = 0;


	

    while(ninjaga > 0 && monstre > 0)
    {
    	printf("____________________\n");
    	printf("Tour: %d \n",nTour );
    	printf("____________________\n\n");

    	printf("Pv Monstre: %f\n\n",monstre);
		printf("Pv ninjaga:%f\n\n",ninjaga);


    	
    	//Action Joueur
        printf("Attaque(1) ou défense(2) ou poison(3) \n\n");
        printf("------------\n");
        scanf("%d",&choix);
        printf("------------\n\n");

        //Action Monstre
        choixmonstre= rand()%3+1;

    	if (choix==1){

    		printf("Vous attaquez le monstre !\n\n");
    		printf("-- -- -- -- -- --\n\n");
    		
				if (choixmonstre == 2)
				{
    				monstre-= (huss / 4);
    				printf("Le monstre se défend et perd seulement 2PV \n\n");
    			}
    			else
    			{
    				monstre -= huss;
    				printf("Le monstre a perdu 5PV\n\n");
    			}
    		
	    		if (choixmonstre == 1){
	    			printf("Le monstre contre-attaque\n\n");
	    			ninjaga -= gigahuss;
	    			printf("Tu as perdu 7 PV \n");
	    		}	

	    		//monstre choix  poison
	    		if (choixmonstre == 3){
	    			printf("Le monstre lance un sort de poison!\n\n");
	    			printf("Le monstre perds 3 PM!\n\n");
	    			pmMonstre -= 3;
	    			printf("Vous etes empoisonne!\n\n");
	    			isNinjagaPoison = 1;

	    		}
    	}

    	//le joueur se defend
    	if (choix==2){

    		if (choixmonstre==1){
    			ninjaga-= (huss / 4);
    			printf("Tu as perdu 3PV \n");
    		}

    		if (choixmonstre==2){
    			printf("Tout le monde se defend, personne ne prend de degats.\n");
    		}
		}

		if (choix==3){

			printf("Tu perds 4 PM \n");
			pm-=4;
				if(choixmonstre==1){
					monstre-= hussPoison;
					printf("Tu infliges 4 pts de degats au monstre avec le hussPoison \n");
					
					ninjaga-= gigahuss;
					
				}

				if (choixmonstre==2){
					monstre-= hussPoison;
					printf("Le monstre ne peut pas se défendre du hussPoison, il prend 4 pts de dégats. \n");
				}

				if (choixmonstre==3){
					monstre-= hussPoison;
					printf("Tu infliges 4 pts de degats au monstre avec le hussPoison\n");
					
					printf("Le monstre t'infige son poison, tu prend 4 pts de dégats à chaque tours. \n");

				}

			
		}


		if (choix==4){

					printf("Tu perds 3 PM \n");
					pm-=3;
						if(choixmonstre==1){
							isNinjagaPoison = 0;
							printf("Tu te soigne du poison\n");
							prprintf("Le monstre contre-attaque\n\n");
	    					ninjaga -= gigahuss;
														
						}

						if (choixmonstre==2){
							isNinjagaPoison = 0;
							printf("Tu te soigne du poison\n");
							printf("Le monstre ne se protège, meme si tu n'attaque pas. \n");
						}

						if (choixmonstre==3){
							isNinjagaPoison = 0;
							printf("Tu te soigne du poison\n");
							printf("Le monstre t'infige son poison, c'est inefficace, car tu as pris l'antidote. \n");

						}

					
				}


    if (isNinjagaPoison >=1){
    	ninjaga =  ninjaga - hussPoison;
    }

    nTour = nTour + 1;
	  }
	
	return 0;
}
