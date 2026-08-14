# PUC MINAS

Repositório pessoal com exercícios, trabalhos e anotações das disciplinas de Ciência da Computação na PUC Minas.

## 📁 Estrutura

```
├── AEDS 1/                  Algoritmos e Estruturas de Dados I
├── AEDS 2/                  Algoritmos e Estruturas de Dados II
├── DIW/                     Desenvolvimento de Interfaces Web
│   └── semana01/            Atividades semanais (HTML/CSS)
├── MAT DISCRETA/            Matemática Discreta
│   └── PROLOG/              Tabelas-verdade em Prolog
└── VERDE/                   Soluções extras / revisões
```

---

## 📚 As disciplinas

### AEDS I — Algoritmos e Estruturas de Dados I
Introdução à **lógica de programação** em C. Ensina a pensar como programador: representação de dados e tipos de variáveis, operadores e expressões, estruturas condicionais e de repetição, modularização e recursividade. Depois avança para ponteiros, passagem de parâmetros, arquivos, vetores e matrizes, caracteres e structs — até chegar aos primeiros conceitos de **orientação a objetos** (classes, construtores, encapsulamento, herança, polimorfismo e tratamento de exceções).

**Arquivos:** `lista01.c`, `Lista02.c`, `lista03.c` — exercícios de entrada/saída, condicionais e laços.

### AEDS II — Algoritmos e Estruturas de Dados II
Estudo da **eficiência de algoritmos e estruturação de dados em memória dinâmica**. Começa com os fundamentos da análise de algoritmos (complexidade, notações assintóticas, pesquisa sequencial e binária), passa por estruturas de dados lineares e flexíveis, ordenação (quadráticas, Shellsort, Quicksort, Mergesort, Heapsort) e chega às estruturas hierárquicas: árvores binárias, árvores balanceadas (AVL, 2-3-4, rubro-negras), tabelas hash e árvores TRIE. O objetivo é construir programas eficientes e comparar criticamente diferentes soluções para o mesmo problema.

**Arquivos:** `ParImpar.c`, `Palindromo.c` — exercícios de revisão e prática.

### DIW — Desenvolvimento de Interfaces Web
Construção da **base de front-end**: como criar sites dinâmicos com **HTML, CSS e JavaScript**. O semestre parte dos primeiros passos com HTML/CSS e ambiente de trabalho (VS Code, git e GitHub), evolui para semântica HTML, seletores e layouts responsivos (Media Queries, Flexbox, Grid), passa por UX Design e **Bootstrap**, e depois entra em JavaScript de verdade: variáveis, funções, DOM, JSON e Web Storage. No final, o aluno trabalha com APIs (Fetch API, TMDb), REST/CRUD com JSON Server e recursos avançados como Mapbox, Chart.js e integração de login — construindo um **projeto próprio** ao longo de todo o semestre.

**Arquivos:** `semana01/` — página inicial com HTML e CSS.

### MAT DISCRETA — Matemática Discreta
Fundamentos matemáticos que sustentam a computação: **lógica proposicional** (equivalências, quantificadores, regras de inferência), conjuntos e funções, relações e ordenação, somatórios e produtórios, contagem e probabilidade discreta, indução e recursividade, e técnicas de prova (direta, contraposição, absurdo, exaustão). Tem forte conexão com AEDS — a análise de complexidade de algoritmos usa notação assintótica e contagem de operações.

**Arquivos:** `PROLOG/` — tabelas-verdade em Prolog que verificam se proposições são satisfatíveis e avaliam a conclusão de argumentos lógicos (exercícios de proposições com 2 e 4 variáveis e problemas de argumentação).

### VERDE — Soluções extras / revisões
Pasta de apoio com soluções adicionais e revisões fora do escopo das listas oficiais.

**Arquivos:** `ParImpar.c`, `Palindromo.c` — revisões de AEDS.

---

## 🛠️ Como compilar e executar

Usando o GCC:

```bash
gcc -o saida arquivo.c -lm
./saida
```

> A flag `-lm` é necessária em sistemas Unix/Linux por causa das funções de `math.h`.

## 📝 Observações

- Alguns programas possuem múltiplos `int main()` comentados, cada um correspondendo a uma questão da lista.
- Os arquivos `.exe` são binários de compilação local.
