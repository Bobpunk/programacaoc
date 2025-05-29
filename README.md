# Super Trunfo - Desafio Acadêmico em C

## Descrição do Programa

Este programa foi desenvolvido em linguagem C como parte de um desafio acadêmico. Seu objetivo é simular uma disputa entre duas cartas do jogo Super Trunfo, realizando cálculos de atributos e comparações para determinar os vencedores em diferentes categorias.

O programa gerencia os dados de duas cartas, cada uma definida pelos seguintes atributos:
* **Estado**: `char` (letra inicial do estado)
* **Código da Carta**: `char[3]` (identificador de 2 caracteres, ex: "SP")
* **Cidade**: `char[21]` (nome da cidade, até 20 caracteres)
* **População**: `int` (número de habitantes)
* **Número de Pontos Turísticos**: `int`
* **Área**: `double` (extensão territorial, ex: em km²)
* **PIB**: `double` (Produto Interno Bruto)

Após a entrada dos dados primários, o programa calcula e armazena os seguintes atributos derivados para cada carta, utilizando o tipo `double` para manter a precisão:
* **Densidade Populacional**: `(double)População / Área`
* **PIB per Capita**: `PIB / (double)População`

Todas as informações (originais e calculadas) são então exibidas para ambas as cartas.

Um atributo especial, denominado **Superpoder**, é calculado para cada carta utilizando o tipo `double` e a seguinte fórmula:
`((double)População + Área + (double)Número de Pontos Turísticos + PIB per Capita) + (1.0 / Densidade Populacional)`
Para este atributo específico, a carta com o **menor valor resultante é considerada vencedora**.

Finalmente, o programa realiza uma comparação atributo por atributo entre as duas cartas:
* Para a maioria dos atributos (População, Área, PIB, etc.), a carta com o **maior valor vence**.
* Para o atributo **Superpoder**, a carta com o **menor valor vence**.

O resultado de cada comparação individual é apresentado da seguinte maneira:
* `1`: Indica que a Carta 1 foi vencedora no atributo em questão.
* `0`: Indica que a Carta 2 foi vencedora no atributo. Conforme a lógica implementada, em caso de empate em um atributo, o resultado `0` é atribuído, indicando que a Carta 1 não superou a Carta 2.

**Nota Importante:** Este programa foi desenvolvido sem o uso de estruturas condicionais `if` para tratamento de erros, como a divisão por zero. Portanto, se um denominador (como Área, População para cálculo de PIB per Capita, ou Densidade Populacional para o cálculo do inverso) for zero, poderá ocorrer um erro em tempo de execução (ex: "Floating point exception") que encerrará o programa.

## Ambiente de Desenvolvimento e Teste

* **Compilador C**: Desenvolvido e testado com GCC (GNU Compiler Collection). É esperado que seja compatível com outras versões do GCC ou compiladores C padrão.
* **Sistema Operacional**: Testado no Windows 10. Dada a natureza padrão da linguagem C utilizada, deve ser portável para outros sistemas operacionais (como Linux ou macOS) que suportem um compilador C.

## Instruções de Compilação e Execução

Para compilar e executar o programa:

1.  **Compilação:**
    Abra um terminal ou prompt de comando no diretório onde o arquivo fonte C está localizado e execute o comando:
    ```bash
    gcc nome_do_seu_arquivo.c -o supertrunfo_app
    ```
    (Substitua `nome_do_seu_arquivo.c` pelo nome real do seu arquivo e `supertrunfo_app` pelo nome desejado para o executável).

2.  **Execução:**
    Após a compilação bem-sucedida, execute o programa:
    * No Linux/macOS:
        ```bash
        ./supertrunfo_app
        ```
    * No Windows:
        ```bash
        supertrunfo_app.exe
        ```

## Exemplo de Entrada e Saída do Programa

A seguir, um exemplo de execução com os dados que você forneceu e que resultaram em cálculos precisos para o Superpoder:

<pre>
Digite a letra do 1º estado: A
Digite o codigo do 1º estado (2 caracteres): 01
Digite a cidade do 1º estado (ate 20 caracteres): b
Digite a população do 1º estado: 1000
Digite a Área do 1º estado: 1000.1
Digite o PIB do 1º estado: 1000.2
Digite o número de pontos turisticos da 1º cidade: 100

Digite a letra do 2º estado: b
Digite o codigo do 2º estado (2 caracteres): b
Digite a cidade do 2º estado (ate 20 caracteres): b
Digite a população do 2º estado: 2000
Digite a Área do 2º estado: 2000.2
Digite o PIB do 2º estado: 2000.3
Digite o número de pontos turisticos da 2º cidade: 200


Carta 1:
Estado: A
Codigo: A01
Cidade: b
População: 1000
Área: 1000.1000
PIB: 1000.20
Pontos Turisticos: 100
A Densidade Populacional é: 0.9999
O PIB p/ Capita é: 1.0002

Carta 2:
Estado: b
Codigo: bb
Cidade: b
População: 2000
Área: 2000.2000
PIB: 2000.30
Pontos Turisticos: 200
A Densidade Populacional é: 0.9999
O PIB p/ Capita é: 1.0001

O Super poder da carta a é: 2102.1003
O Super poder da carta B é: 4202.2002

****Comparação das Cartas*****
SE RESULTADO '1', 'CARTA 1' GANHA | SE RESULTADO '0', 'CARTA 2' GANHA

Atributo População:
 Vencedor (1=Carta 1, 0=Carta 2): 0

Atributo Área:
 Vencedor (1=Carta 1, 0=Carta 2): 0

Atributo PIB:
 Vencedor (1=Carta 1, 0=Carta 2): 0

Atributo Pontos Turisticos:
 Vencedor (1=Carta 1, 0=Carta 2): 0

Atributo Densidade Populacional:
 Vencedor (1=Carta 1, 0=Carta 2): 0

Atributo PIB p/ Capita:
 Vencedor (1=Carta 1, 0=Carta 2): 1

Atributo Superpoder:
 Vencedor (1=Carta 1, 0=Carta 2): 1
</pre>
