># **Rapport Space Invader**

projet realisé par *Allan Lazes*.


## **sommaire:**

- Mode d'emploit
- 3 grandes difficultés
- liste des notions apprises / decouverte / peaufinées
- Conclusion

***

## **Mode d'emploit:**

### Les touches:

le jeu se lance sur une fenêtre statique.
- à partir de là pour lancer le jeu il suffit d'appuis sur la touche "s"

une fois en jeu:
- appuis sur "q" pour un deplacement vers la gauche.
- appuis sur "d" pour un deplacement vers la droite.
- appuis sur "z" pour deployer un missile.

une fois la partie terminée:
- appuyer sur le bouton "reset" de la carte pour relancer une partie

### A l'ecran: 

Lorsque le jeu est lancé, le nombre d'ennemies restantes est affiché en haut à droite de l'écran.
- une fois que le nombre d'ennemies est tombé à 0 le jeu se termine.

***

## Les 3 grandes difficultés:

### **repartir le code dans différent fichier:**

Sur un petit code il n'est pas nécessaire de le repartir dans différents fichiers. Mais quand celui-ci devient conséquent il devient nécessaire de le repartir de manière stratégique dans différents fichiers pour augmenter la lisibilité ainsi que le debbug.

Quand j'ai commencé à avoir un code long et assez peu lisible, j'ai commencé à envisager de la repartir, c'est simple dans l'idée mais moins dans la pratique. \
En C on ne peut retourner un seul type de valeur. donc il a fallu que je développe le `main` en sachant que dès que je vais faire appel à une fonction celle-ci ne me retournera un seul type de valeur.
j'ai passé beaucoup de temps sur ça car ce n'était pas maitrisé, mais maintenant j'ai un code fonctionnel avec des appels de fonctions reparties dans différents fichiers.
  
### **optimisation:**

Au début du code, je n'ai pas de problème, je bouge juste mon vaisseau et j'afficher que quelques ennemies.

Mais quand j'en suis venu à générer plus d'ennemies, le missile et le déplacement de mon vaisseau, je me suis retrouvé avec une interface a environ 4-5 Fps. Il a donc fallu ce que trouve comment retrouver de la fluidité sans perdre en qualité.

Pour générer le missile j'utilise un compteur qui s'incrémente continuellement et qui est réinitialisé une fois la limite atteinte. Au début du développement le compteur allait jusqu'à `65,000`. Maintenant il est réduit à `30` pour avoir une interface fluide.

### trouver un autre probleme

***

## **Notions apprises:**

durant ce projet, j'ai pu mettre en oeuvre certains éléments vus dans le cours, comme:
- l'initialisation des variable
- l'utilisation de fonction 
- les conditions
- l'optimisation
- Répartition du code dans different fichier

### **Les fonctions**

Les fonctions sont utiles quand on utilise plusieurs fois le même bout de code.

il permet d'avoir une seule fois un bout de code écrit mais utilisé à plusieurs endroits par un simple appel de fonctions.

dans le cas de mon code, je fait appel a des fonction pour:
- deplacer mon vaisseau
- tirer un missile
- l'ecran de lancement du jeu
- l'ecran de fin du jeu
- VT100
- serial

### **Les conditions**

Vues en Python pour ma part, mais diffèrent en c. Les conditions permettent le développement d'un code complexe. Dans le cas de ce projet, les conditions permettent par exemple de tester si un missile touche ou non une ennemie.

Compliqué à mettre en oeuvre au début, mais à force d'expérimentation et de développement du code, celles-ci sont maintenant plutôt bien maitrisées, et mon permis d'avoir un code fonctionnel.

### **Exploitation des ressources déjà existantes**

lorsqu'on a commencer ce projet 4 fichier nous ont etait fournis:
- VT100.h
- VT100.c
- serial.h
- serial.c

les fichier `VT100` permettent de crée l'interface on visualise depuis le terminal. \
avec comme commande principal:

```c
vt100_move();
```
les fichier `serial` permet la communication serie avec le pc. \
avec comme commande principal:

```c
serial_putchar() /*pour 1 caractère*/
serial_puts() /*pour plusieurs caractères*/
```

Ces fichiers ne sont pas complexes, mais pas symple à comprendre quand on debut en C.

***

## Conclusion

Malgré presque un mois sans avoir pu avancer mon projet. Mon code n'est pas complet, mais fonctionnel, il me manque seulement 3 points:

- le déplacement des ennemies
- les tires ennemies
- et la génération aléatoire des ennemies

en commencant le C cette année je connaissé presque rien. Mon niveau etait seulement d'initialiser une variable et faire des addition ou soustraction.

Mais grace à ce projet ainsi qu'au cours bien construit mon niveau a bien augmenté, mais je suis encore loin d'être bon. Mais à force de projet et de développement je pourrais viser un bon niveau en C.

C'est un projet qui à la première approche paraissait simple, mais quand on commence à coder on se rend vite compte que ce n'est pas si simple. Le fait de devoir coder sur une carte avec des capacités limitées nous pousse à ne pas faire n'importe quoi n'importe comment, mais de cherche la solution la moins gourmande que ce soit un temps d'exécution que de mémoire.

je conclurais sur le fait que c'est un bon projet de développement qui m'a permis d'en apprendre beaucoup.
