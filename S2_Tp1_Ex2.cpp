//Ecrire un programme qui accepte � partir du clavier le nom d�un fichier texte et
//affiche son contenu sur �cran.

#include<stdio.h>

void affiche_fichier (FILE *fp){
	
	//d�placer le curceur de fichier au debut
	rewind (fp);
	
	//lecture et affichage le contenu du fichier
	int c; //representer les caractere
	while ( (c= fgetc(fp))!= EOF){ //lire caract�re par caract�re jusqu'� la fin du fichier 
		putchar(c); 
	}
}

int main(){
	char nom[100]; //nom du fichier
	FILE *fp;
	
	//lecture du nom du fichier � partir du clavier
	printf("donner le nom d'un fichier :");
	gets(nom);
	
	//ouverture du fichier en mode read
	fp =fopen(nom,"r");
	
	//verifier si le pointeur du fichier est valide 
	if (fp == NULL){
		printf("le fichier n'a pas put etre ouvert");
		return 0;
	}
	
	//appel de fonction 
	affiche_fichier (fp);
	
	//fermuture du fichier
	fclose (fp);
	
	return 0;
}
