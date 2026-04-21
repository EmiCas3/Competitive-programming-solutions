# CSES Introductory Problems - Explicación de Lógica

Este documento detalla la lógica y el enfoque de resolución para cada uno de los problemas de la sección "Introductory Problems" de CSES encontrados en esta carpeta.

---

## 1. Bit Strings
- **Archivo:** `Bit-Strings.cpp`
- **Link:** https://cses.fi/problemset/task/1617
- **Lógica:** El problema pide calcular $2^n \pmod{10^9+7}$. Dado que $n$ puede ser hasta $10^6$, se utiliza el algoritmo de **Exponenciación Binaria** (Modular Exponentiation). Este método reduce la complejidad de $O(n)$ a $O(\log n)$ procesando los bits del exponente. En cada paso, si el bit actual es 1, se multiplica el resultado por la base actual; en todos los pasos, la base se eleva al cuadrado y se aplica el módulo.

## 2. Coin Piles
- **Archivo:** `Coin-Piles.cpp`
- **Link:** https://cses.fi/problemset/task/1754/
- **Lógica:** Para vaciar dos pilas de monedas de tamaño $a$ y $b$ usando movimientos de (1, 2) o (2, 1), deben cumplirse dos condiciones matemáticas:
    1. La suma total de monedas $(a+b)$ debe ser divisible entre 3, ya que cada movimiento elimina exactamente 3 monedas en total.
    2. Ninguna pila puede ser más del doble de la otra ($a \le 2b$ y $b \le 2a$). Si una pila es demasiado grande, se agotará la otra antes de poder vaciarla.

## 3. Increasing Array
- **Archivo:** `Increasing-Array.cpp`
- **Link:** https://cses.fi/problemset/task/1094
- **Lógica:** Se recorre el arreglo asegurando que cada elemento sea al menos tan grande como el anterior. Si el elemento actual es menor que el anterior, se calcula la diferencia necesaria para igualarlo, se suma esa diferencia a un contador global de movimientos y se actualiza el valor del elemento actual.

## 4. Missing Number (Versiones V1-V4)
- **Link:** https://cses.fi/problemset/task/1083
- **V1 (Frecuencia):** Utiliza un arreglo de booleanos (o enteros) como tabla de frecuencia para marcar los números que van apareciendo. Al final, se busca cuál no fue marcado.
- **V2 (Ordenamiento):** Ordena el vector de números y luego compara cada posición `i` con el valor esperado `i+1`. El primero que no coincida es el faltante.
- **V3 & V3_1 (Suma Matemática):** Utiliza la fórmula de la suma de los primeros $n$ números naturales: $S = \frac{n(n+1)}{2}$. El número faltante es la diferencia entre esta suma teórica y la suma real de los números ingresados. Es crucial usar `long long` para evitar desbordamientos.
- **V4 (XOR):** Utiliza la propiedad de la operación XOR ($x \oplus x = 0$ y $x \oplus 0 = x$). Se calcula el XOR de todos los números del 1 al $n$ y se aplica XOR con todos los números presentes en la entrada. El resultado final será el número faltante.

## 5. Number Spiral
- **Archivo:** `Number-Spiral.cpp`
- **Link:** https://cses.fi/problemset/task/1071/
- **Lógica:** El problema consiste en encontrar un patrón en una espiral infinita. Primero se identifica en qué "capa" se encuentra la coordenada $(y, x)$ tomando el máximo entre ambos valores ($z = \max(y, x)$). La lógica depende de si la capa $z$ es par o impar:
    - Si $z$ es el valor de la columna ($x > y$), el comportamiento depende de si $x$ es par o impar.
    - Si $z$ es el valor de la fila ($y \ge x$), se sigue una lógica simétrica pero invertida.
    Se calcula el valor base del cuadrado de la capa anterior y se le suma/resta el desplazamiento según corresponda.

