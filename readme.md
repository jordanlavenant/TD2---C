# TD2 - C

On utilise `*px` afin de suivre le pointeur (flèche) qui redirige vers l'adressage mémoire d enotre variable d'origine.

`*px = *px + 1` revient à faire `x++` (ou `*px++`)  
`*px = px + 1` revient à ajouter 4 octets à l'adressage de `x`

Ici, avec l'indication du pointeur, on vient toujours faire référence à `*px`, qui contient la valeur de `x`. On ajoute donc `+ 1` à la valeur.
![](assets/1.png?raw=true "Avec pointeur")
Ici, on ne précise pas le pointeur, on indique donc que `*px` est égale à son adresse mémoire, `+ 1`.
![](assets/2.png?raw=true "Sans pointeur")

## Insertion

![](assets/3.png?raw=true "Sans pointeur")

## Suppression

## Recherche d'un élement
