/* ============================================================
   Atividade Prática - JavaScript básico
   Simulador simples de orçamento pessoal

   Tópicos praticados:
   - Variáveis e constantes (let e const)
   - Tipos básicos: string, number e boolean
   - Operadores aritméticos e de comparação
   - Validação de entrada com while + Number() + isNaN()
   - Entrada repetida de dados com for
   - Decisões com if / else
   - Saída com alert() e console.log()
   ============================================================ */

/* ---------- 2) Validação com while ---------- */

/**
 * Pergunta um número ao usuário e só devolve quando a resposta for válida.
 * Se o usuário digitar algo que não é número (ex.: "abc"), a pergunta
 * é repetida pelo while.
 *
 * @param {string} mensagem - texto da pergunta
 * @returns {number} o número informado pelo usuário
 */
function perguntarNumero(mensagem) {
    let valor = Number(prompt(mensagem));

    // enquanto o valor não for um número válido, pergunta de novo
    while (isNaN(valor)) {
        console.warn("Entrada inválida (" + valor + "). Digite um número.");
        valor = Number(prompt("Valor inválido! Digite um número. " + mensagem));
    }

    return valor;
}


/* ---------- 1) Dados iniciais (tipos básicos) ---------- */

// este log aparece assim que a página abre, antes das perguntas
console.log("Script carregado. Responda as perguntas que vão aparecer na tela.");

// string
const nome = prompt("Qual é o seu nome?");

// number, validado com while
const renda = perguntarNumero("Qual é a sua renda mensal? (ex.: 3000)");

// number, validado com while
let quantidadeDespesas = perguntarNumero("Quantas despesas você vai informar? (entre 1 e 5)");

// regra: a quantidade fica sempre entre 1 e 5
if (quantidadeDespesas < 1) {
    quantidadeDespesas = 1;
}
if (quantidadeDespesas > 5) {
    quantidadeDespesas = 5;
}


/* ---------- 3) Lançamento das despesas com for ---------- */

let totalDespesas = 0;

for (let i = 1; i <= quantidadeDespesas; i++) {
    const despesa = perguntarNumero("Despesa " + i + ": ");
    totalDespesas += despesa; // operador de soma acumulada
}


/* ---------- 4) Análise com if / else ---------- */

const sobra = renda - totalDespesas; // operador de subtração

// boolean: true quando os gastos passaram da renda
const gastouMais = totalDespesas > renda;

let mensagem;

if (gastouMais) {
    mensagem = "⚠️ Atenção: você gastou mais do que ganhou.";
} else if (sobra >= renda * 0.3) {
    mensagem = "✅ Ótimo: boa margem de sobra.";
} else {
    mensagem = "🙂 Ok: dá para melhorar a sobra.";
}


/* ---------- 5) Saída final ---------- */

// toFixed(2) deixa o número com duas casas decimais
const rendaFormatada = renda.toFixed(2);
const totalFormatado = totalDespesas.toFixed(2);
const sobraFormatada = sobra.toFixed(2);

const relatorio =
    "Nome:           " + nome + "\n" +
    "Renda:          R$ " + rendaFormatada + "\n" +
    "Total despesas: R$ " + totalFormatado + "\n" +
    "Sobra:          R$ " + sobraFormatada + "\n" +
    "------------------------------\n" +
    mensagem;

// saída em alert()
alert(relatorio);

// saída no console do navegador
console.log("");
console.log("===== SIMULADOR DE ORÇAMENTO PESSOAL =====");
console.log("Nome:           " + nome);
console.log("Renda:          R$ " + rendaFormatada);
console.log("Total despesas: R$ " + totalFormatado);
console.log("Sobra:          R$ " + sobraFormatada);
console.log("--------------------------------------");
console.log(mensagem);
console.log("========================================");
console.log("");
