# mystery_game
A baby game made as an exercice.

Explaination of the new rand() function. 

Voici le détail des fonctions :

const int MAX = 100, MIN = 1;
Ici, on détermine le nombre généré maximum (100) et minimum (1). Cette déclaration préalable nous permet de facilement changer les valeurs si besoin.

nombre_mystere = (rand() % (MAX-MIN +1)) + MIN;
Là, ça se corse un peu.

Dans un premier temps, on reconnaît notre variable nombre_mystere, déclarée plus tôt dans le code. L'objectif de cette ligne est dattribuer une valeur aléatoire à nombre_mystere, ce qui fait avec le code qui suit le =.

(rand()) permet de générer aléatoirement un entier compris entre 0 et RAND_MAX, qui est un entier défini dans stdlib.h. Si on ne donne pas plus de consignes à la fonction, le nombre choisi pourrait très bien être 43 895 au lieu d'être compris entre 1 et 100, comme on le souhaite pour ce programme.

On va donc définir le minimum et le maximum à la suite de notre rand.

❓ Mais on a déjà défini notre MIN et MAX avec la déclaration const int MAX = 100, MIN = 1 ; pourquoi ça ne suffit pas ?

📝 En fait, déclarer const int MAX = 100, MIN = 1 nous permet de facilement modifier les valeurs minimum et maximum. Disons que const int MAX = 100, MIN = 1 est prévu pour les humains, c'est à dire qu'il explicite au programmeur les valeurs qu'il désire, alors que % (MAX - MIN + 1) est prévu pour la machine, afin qu'elle calcule que l'entier généré est bien compris entre nos valeurs minimale et maximale.

% (MAX - MIN + 1) est l'opération mathématique qui indique à la machine comment obtenir un entier aléatoire comprit dans nos valeurs MIN et MAX. En gros, on indique à la machine de calculer le reste du nombre aléatoire choisi, ce qui permet de s'assurer que le résultat est comprit entre nos valeurs MIN et MAX.

Par exemple, supposons que MAX soit égal à 100 et que MIN soit égal à 1. La plage de valeurs possibles est donc [1, 100]. Lorsque nous effectuons l'opération %(MAX - MIN + 1), nous obtenons le reste de la division d'un nombre aléatoire par 100 - 1 + 1, qui est 100. Cela garantit que le nombre généré sera un nombre compris entre 0 et 99 (car rand() génère un nombre entre 0 et RAND_MAX, qui est souvent un nombre plus grand que 99). On ajoute ensuite MIN au résultat pour faire 100.
