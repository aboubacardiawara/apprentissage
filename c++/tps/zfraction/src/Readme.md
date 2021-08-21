# ZFraction
Creation d'un type à l'aide du langage c++ simulant le type rationnel en mathématique (a/b a: entier relatif, b:entier relatif non nul )

# Details de l'interface.
## Type: `ZFraction`. 
**(tp langage c openclassroom)**
## Operations
- construteur():
  - initialise le numerateur à 0.
  - initialise le denominateur à 1.
- constructeur(int numerateur):
  - attribut la valeur du paramètre numerateur au numerateur du type.
  - - attribut au denominateur la valeur 1.
- constructeur(int numerateur, denominateur)
  - attribut au numerateur la valeur du paramètre numerateur.
  - attribut au denominateur la valeur du paramètre denominateur.
- getNumerator():
  - retourne la valeur du numerateur.
- getDenominator():
  - retourne la valeur du denominateur.
- setNumerator(int v):
  - modifie le numerateur.
  - modifie le denominateur.
- isPositif():
  - teste si la fraction est positif (numerateur et denominateur positifs)

.

.

. 

Le type supporte les operations arithmétiques (+, -, *, /) et egalement d'autres operations courantes en langages c++ comme:
- les operations raccourcies:
  - +=
  - -=
  - *=
  - /=
- les operations de comparaisons:
  - ==
  - !=
  - <, >, <=, >=;
- l'operation du flux de sortie standard. (affichage)
  - cout << instanceDuType << ...;
  
# compilation
Pour compiler le programme vous pourriez utiliser le fichier Makefile fournie.
## Prerequis:
- avoir installé le programme de compilation `(g++)`. Pour verifier si vous l'avez, tapper la commande:
~~~bash
$ g++ --version
~~~
Vous verez une description qui pourrait ressemblez à celle-ci:
~~~bash
g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
~~~

## compiler:
- se placer dans le repertoire contenant le makefile.
- tapper la commande suivante:
~~~bash
$ make
~~~
vous verrez apparaitre un nouveau repertoire nommé `build` contenant un programme executable main.

## execution
- Placer vous dans le repertoire `build` créé à l'issue de l'etape precedente, puis tapper la commande:
~~~bash
$ ./main #main est le nom de l'executable
~~~
Il aurait pu âtre `prog`, auquel cas la commande serait:
~~~bash
$ ./prog #prog est le nom de l'executable ici
~~~

## Modification:
vous être libre de faire des modifications sur la classe.

## Aperçu du programme actuel.
<img src="assets/../../assets/image.png" />