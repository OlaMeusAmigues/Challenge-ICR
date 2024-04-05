# Challenge-ICR
### Integrantes:
* Gustavo Gouvêa Soares Rm553842
* Henrique Rafael Gomes de Souza Rm553945
* Pedro Henrique Mello Silva Alves Rm55422

# Descrição do problema
Através dos relatos tanto dos representantes do Instituto da Criança, como de pacientes do próprio ICR foi possível visualizar uma falta de motivos ou razões dos clientes para entrar no site do HC, uma necessidade de deixar os pacientes ou acompanhantes mas apar sobre as condições e futuras vindas ao hospital daqueles, além de uma necessidade de vincular a aba do paciente com outras formas  de comunicação como email e whatsapp, devido à praticidade destes.
 

# Visão geral da solução
Para esse sprint utilizamos Arduino para simular a coleta e resposta aos dados vitais de um paciente em internação e um servidor Node-red para simular a chegada dos dados à pagina do paciente. Dessa forma, na próxima etapa desse projeto será possível tanto enviar esses dados, através de uma API, para o Whatsapp como para o email ou a página do paciente.

# Instruções de configuração
* Instalar a biblioteca: ArduinoJson na sua IDE de Arduino
* Rodar o código-fonte(codigo.cpp) em c++ nele
* Instalar node.js
* No seu cmd utilizar o comando: npm install -g --unsafe-perm node-red
* No seu cmd utilizar o comando: node-red
* Abrir o: http://localhost:1880/
* Instalar a biblioteca: node-red-node-serialport no node-red
* Instalar a biblioteca: node-red-dashboard no node-red
* Importar o fluxo Json(node-red.json) para o node-red
* Acessar o dashboard para acompanhar a atualização dos dados lidos

# Execução da aplicação
Os dados vitais coletados incluem a pressão(sistólica e diastólica), a temperatura e pressão. O limite defindo em cada dado momentâneo expõe valores saudáveis para o paciente, podendo evidenciar estado de hipotermia ou febre(utilizando temperatura como exemplo) e através dos dados registrados ao longo do tempo é possível ter uma visão geral do quadro do paciente.

# Link wokwi
https://wokwi.com/projects/394277514380450817
