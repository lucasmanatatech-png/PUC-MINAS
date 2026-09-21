# Conecta BH — Home-page Responsiva com Bootstrap

Projeto acadêmico desenvolvido para a disciplina **Desenvolvimento de Interfaces Web**.

Nesta versão, a home-page do projeto anterior foi **refatorada para Bootstrap**, mantendo a mesma proposta visual, mas substituindo a responsividade feita manualmente com **Media Queries, Flexbox e CSS Grid** pelos recursos responsivos do framework.

## Autor

- **Nome:** SEU NOME AQUI
- **Curso:** Ciência da Computação
- **Instituição:** PUC Minas
- **Disciplina:** Desenvolvimento de Interfaces Web

> Antes de entregar, substitua **SEU NOME AQUI** pelo seu nome completo.

## Tecnologias utilizadas

- HTML5
- CSS3
- Bootstrap 5.3.8 via CDN
- Git
- GitHub
- GitHub Classroom

## Estrutura do projeto

```text
conecta-bh-bootstrap-v2/
├── index.html
├── css/
│   └── styles.css
├── img/
│   ├── banner.svg
│   ├── cultura.svg
│   ├── gastronomia.svg
│   └── lazer.svg
├── prints/
│   ├── desktop.png
│   └── mobile.png
└── README.md
```

## Elementos obrigatórios implementados

A home-page possui:

- Cabeçalho (`header`) com nome do site;
- Barra de navegação Bootstrap com quatro links internos;
- Menu responsivo com botão `navbar-toggler` no mobile;
- Seção principal (`main`) com banner e texto introdutório;
- Conteúdo em duas colunas no desktop e uma coluna no mobile;
- Seção secundária (`section`) com três cards;
- Cada card possui imagem, título e descrição;
- Rodapé (`footer`) com links institucionais e para redes sociais;
- Bootstrap carregado via CDN;
- Sistema de Grid do Bootstrap utilizado na responsividade;
- Componentes `navbar`, `button` e `card` do Bootstrap.

## Como a responsividade foi feita

A versão anterior utilizava CSS próprio com `display: grid`, `display: flex` e regras `@media`.

Nesta versão, o comportamento responsivo foi transferido para o Bootstrap.

### Exemplos usados no projeto

```html
<div class="row align-items-center g-5">
    <div class="col-12 col-lg-6">...</div>
    <div class="col-12 col-lg-6">...</div>
</div>
```

No celular, cada coluna ocupa `12` espaços.  
A partir do breakpoint `lg`, cada coluna ocupa `6`, formando duas colunas.

Nos cards:

```html
<div class="row row-cols-1 row-cols-md-2 row-cols-lg-3 g-4">
```

Assim:

- celular: 1 card por linha;
- tablet: 2 cards por linha;
- desktop: 3 cards por linha.

O menu também utiliza o componente responsivo do Bootstrap:

```html
<header class="navbar navbar-expand-lg navbar-dark bg-dark">
```

Abaixo do breakpoint `lg`, os links são recolhidos no botão de menu.

## Bootstrap via CDN

O projeto utiliza Bootstrap 5.3.8:

```html
<link
    href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/css/bootstrap.min.css"
    rel="stylesheet"
>
```

E o JavaScript Bundle:

```html
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.8/dist/js/bootstrap.bundle.min.js"></script>
```

## Prints da versão Bootstrap

Antes da entrega, abra o projeto no navegador e salve dois prints nesta pasta:

### Desktop

```text
prints/desktop.png
```

![Versão desktop](prints/desktop.png)

### Mobile

Utilize o modo responsivo do DevTools do navegador e salve:

```text
prints/mobile.png
```

![Versão mobile](prints/mobile.png)

## Como executar

Abra o arquivo `index.html` no navegador.

Também é possível utilizar a extensão **Live Server** do Visual Studio Code.

## Sequência recomendada de commits

### Etapa 1 — estrutura inicial

```bash
git add .
git commit -m "Cria estrutura HTML inicial da home-page"
```

### Etapa 2 — versão responsiva com Bootstrap

Depois de adicionar o Bootstrap e refatorar o layout:

```bash
git add .
git commit -m "Cria versao responsiva com Bootstrap"
```

Crie a tag desta segunda versão:

```bash
git tag -a v2.0 -m "Responsividade Bootstrap"
```

> **Atenção:** o enunciado diz que a versão deve ser marcada como **v2.0**, mas o exemplo de comando mostra `v1.0`. Como esta atividade é a evolução da versão anterior, `v2.0` é a marcação coerente. Se o professor tiver determinado verbalmente que o comando deve ser copiado literalmente, confirme com ele antes de trocar a tag.

### Etapa 3 — documentação

Depois de inserir os prints e revisar o README:

```bash
git add .
git commit -m "Finaliza documentacao do projeto"
```

## Envio para o GitHub

```bash
git push origin main --tags
```

Ao final, copie a URL do repositório do GitHub e envie na atividade do Canvas.

## Checklist de entrega

- [ ] Aceitei a atividade no GitHub Classroom;
- [ ] Copiei a estrutura do projeto anterior;
- [ ] Fiz o commit da estrutura inicial;
- [ ] Adicionei Bootstrap via CDN;
- [ ] Retirei do CSS a responsividade manual baseada em `@media`;
- [ ] Utilizei o Grid responsivo do Bootstrap;
- [ ] Testei o menu no celular;
- [ ] Testei as colunas no desktop e no celular;
- [ ] Salvei o print desktop em `prints/desktop.png`;
- [ ] Salvei o print mobile em `prints/mobile.png`;
- [ ] Preenchi meu nome no README;
- [ ] Fiz o commit da versão Bootstrap;
- [ ] Criei a tag solicitada;
- [ ] Fiz o commit final da documentação;
- [ ] Executei `git push origin main --tags`;
- [ ] Enviei a URL do repositório no Canvas.
