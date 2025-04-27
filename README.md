# Super Trunfo de Países 🌎

## sobre o projeto

este projeto é um jogo de cartas estilo "super trunfo" criado em linguagem c, desenvolvido no clion usando o padrão c11. o objetivo do jogo é comparar atributos de dois países para determinar qual vence em uma rodada.

o projeto foi desenvolvido em etapas:
- cadastro manual de cartas
- menu interativo com escolha de atributos
- comparação simples entre cartas
- comparação avançada com dois atributos diferentes
- tratamento de entradas inválidas
- uso de operador ternário para simplificar o código
- cálculo da soma dos atributos para definir o vencedor final

---

## funcionalidades principais

✅ cadastro de cartas pré-definidas  
✅ escolha de dois atributos diferentes para comparar  
✅ comparação inteligente:
- regra normal: maior valor vence
- exceção para densidade demográfica: menor valor vence  
✅ soma dos dois atributos para decidir a carta vencedora  
✅ tratamento de empates  
✅ menus dinâmicos usando `switch`  
✅ entrada segura e mensagens claras para o jogador

---

## tecnologias utilizadas

- linguagem c (c11)
- ide: clion
- padrão de codificação limpo e comentado
- uso de estruturas `struct`, `switch`, `if-else aninhado` e `operador ternário`

---

## como executar o projeto

1. clone o repositório:
```bash
git clone https://github.com/seu-usuario/super-trunfo-c.git
```

2. abra o projeto no clion

3. compile e execute o programa

ou, se preferir compilar via terminal:
```bash
gcc -std=c11 -o supertrunfo main.c
./supertrunfo
```
