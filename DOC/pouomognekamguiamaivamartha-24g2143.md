
# Cahier de suivi individuel — INF231 (TP)  
**Étudiant :** pouomo
**Matricule :** 23U2498
**Exercice attribué :** Multiplication `a × b` (avec additions répétées)  

---

## 1) Objectif de l'exercice
Écrire un programme en **C** qui calcule le produit `a × b` pour `a, b > 0` en utilisant uniquement des additions répétées (méthode par accumulation).  
Le programme doit vérifier que `a` et `b` sont strictement positifs, afficher le résultat proprement et gérer les cas d'entrée invalides.

---

## 2) Algorithme (description)
1. Lire deux entiers `a` et `b`.  
2. Vérifier `a > 0` et `b > 0`. Si non, afficher un message d'erreur et quitter.  
3. Initialiser `resultat = 0`.  
4. Boucler `b` fois : `resultat += a`.  
5. Afficher le produit sous une forme lisible, ex : `5 × 3 = 15`.

**Complexité temporelle :** O(b) (on effectue b additions).  
**Complexité mémoire :** O(1).

---

## 3) Code source (fichier : `multiplication_addition.c`)

```c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/* Multiplie a par b en utilisant des additions répétées.
   On suppose a >= 1 et b >= 1. */
unsigned long multiply_by_add(unsigned int a, unsigned int b) {
    unsigned long result = 0;
    for (unsigned int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

/* Lecture sécurisée d'un entier positif depuis stdin */
int read_positive_int(const char *prompt, unsigned int *out) {
    char buffer[64];
    char *endptr;
    unsigned long val;

    printf("%s", prompt);
    if (!fgets(buffer, sizeof(buffer), stdin)) return 0;

    errno = 0;
    val = strtoul(buffer, &endptr, 10);
    if (errno != 0 || endptr == buffer) return 0; // lecture échouée
    if (val == 0 || val > UINT_MAX) return 0; // on exige > 0 et dans la plage
    *out = (unsigned int)val;
    return 1;
}

int main(void) {
    unsigned int a, b;
    printf("=== Multiplication par additions répétées ===\n");

    if (!read_positive_int("Entrez a (entier > 0) : ", &a)) {
        fprintf(stderr, "Erreur : valeur de 'a' invalide. Veuillez fournir un entier > 0.\n");
        return 1;
    }
    if (!read_positive_int("Entrez b (entier > 0) : ", &b)) {
        fprintf(stderr, "Erreur : valeur de 'b' invalide. Veuillez fournir un entier > 0.\n");
        return 1;
    }

    unsigned long product = multiply_by_add(a, b);
    printf("\nRésultat : %u × %u = %lu\n", a, b, product);
    return 0;
}
