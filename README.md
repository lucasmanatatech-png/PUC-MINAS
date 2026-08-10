# PUC MINAS

Repositório pessoal com exercícios e trabalhos das disciplinas de ciência da computação na PUC Minas, escritos em **C**.

## Estrutura

```
├── AEDS 1/              Algoritmos e Estruturas de Dados I
├── AEDS 2/              Algoritmos e Estruturas de Dados II
├── MAT DISCRETA/        Matemática Discreta
│   └── PROLOG/          Tabelas-verdade de proposições lógicas
└── VERDE/               Soluções extras / revisões
```

## Conteúdo por disciplina

### AEDS 1 — Algoritmos e Estruturas de Dados I
Exercícios de lógica de programação em C (entrada/saída, condicionais e laços):

| Arquivo      | Tópicos abordados |
|--------------|-------------------|
| `lista01.c`  | Operações com raio, equações, troca de variáveis, hipotenusa, salário mínimo, horas/minutos |
| `Lista02.c`  | Condicionais: divisibilidade, triângulos, equações do 1º e 2º grau, sistemas 2x2, ano bissexto, áreas |
| `lista03.c`  | Laços: soma de números, sequência de Fibonacci, progressão geométrica |

### AEDS 2 — Algoritmos e Estruturas de Dados II
- `ParImpar.c` — lê um vetor de `N` inteiros e informa se cada elemento é PAR ou IMPAR.

### MAT DISCRETA — Matemática Discreta
Programas em C que montam **tabelas-verdade** para verificar se proposições lógicas são satisfatíveis, tautologias ou contradições:

| Arquivo          | Conteúdo |
|------------------|----------|
| `exercicio1_*.c` | Proposições com 2 variáveis (`p`, `q`): implicação e bi-implicação |
| `exercicio2_*.c` | Proposições com 4 variáveis (`p`, `q`, `r`, `s`) |
| `exercicio3_*.c` | Problemas de argumentação lógica (ex.: raciocínio sobre fatos do dia a dia) |

> Os arquivos `.exe` são binários de compilação local e podem ser ignorados.

### VERDE
- `ParImpar.c` — cópia da solução de AEDS 2 (par/impar).

## Como compilar e executar

Usando o GCC:

```bash
gcc -o saida arquivo.c -lm
./saida
```

> A flag `-lm` é necessária em sistemas Unix/Linux por causa das funções de `math.h`.

## Observações

- Alguns programas possuem múltiplos `int main()` comentados, cada um correspondendo a uma questão da lista.
- O código contém acentuação inconsistente devido ao encoding usado na época.
