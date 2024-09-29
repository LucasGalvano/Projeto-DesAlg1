Objetivo do Projeto
Este projeto consiste na criação de uma Exchange de Criptomoedas, uma plataforma onde os usuários podem comprar e vender três tipos de criptomoedas: Bitcoin, Ethereum e Ripple. A aplicação permite a realização de operações como consulta de saldo, depósito de reais, compra e venda de criptomoedas, além de manter um histórico de transações e manipular os dados dos usuários de maneira segura através de arquivos binários.

Criptomoedas Suportadas
Bitcoin:
Taxa de compra: 2%
Taxa de venda: 3%
Ethereum:
Taxa de compra: 1%
Taxa de venda: 2%
Ripple:
Taxa de compra: 1%
Taxa de venda: 1%
Funcionalidades Implementadas

1. Efetuar Login
A função de login é responsável por autenticar o usuário na plataforma. Ao realizar o login, o usuário precisa fornecer o CPF e a senha cadastrados. Utilizamos a função validar senha para verificar se a senha digitada corresponde àquela registrada anteriormente no banco de dados. Caso a senha esteja correta, o acesso ao sistema é liberado.

2. Cadastro de Usuário
A função de cadastro permite que o usuário crie uma conta na Exchange. Durante o processo de cadastro, são solicitados o CPF, nome de usuário e uma senha. Essas informações são armazenadas no banco de dados da plataforma. Após o cadastro, o usuário poderá realizar login para acessar sua carteira e começar a operar.

3. Consultar Saldo
A funcionalidade de consulta de saldo permite que o usuário verifique o saldo disponível na sua carteira de investimentos, tanto em reais quanto nas criptomoedas Bitcoin, Ethereum e Ripple. As informações exibidas incluem os dados do usuário e os saldos atuais de cada moeda.

4. Consultar Extrato de Operações
O extrato de operações exibe o histórico de transações do usuário, incluindo compras e vendas de criptomoedas, depósitos e saques. Esses dados são salvos em um arquivo de texto, garantindo que as informações das transações (como data, valores e taxas) fiquem registradas.

5. Depositar Reais
Permite que o usuário deposite reais na sua carteira de investimentos. O usuário precisa apenas informar o valor do depósito. O saldo é atualizado automaticamente após a transação ser confirmada.

6. Sacar Reais
O usuário pode sacar reais de sua carteira, informando o valor que deseja sacar. Antes de completar a operação, a senha do usuário é validada para garantir a segurança. Após a confirmação, o valor é descontado do saldo da carteira.

7. Comprar Criptomoedas
Nesta funcionalidade, o usuário pode comprar criptomoedas (Bitcoin, Ethereum ou Ripple). Ele informa o valor da compra e a senha para validar a transação. Se os dados estiverem corretos e a compra for possível, as informações da compra (incluindo a taxa cobrada) são exibidas e o usuário é solicitado a confirmar a operação.

8. Vender Criptomoedas
Permite que o usuário venda criptomoedas da sua carteira. Assim como na compra, as informações da venda (incluindo a taxa cobrada) são exibidas e o usuário deve confirmar a operação para concluí-la.

9. Atualizar Cotação das Criptomoedas
As cotações de Bitcoin, Ethereum e Ripple são atualizadas de forma aleatória. Utilizamos valores aleatórios para gerar mudanças de no máximo 5% (positivo ou negativo) no valor atual da criptomoeda, garantindo a variação constante do mercado.
------------------------------------


Como Usar o Programa
Ao iniciar o programa, o usuário deve efetuar login utilizando seu CPF e senha. Se o usuário ainda não tiver uma conta, ele pode utilizar a opção de cadastro.
Após o login, o usuário pode realizar as seguintes operações:
Consultar saldo de reais e criptomoedas.
Consultar o extrato de operações.
Depositar ou sacar reais.
Comprar ou vender criptomoedas.
Atualizar a cotação das criptomoedas.

-------------------------------------------

Explicaçao do código

Cadastro de usuários

Para o cadastro,usamos três funções principais: cadastro, login e validar senha. A função cadastro permite registrar o usuário pedindo CPF, nome de usuário e senha, que são armazenados no sistema. A função login autentica o usuário verificando o CPF e a senha cadastrados, permitindo o acesso à conta. Já a função validar senha confere se a senha digitada pelo usuário em operações como login ou transações corresponde àquela registrada, garantindo a segurança do acesso.

Pagina Main 

Na página main, as funções são declaradas junto com a opção do menu. O usuário escolhe a ação desejada, e a função correspondente é acionada para atender à sua necessidade. Utilizamos um loop while combinado com switch case no menu, permitindo que o programa continue rodando até o cliente decidir encerrar a execução.

Página Trade


Na página trade está o "músculo" do projeto, com toda a funcionalidade principal do programa. A função carteira permite consultar o saldo do usuário em Ripple, Bitcoin, Ethereum e reais. A função depositar reais adiciona dinheiro à carteira, enquanto a função saque realiza o saque de reais. As funções taxa compra e taxa venda calculam as taxas para comprar e vender criptomoedas, respectivamente. A função comprar cripto adiciona criptomoedas à carteira e diminui o saldo em reais, enquanto vender cripto diminui a quantidade de criptos e aumenta os reais. A função atualizar cotações gera variações aleatórias de -5% a 5% no valor das criptomoedas, simulando valorizações ou desvalorizações no mercado.