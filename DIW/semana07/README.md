# Simulador de Orçamento Pessoal

Atividade da semana 07 de Desenvolvimento de Interfaces Web, da PUC Minas.

É o primeiro contato com JavaScript no navegador, então o script é bem direto: pergunta alguns dados com `prompt()`, valida os números, soma as despesas e no fim diz se o orçamento fechou no azul ou no vermelho.

## Autor

- **Nome:** Lucas manata
- **Matrícula:** 910815
- **Curso:** Ciência da Computação
- **Instituição:** PUC Minas
- **Disciplina:** Desenvolvimento de Interfaces Web

## Tecnologias

- HTML5
- JavaScript
- Console do navegador (F12)
- Git e GitHub

## Estrutura

```text
semana07/
├── index.html
├── script.js
├── README.md
└── prints/
    └── console.png
```

## Como rodar

Não precisa de servidor nem instalar nada. Abre o `index.html` no navegador, aperta F12 para abrir o console e recarrega a página.

As perguntas vão aparecendo uma a uma na tela. No fim o resultado sai num `alert()` e também no console.

## O que tem no script

O `script.js` está dividido em cinco partes, na mesma ordem do enunciado.

A primeira parte pede o nome, a renda e quantas despesas serão informadas. A quantidade fica travada entre 1 e 5: se vier menos que 1, vira 1, e se vier mais que 5, vira 5.

A validação dos números ficou numa função separada, a `perguntarNumero()`. Ela converte o que foi digitado com `Number()` e, enquanto o `isNaN()` der true, repete a pergunta. Sem isso, digitar "abc" na renda quebraria a conta inteira com `NaN`.

```js
function perguntarNumero(mensagem) {
    let valor = Number(prompt(mensagem));

    while (isNaN(valor)) {
        console.warn("Entrada inválida (" + valor + "). Digite um número.");
        valor = Number(prompt("Valor inválido! Digite um número. " + mensagem));
    }

    return valor;
}
```

As despesas entram num `for`, uma de cada vez, somando no total com `+=`. São "Despesa 1", "Despesa 2", e assim por diante.

A análise vem num `if / else`. A sobra é `renda - total`, e a comparação `total > renda` fica num boolean chamado `gastouMais`. Quando gastou mais, o script avisa que passou da renda. Quando não passou, ele olha se a sobra chegou a 30% da renda: se chegou, a margem é ótima, se não, ainda dá pra melhorar a sobra.

No fim os números saem com duas casas decimais pelo `toFixed(2)`, e o resultado aparece de duas formas, num `alert()` e no `console.log()`.

## Print

Print do console com o resultado do programa:

![Console do navegador com a execução do script](prints/console.png)

## Git

```bash
git checkout -b lucas
git add .
git commit -m "Atividade Prática - JavaScript básico - matrícula: 910815"
git push origin lucas
```
