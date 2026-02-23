_Este proyecto ha sido creado como parte del currículum de 42 por guantino._

## Descripción

**Push_swap** es un proyecto de algoritmos de ordenación que consiste en ordenar una pila de números enteros utilizando un conjunto limitado de operaciones, con el objetivo de hacerlo en el **menor número de movimientos posible**.

El programa trabaja con dos pilas (**pila A** y **pila B**) y debe ordenar los números en la pila A en orden ascendente utilizando únicamente las siguientes operaciones:

| Operación | Descripción |
|---|---|
| `sa` / `sb` / `ss` | Intercambiar los dos primeros elementos de la pila |
| `pa` / `pb` | Mover el primer elemento de una pila a otra |
| `ra` / `rb` / `rr` | Rotar la pila hacia arriba (el primero se convierte en el último) |
| `rra` / `rrb` / `rrr` | Rotar la pila hacia abajo (el último se convierte en el primero) |

La implementación utiliza diferentes estrategias según el número de elementos:

- **2–3 elementos:** algoritmos de ordenación directa optimizados
- **4–5 elementos:** ordenación manual optimizada con uso temporal de la pila B
- **Conjuntos grandes:** radix sort usando representación binaria

El desafío radica no solo en ordenar correctamente, sino en **minimizar el número total de operaciones**.

---

## Instrucciones

### Compilación

```bash
make            # Compila el ejecutable push_swap
make bonus      # Compila push_swap y checker
make clean      # Elimina archivos objeto
make fclean     # Elimina todo, incluyendo el ejecutable
make re         # Recompila desde cero
```

---

## Ejecución

### Push_swap

```bash
# Lista de argumentos directa
./push_swap 4 67 3 87 23

# Argumentos entre comillas
./push_swap "4 67 3 87 23"

# Combinación de formatos
./push_swap 4 67 "3 87" 23
```

El programa imprimirá en la salida estándar la secuencia de operaciones necesarias para ordenar los números.

## Validación de entrada

El programa muestra `Error` en stderr si:

- Hay números duplicados
- Los argumentos no son números enteros válidos
- Los números están fuera del rango de un `int`
- No se proporcionan argumentos

---

## Ejemplos de uso

### Push_swap

```bash
# 3 números
./push_swap 2 1 3
# Salida: sa

# Entrada ya ordenada
./push_swap 1 2 3 4 5
# (no imprime nada)

# Contar operaciones
./push_swap 5 4 3 2 1 | wc -l
```

---

## Decisiones técnicas

### Estructura de datos

- Listas enlazadas para representar las pilas
- Cada nodo contiene el valor y un **índice relativo** que facilita la ordenación

### Algoritmos implementados

**Ordenación directa (2–3 elementos)**
Se evalúan todos los casos posibles y se aplica la secuencia óptima de operaciones.

**Ordenación optimizada (4–5 elementos)**
Se mueven los elementos mínimos a la pila B, se ordena el resto con el algoritmo de 3 elementos, y se devuelven los elementos.

**Radix Sort (conjuntos grandes)**
- Asigna índices a cada número según su posición relativa
- Ordena bit por bit usando la representación binaria de los índices
- Complejidad **O(n·k)** donde `k` es el número de bits necesarios

### Optimizaciones

- Elección de rotación (`ra` vs `rra`) según la posición del elemento
- Indexación relativa en lugar de valores absolutos para facilitar el radix sort

---

## Recursos

### Documentación y tutoriales

- [Push_swap Subject — 42](https://): Documento oficial del proyecto
- [Radix Sort Algorithm](https://): Explicación del algoritmo
- [Stack Data Structure](https://): Concepto de pilas y operaciones básicas
- [Sorting Algorithms Visualization](https://): Visualización de algoritmos
- [Big-O Complexity](https://): Referencia de complejidad algorítmica

### Artículos relevantes

- [Push_swap: The least amount of moves with two stacks](https://): Estrategias de optimización
- [Linked Lists in C](https://): Implementación de listas enlazadas en C

---

## Uso de IA

Durante el desarrollo se utilizó IA (Claude) **únicamente para documentación**:

✅ Generación y estructuración de este README

❌ **No** se utilizó para implementación del código fuente
❌ **No** se utilizó para diseño de algoritmos
❌ **No** se utilizó para resolución de bugs
❌ **No** se utilizó para optimización de operaciones

> Todo el código fue escrito manualmente, comprendiendo cada algoritmo y estructura de datos utilizada.

---

*Este proyecto ha sido creado como parte del currículum de 42 por **guantino**.*
