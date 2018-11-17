# fillit

## ERROR LIST FILLIT

-   [x] Plus de 26 pieces (n'a pas 545 carateres et 129 lignes) Done!
-   [x] Piece non valide : Done!
    -   [x] N'est pas [4][4] Done!
    -   [x] Pas 4 # et donc 12 . E:Done! véfifier 4 # si la map = 4x4 16-4 = 12 ...
        -   [x] Autre caracteres que "." ou "#" E:Done!
    -   [ ] Mauvaise forme (pas 6 ou 8 liens) E:**Pas fait!!**
    -   [ ] NORM E:pas faite lol

## SORTIE

-   [x] Remplacer les pieces par des lettres ABCD.... E: Done
-   [x] Afficher "error\\n" sur la sortie standard, si erreur il y a. E: Done (enfin je crois)
-   [ ]  SOURCES dans un dossier et HEADERS dans un dossier (un pour fillit et un pour la libft) E: ...

## Exemple:

$> cat test03.rand.valid

    ....
    ....
    ..##
    .##.

    ....
    .##.
    ..#.
    ..#.

    ..##
    ..##
    ....
    ....

### Sortie de la structure:

    .AA.
    AA..
    ....
    ....
    -~-~
    BB..
    .B..
    .B..
    ....
    -~-~
    CC..
    CC..
    ....
    ....
    -~-~

C'est tout dans le typedef tetri.

# TODO:

Salut je suis pas là car j'ai oublié d'aller dormir... donc j'ai fait le parsing.

-   [ ] checker et casser le parssing et le parsing d'error (le tester avec toutes les types de pieces places en bas à gauche ...)
-   [ ] faire les checks de liens à l'intérieur des pieces (6 ou 8)
-   [ ] commencer à réfléchir l'algo de bactracting ...
-        [ ] tout les autres trucs que j'ai oublié... comme dormir.

Bonne chance!
