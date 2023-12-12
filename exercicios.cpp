/*
1) a) O que significa a eficiência de tempo de um algoritmo:
   - A eficiência de tempo de um algoritmo é dado à rapidez com que ele executa uma determinada tarefa. 

1) b) Grandezas físicas que influenciam a eficiência de tempo de um algoritmo na prática:
   - As grandezas físicas que influenciam a eficiência de tempo incluem:
     1. Tempo de CPU: Refere-se ao tempo real que a CPU dedica à execução do algoritmo.
     2. Número de operações: Representa a quantidade de operações básicas que o algoritmo realiza.
     3. Acesso à memória: A eficiência pode ser afetada pelo número de operações de leitura/escrita na memória.

1) c) Grandezas utilizadas para expressar a eficiência de tempo em nosso modelo de computação:
   - As grandezas mais comuns utilizadas para expressar a eficiência de tempo são:
     1. Tempo de execução: Mede o tempo real que um algoritmo leva para produzir um resultado.
     2. Número de operações: Contagem das operações básicas realizadas pelo algoritmo.

1) d) Grandezas abstraídas e por quê:
   - No modelo de computação, muitas vezes abstraímos detalhes específicos da arquitetura do computador e do 
   sistema operacional. Por exemplo:
     1. Constantes multiplicativas: Em análises de complexidade, podemos negligenciar fatores constantes, 
     focando na tendência geral do crescimento.
     2. Detalhes específicos da implementação: O foco é nas operações fundamentais em vez de considerar instruções 
     de máquina específicas.

1) e) Notação utilizada para expressar a complexidade de tempo:
   - A notação mais comum é a Notação Big O (O). Ela descreve o limite superior assintótico do crescimento do 
   tempo de execução do algoritmo em termos da entrada. Outras notações como Omega (\(\Omega\)) e Theta (\(\Theta\)) 
   também são usadas para expressar limites inferior e apertado, respectivamente.

2) A Notação Big O (O) é uma forma de descrever como o desempenho do algoritmo se comporta à medida que o tamanho 
da entrada tende ao infinito. 

3) Complexidade: 
O primeiro loop para i realiza leitura n vezes = O(n)

O segundo loop para i executa n−2 vezes = O(n-2)
O terceiro loop para j executa 2n vezes para cada iteração do segundo loop = O(2n)
Dentro do terceiro loop, há um quarto loop para k que executa n^2 vezes se i for ímpar, caso contrário, executa n vezes.
= O(2n + n^2)

juntando tudo:
O(n+(n−2)(2n+n^2))

simplificando:
O(n^3)


4)
int main(){
    int A[n], v;
    for(int i=0; i<n; i++){
        if(A[i] = v){
            cout << i;
        }
        else{
            cout << "-1";
        }
    }
}

Pior caso:
o vetor será inteiramente percorrido = O(n), onde n é o tamanho do vetor.

melhor caso: 
caso o número esteja na casa inicial do vetor = O(1)
*/