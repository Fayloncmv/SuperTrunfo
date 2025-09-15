# Super Trunfo - Comparação Avançada de Cidades

Este projeto é uma versão avançada do jogo **Super Trunfo**, implementada em **C**.  
O programa permite comparar **duas cartas de cidades** usando **dois atributos numéricos diferentes** escolhidos pelo jogador.  

O objetivo é aprender e praticar estruturas de decisão (`if-else`, `switch`) e operadores ternários em C, enquanto se cria um jogo divertido.

---

## **Atributos disponíveis**

1. População
2. Área (km²)
3. PIB (bilhões de reais)
4. Pontos Turísticos
5. Densidade Demográfica (hab/km²)  
   > Regra especial: menor valor vence para este atributo.

---

## **Como compilar**

Abra o terminal ou CMD na pasta do projeto e rode:

```bash
gcc supertrunfo.c -o supertrunfo
```
## **Como executar**

**No Linux/macOS:**
```bash
./supertrunfo
```
**No Windows (CMD/PowerShell):**
```bash
supertrunfo.exe
```
## **Como jogar**

1.Escolha o primeiro atributo digitando o número correspondente.

2.Escolha o segundo atributo, diferente do primeiro.

3.O programa exibirá:

.Valores de cada atributo para as duas cartas

.Soma dos atributos (considerando regra da densidade)

.Carta vencedora ou empate

## **Exemplo**
```
===== Super Trunfo - Comparacao de Atributos =====

Escolha o primeiro atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 1

Escolha o segundo atributo (diferente do primeiro):
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opcao: 5

=== Resultado da Comparacao ===
Carta 1: São Paulo
Atributo 1: 12325000.00, Atributo 2: 8102.47, Soma: 12333102.47
Carta 2: Rio de Janeiro
Atributo 1: 6748000.00, Atributo 2: 5622.24, Soma: 6753622.24
Vencedor Final: São Paulo!
```
## **Regras Especiais**

1.Para todos os atributos, maior valor vence, exceto Densidade Demográfica, onde menor valor vence.

2.O segundo atributo escolhido não pode ser igual ao primeiro.

3.Em caso de empate na soma dos dois atributos, será exibida a mensagem "Empate!".

## **Objetivos de aprendizado**

1.Praticar entrada de dados e menus em C

2.Aprender a usar switch, if-else e operadores ternários

3.Compreender como comparar e somar diferentes tipos numéricos

4.Criar um programa interativo e divertido, aplicando lógica de programação
