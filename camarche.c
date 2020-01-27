#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}

 
int main(){

srand(time(NULL));

float monstre = 30;
float ninjaga = 30;
float huss = 0;
float gigahuss = 0;
int choix = 0;
int choixmonstre=0;
int i=100;
int pm = 15;
int husspoison = 4;


printf("Pv Monstre: %f\n",monstre);
printf("Pv ninjaga:%f\n",ninjaga);


	for (i=100; i>=0;i--){
	    
	    while(ninjaga >0 && monstre>0){
	    	int a = 1;
            int b = 3;
	        int choixmonstre=rand_a_b(1, 3);
	        	printf("Attaque(1) ou défense(2) ou poison(3) \n");
	        	scanf("%d",&choix);
	    	if (choix==1){
	    		if (choixmonstre==1){
	    			huss=5.0;
	    			gigahuss=7.0;
	    			monstre-=huss;
	    			ninjaga-=gigahuss;
	    			printf("Tu as perdu 5PV %f\n", ninjaga);
	    			printf("Le monstre a perdu 5PV %f\n",monstre);
	    		}
	    		if (choixmonstre==2){
	    			huss=2.0;
	    			monstre-=huss;
	    			printf("Le monstre se défend et perd seulement 2PV %f\n", ninjaga);
	    		}
	    	}
	    	if (choix==2){
	    		if (choixmonstre==1){
	    			gigahuss=3.0;
	    			ninjaga-=gigahuss;
	    			printf("Tu as perdu 3PV\n");
	    			printf("%f\n",ninjaga);

	    		}
	    		if (choixmonstre==2){
	    			printf("Tout le monde se défend, personne ne prend de dégats.\n");
	    		}
			}
			if (choix==3){
				if (choixmonstre==1){
					monstre-= husspoison;
					pm -= 4;
					printf("Tu perds 4 pm et tu infliges 4 pts de dégats au monstre par tour.\n");
					printf("pm restant:%d\n",pm);
					printf("pts de vie restant monstre:%f\n",monstre);
				}
				if (choixmonstre==2){
	    			huss=2.0;
	    			monstre-=huss;
	    			printf("Le monstre se défend et perd seulement 2PV %f\n", ninjaga);
	    		}
	    		if (choixmonstre==3){
	    			monstre-= husspoison;
					pm -= 4;
					printf("Tu perds 4 pm et tu infliges 4 pts de dégats au monstre par tour.\n");
					printf("pm restant:%d\n",pm);
					printf("pts de vie restant monstre:%f\n",monstre);
	    		}
	    }
	
	}
return 0;
}

