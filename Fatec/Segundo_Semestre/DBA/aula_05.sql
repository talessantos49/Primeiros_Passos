CREATE SCHEMA `aula_05`;
/* Criação de tabelas */

CREATE TABLE aula_05.Produto(
`id` INT NOT NULL,
`custo` FLOAT NOT NULL,
`descricao` VARCHAR (255),
PRIMARY KEY (`id`));

CREATE TABLE aula_05.Servico(
`id` INT NOT NULL,
`custo` FLOAT NOT NULL,
`tempo_realiza` TIME NOT NULL,
`descricao` VARCHAR (255),
PRIMARY KEY(`id`));

CREATE TABLE aula_05.Cliente(
`CPF` VARCHAR(45) NOT NULL,
`Nome` VARCHAR(255) NOT NULL,
`Endereco` VARCHAR(255) NOT NULL,
`Telefone` INT NOT NULL,
PRIMARY KEY(`CPF`));

CREATE TABLE aula_05.Veiculo(
`renavan` INT NOT NULL,
`chassi` VARCHAR(255) NOT NULL,
`modelo` VARCHAR(255),
`cor` VARCHAR(15),
`id_cliente` VARCHAR(45) NOT NULL,
PRIMARY KEY (`renavan`),
FOREIGN KEY (`id_cliente`) REFERENCES aula_05.`Cliente`(`CPF`));

CREATE TABLE aula_05.Relato_Cliente(
`id_relato` INT NOT NULL,
`problema` VARCHAR(255),
`data` DATE,
`id_veiculo` INT NOT NULL,
PRIMARY KEY(`id_relato`),
FOREIGN KEY (`id_veiculo`) REFERENCES aula_05.Veiculo(`renavan`));

CREATE TABLE aula_05.Orcamento(
`id` INT NOT NULL,
`id_veiculo` INT NOT NULL,
`situacao` VARCHAR(255) NOT NULL,
`valor` FLOAT NOT NULL,
`data` DATE,
`previsaoEntrega` DATE NOT NULL,
`forma_pagamento` VARCHAR(255) NOT NULL,
PRIMARY KEY(`id`),
FOREIGN KEY(`id_veiculo`)REFERENCES aula_05.Veiculo(`renavan`));

CREATE TABLE aula_05.item_produto(
`situacao` VARCHAR(255),
`custo` FLOAT NOT NULL,
`quantidade` INT NOT NULL,
`id_orcamento` INT NOT NULL,
`id_produto` INT NOT NULL,
FOREIGN KEY (`id_orcamento`) REFERENCES aula_05.Orcamento(`id`),
FOREIGN KEY (`id_produto`) REFERENCES aula_05.Produto(`id`));

CREATE TABLE aula_05.item_servico(
`situacao` VARCHAR(255),
`custo` FLOAT NOT NULL,
`id_orcamento` INT NOT NULL,
`id_servico` INT NOT NULL,
FOREIGN KEY(`id_orcamento`) REFERENCES aula_05.Orcamento(`id`),
FOREIGN KEY(`id_servico`) REFERENCES aula_05.Servico(`id`));

/* Alterar o nome da coluna de nome para Nome_Completo */
ALTER TABLE aula_05.Cliente
CHANGE COLUMN `nome` `Nome_Completo` VARCHAR(255);

/* Adicionar uma tabela em veiculo denominada Ano */

ALTER TABLE aula_05.Veiculo
ADD COLUMN `Ano` YEAR; 
/* Para excluir as tabelas do diagrama. */
DROP TABLE aula_05.Veiculo, aula_05.Cliente, aula_05.item_servico, aula_05.item_produto, aula_05.Orcamento, aula_05.Relato_Cliente, aula_05.Servico, aula_05.Produto;