## 6. Palindrome Reorder
- **Archivo:** `Palindrome-Reorder.cpp`
- **Link:** https://cses.fi/problemset/task/1755
- **Lógica:** Para formar un palíndromo, a lo sumo un carácter puede tener una frecuencia impar. 
    1. Se cuentan las frecuencias de cada letra.
    2. Si hay más de un carácter con frecuencia impar, se imprime "NO SOLUTION".
    3. Se construye la mitad izquierda del palíndromo usando la mitad de las apariciones de cada carácter par.
    4. El carácter impar (si existe) se coloca en el centro.
    5. Se añade la mitad izquierda invertida al final para completar el palíndromo.

## 7. Permutations
- **Archivo:** `Permutations.cpp`
- **Link:** https://cses.fi/problemset/task/1070
- **Lógica:** Una permutación "hermosa" es aquella donde la diferencia absoluta entre elementos adyacentes es mayor a 1.
    - Para $n=2$ y $n=3$, no existe solución.
    - Para $n \ge 4$, una estrategia sencilla es imprimir primero todos los números pares ($2, 4, 6 \dots$) y luego todos los números impares ($1, 3, 5 \dots$). Esto garantiza que la diferencia entre el último par y el primer impar sea aceptable.

## 8. Repetitions
- **Archivo:** `Repetitions.cpp`
- **Link:** https://cses.fi/problemset/task/1069/
- **Lógica:** Se recorre la cadena de ADN comparando el carácter actual con el anterior. Si son iguales, se incrementa un contador de secuencia actual. Si son diferentes, se reinicia el contador. Se mantiene una variable para almacenar el máximo valor alcanzado por el contador durante todo el recorrido.

## 9. Trailing Zeros
- **Archivo:** `Trailing-Zeros.cpp`
- **Link:** https://cses.fi/problemset/task/1618/
- **Lógica:** El número de ceros al final de $n!$ depende de cuántas veces aparece el factor 10, lo cual equivale al número de pares de factores (2, 5). Como siempre hay más factores 2 que 5, basta con contar los factores 5 en la descomposición de todos los números del 1 al $n$. Se utiliza la **Fórmula de Legendre**: $\lfloor n/5 \rfloor + \lfloor n/25 \rfloor + \lfloor n/125 \rfloor \dots$

## 10. Two Knights
- **Archivo:** `Two-Knights.cpp`
- **Link:** https://cses.fi/problemset/task/1072/
- **Lógica:** Para un tablero $k \times k$, el número total de formas de colocar dos caballos es $\binom{k^2}{2} = \frac{k^2(k^2-1)}{2}$. A este total se le restan las posiciones en las que los caballos se atacan. Dos caballos se atacan si están en un rectángulo de $2 \times 3$ o $3 \times 2$. En un tablero $k \times k$, hay $(k-1)(k-2)$ rectángulos de $2 \times 3$ y $(k-2)(k-1)$ rectángulos de $3 \times 2$. Cada rectángulo permite 2 formas de ataque. Por lo tanto, se restan $4(k-1)(k-2)$ posiciones.

## 11. Two Sets
- **Archivo:** `Two-Sets.cpp`
- **Link:** https://cses.fi/problemset/task/1092
- **Lógica:** Primero se verifica si la suma total $S = \frac{n(n+1)}{2}$ es par. Si es impar, es imposible dividir los números en dos conjuntos de igual suma. Si es par, el objetivo es formar un conjunto cuya suma sea $S/2$. El algoritmo implementado utiliza una estrategia de distribución para repartir los números entre los dos conjuntos, manejando por separado los casos donde $n$ es par o impar para garantizar el equilibrio.

## 12. Weird Algorithm
- **Archivo:** `Weird-Algorithm.cpp`
- **Link:** https://cses.fi/problemset/task/1068
- **Lógica:** Implementación directa de la **Conjetura de Collatz**. Dado un número $n$:
    - Si $n$ es par, se divide por 2.
    - Si $n$ es impar, se multiplica por 3 y se suma 1.
    El proceso se repite hasta que $n$ llegue a 1. Se debe usar `long long` para evitar desbordamientos durante los cálculos intermedios.
