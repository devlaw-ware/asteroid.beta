// Pergunta ao compilador: "Essa macro ASTEROID_H_ já foi definida?"
// Se NÃO foi definida, executa o código abaixo.
#ifndef ASTEROID_H_

// Define a macro ASTEROID_H_ para evitar múltiplas inclusões deste arquivo.
#define ASTEROID_H_

// Inclui a biblioteca raylib, usada para gráficos e vetores.
#include "raylib.h"
#include "stdio.h"
#include "stdlib.h"  // para rand()

// Define um enum para os tamanhos dos asteroides.
// Cada valor representa um tamanho diferente.
typedef enum tamanho_asteroid {
    asteroid_p = 1,  // pequeno
    asteroid_m = 2,  // médio
    asteroid_g = 4   // grande
} tamanho_asteroid;

#define velocidade_asteroid_min 5
#define velocidade_asteroid_max 240

// Define a estrutura que representa um asteroide no jogo.
typedef struct asteroidgame {
    bool ativado;          // Indica se o asteroide está ativo (true) ou não (false)

    
    Vector2 posicao;       // Posição atual do asteroide no espaço 2D
    float rotacao;         // Ângulo de rotação atual do asteroide
    float velrotacao;      // Velocidade angular (quanto gira por unidade de tempo)
    Vector2 velocidade;    // Velocidade linear do asteroide (direção e magnitude)
} asteroidgame;

// Função que cria e inicializa um asteroide com posição e velocidade dadas
asteroidgame Criacao_dos_asteroids(Vector2 posicao, Vector2 velocidade) {
    asteroidgame movimentacao;

    movimentacao.ativado = true;                       // Ativa o asteroide
    movimentacao.posicao = posicao;                    // Define a posição inicial
    movimentacao.velocidade = velocidade;              // Define a velocidade inicial
    movimentacao.rotacao = rand() % 360;               // Rotação aleatória entre 0 e 359 graus
    movimentacao.velrotacao = GetRandomValue(velocidade_asteroid_min, velocidade_asteroid_max);

    return movimentacao;  // Retorna o asteroide criado
}

#endif  // Fim do include guard ASTEROID_H_
