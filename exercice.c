#include<stdio.h>

typdefstruct noeud {
    int val;
    struct noeud *suivant;
}noeud;
  int taille(noeud *debut){
    int cont = 0;
      noeud* tmp = debut;
while (tmp != null){
        cont++;
        tmp = tmp->suivant;
}
        return debut;
  }

void recherche(noeud *debut,int val){

    noeud *tmp = debut;
    while(tmp != null){
        if(tmp->val == val )
        exit(1);
        tmp = tmp->suivant;

    }
    
}
noeud *suppressionD(noeud*debut){
    if(debut == null){
        printf("la liste est vide");
        return null;//return debut ;
    
    }
    else {
noeud *tmp = debut ;
   debut = debut->suivant ;
   free(tmp);
    }
    return debut ; 
}
noeud *suppressionF(noeud*debut){
    if(debut == null){
        printf("la liste est vide");
        return null;//return debut ;
    
    }
    else {
        noeud *tmp = debut;
        if(tmp ->suivant = null){
            free(tmp);
        }
        return null;
    }
    while(tmp -> suivant -> suivant!= null){
        tmp = tmp-->suivant;
        free(tmp->suivant); 
        tmp->suivant = null 
    }
}return debut;
noeud *suppressionPOS(noeud*debut, int pos ){
    if(debut == null){
        printf("la liste est vide");
        return null;//return debut ;
        }
    else{
         if(pos<1 || pos>taille)
         return debut;
         if(pos == 1)
         return suppressionD;
         noeud *tmp=debut;
         for(int i=1 ; i<pos-1;i++){
            tmp = tmp->suivant;
         }
         noeud *ptr = tmp->suivant;
         tmp->suivant = ptr ->suivant;
         free(ptr);

    }
    return debut;
    }
noeud *modifierD(noeud*debut,int val){
     if(debut == null){
        printf("la liste est vide");
        return null;
     }
     else{
        debut -> val=val;
     }
}return debut;

noeud *modifierF(noeud*debut,int val){
    if(debut == null){
       printf("la liste est vide");
       return null;
    }
    else{
noeud *tmp=debut;
while(tmp->suivant != null){
    tmp = tmp->suivant ;
 
}
tmp->val = val;
    }
    return debut;
}

noeud *modifierP(noeud*debut, int pos, int val){
        if(debut == null){
            printf("la liste est vide");
            return null;//return debut ;
            }
        else{
             if(pos<1 || pos>taille)
             return debut;
             if(pos == 1)
             return modifierD;
             noeud *tmp =debut;
              for(int i=1;i<pos;i++){
                tmp= tmp->suivant;
              }
tmp->val =val;
    }
    
}return debut;


int main()
{
    noeud *debut =NULL;
    noeud *P = cree(10);
    noeud *B = cree(550);
    noeud *T = cree(100);

    printf("l'adresse de debut est %p . \n",debut);
    printf("l'adresse de P est %p . \n",P);
    printf("l'adresse de B est %p . \n",B);
    printf("l'adresse de T est %p . \n",T);

    debut=P;
    P->suiv=B;
    B->suiv=T;
    T->suiv=NULL;

    printf("\nl'adresse de debut est %p . \n",debut);
    printf("l'adresse de P est %p . \n",P);
    printf("l'adresse de B est %p . \n",B);
    printf("l'adresse de T est %p . \n",T);

    printf("\n ajout debut:\n");
    debut= ajoutdebut(debut,2000);
    affichage(debut);

   printf("\n la taille de la liste est %d",taille(debut));

    printf("\n ajout fin :\n");
   debut = ajoutfin(debut, 300);
   affichage(debut);

    printf("\n suppression debut:\n");
    debut = suppressionD(debut);
    affichage(debut);

    printf("\n suppression fin:\n");
    debut = suppressionF(debut);
    affichage(debut);

    printf("\n inserer valeur a la position 2 :\n");
    debut = insertion(debut, 2, 60);
    affichage(debut);

    printf("\n modifier debut:\n");
    debut = modifierD(debut, 30);
    affichage(debut);

    printf("\n modifier fin:\n");
    debut = modifierF(debut, 50);
    affichage(debut);

    printf("\n modifier a position 2:\n");
    debut = modifierP(debut, 200, 2);
    affichage(debut);


    printf("\n rechercher la valeur 100:\n");
    noeud* resultat = rechercher(debut, 100);

    return 0;
}
