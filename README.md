# Teste da Lista Sequencial de Inteiros

### Caso de teste foram a sequencia dos seguintes comandos:

1. Criar uma nova lista de 5 posições;
2. Inserir o número 10 na posição 1;
3. Inserir o número 20 na posição 2;
4. Inserir o número 15 na posição 2 (deslocando 20 para a posição 3);
5. Modificar o número na posição 3 para 25;
6. Remover o número na posição 1 (o número 10);
7. Exibir a lista resultante.

A saída esperada após as operações é:

Lista (tamanho atual: 2, tamanho máximo: 5) -> Elem(1): 15 -> Elem(2): 25

A sapida obtida foi:

Lista (tamanho atual: 2, tamanho máximo: 5)
 -> Elem(1): 15
 -> Elem(2): 25




## Como Rodar o Teste

```bash
   git clone git@github.com:cauetnunes/lista_sequencial.git
   make 
   ./main < entradas.txt 
   ```


Ou se quiser colocar os valores manualmente

```bash
   git clone git@github.com:cauetnunes/lista_sequencial.git
   make 
   ./main 
   ```


