# Super Trunfo - Cidades do Brasil

Este projeto simula um jogo estilo Super Trunfo, onde duas cartas de cidades brasileiras são comparadas com base em atributos como população, área, PIB, etc. O jogador escolhe dois atributos diferentes para comparar e vence quem tiver maior desempenho na soma dos dois.

---

##  Funcionalidades

* Cadastro de duas "cartas" com dados de cidades
* Menu interativo para escolha de dois atributos diferentes
* Cálculo da densidade populacional e PIB per capita
* Comparativo entre os dois atributos
* Determina o vencedor ou empate com base na soma de vitórias

---

##  Atributos Disponíveis

1. População
2. Área (em km²)
3. PIB (em bilhões de R\$)
4. Pontos Turísticos
5. Densidade Populacional *(vence a cidade com menor valor!)*

---

##  Exemplo de Execução

```bash
=== Desafio Super Trunfo - Países=== 

=== Cadastro da Carta 1 === 
Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: A
Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: A01): A01
Digite o nome da Cidade: Fortaleza
Digite qual a populacao da cidade: 2428708
Digite a Área da cidade (em km²): 312.353
Digite o PIB  (em bilhões de Reais): 73.4
Digite o número de pontos turísticos que a Cidade possui: 10

 === Cadastro da Carta 2 === 
Digite uma letra de 'A' a 'H' para representar o nome do Estado da Carta: B
Digite o Código da carta, ele deve começar com a letra escolhida para o estado (ex: B01): B01
Digite o nome da Cidade: Florianópolis
Digite qual a população da cidade: 537211
Digite a Área da cidade (em km²): 674.844
Digite o PIB  (em bilhões de Reais): 23.6
Digite o número de pontos turísticos que a Cidade possui: 60

 === Menu de Escolhas do Primeiro Atributo === 
Digite o número do Atributo que deseja comparar primeiro: 
1. População 
2. Área 
3. PIB 
4. Pontos Turísticos 
5. Densidade Populacional 
1

 === Menu de Escolhas do Segundo Atributo === 
Digite o número do  Segundo Atributo que deseja comparar: 
1. População 
2. Área 
3. PIB 
4. Pontos Turísticos 
5. Densidade Populacional 
4

=== Comparação Do Primeiro Atributo ===

=== População ===
Carta 1 - Fortaleza: 2428708 
Carta 2 - Florianópolis: 537211 

=== Comparação do Segundo Atributo ===

=== Pontos Turísticos ===
Carta 1 - Fortaleza: 10 
Carta 2 - Florianópolis: 60 

=== Total da soma dos Atributos ===
Carta 1 - Fortaleza: 2428718.00 
Carta 2 - Florianópolis: 537271.00 
  * Resultado: *
As Cartas empataram!
```

---

##  Como Compilar e Executar (GCC / Codespaces / Linux)

1. Certifique-se de ter o GCC instalado:

   ```bash
   gcc --version
   ```
2. Compile o programa:

   ```bash
   gcc -o supertrunfo supertrunfo.c
   ```
3. Execute:

   ```bash
   ./supertrunfo
   ```

No GitHub Codespaces ou VS Code, podes usar o terminal integrado para esses passos.

---

##  Observações

* O mesmo atributo **não pode ser escolhido duas vezes** pois encerra o jogo.
* Densidade populacional é um atributo **invertido**: vence quem tiver o menor valor.
* Apenas comparações entre **dois atributos numéricos** são permitidas.

---

##  Licença

Este projeto é apenas educacional.

---

