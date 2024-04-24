**Documentação do Projeto: PBMConverter**

**Descrição:**
O PBMConverter é uma aplicação simples desenvolvida em linguagem C para um cliente , que permite a conversão de dados de imagem para o formato PBM (Portable Bitmap). Este formato de arquivo de imagem é utilizado para representar imagens em preto e branco de forma simples e eficiente.

**Funcionalidades Principais:**

1. **Conversão para PBM:** O PBMConverter oferece a capacidade de converter dados de imagem em pixels para o formato PBM, que é amplamente utilizado devido à sua simplicidade e facilidade de interpretação.

2. **Entrada Flexível:** O projeto permite que o usuário forneça os dados da imagem de duas maneiras:
   - **Entrada Manual:** O usuário pode inserir manualmente as dimensões da imagem e os pixels desejados.
   - **Entrada a partir de Arquivo PBM:** O usuário pode fornecer um arquivo PBM existente para ser processado pelo PBMConverter.

**Funcionamento:**

1. **Entrada Manual:**
   - O usuário é solicitado a inserir manualmente as dimensões da imagem (largura e altura) e os pixels correspondentes.
   - Após a entrada dos dados, o PBMConverter os processa e os codifica no formato PBM.

2. **Entrada a partir de Arquivo PBM:**
   - O usuário fornece um arquivo PBM existente.
   - O PBMConverter verifica o formato do arquivo e extrai as dimensões da imagem e os pixels.
   - Em seguida, realiza a conversão dos dados para o formato PBM.

**Limitações:**
- O PBMConverter suporta apenas imagens em preto e branco, onde cada pixel é representado por um único bit (0 para branco e 1 para preto).
- O tamanho máximo permitido para a imagem é definido pelas constantes `MAX_ALLOWED_WIDTH` e `MAX_ALLOWED_HEIGHT`.

**Instruções de Uso:**
1. Compile o código-fonte usando um compilador C compatível.
2. Execute o programa gerado.
3. Escolha entre inserir manualmente os dados da imagem ou fornecer um arquivo PBM existente.
4. Siga as instruções fornecidas para fornecer os dados da imagem ou selecionar o arquivo PBM.
5. Após a entrada dos dados, o PBMConverter irá processá-los e gerar o arquivo PBM correspondente.

**Observações:**
- Certifique-se de fornecer apenas imagens em preto e branco no formato correto ao utilizar o PBMConverter.

**Conclusão:**
O PBMConverter é uma ferramenta útil para converter dados de imagem em formato PBM, oferecendo flexibilidade e simplicidade no processo. Com suas funcionalidades intuitivas e entrada flexível, é uma solução eficaz para lidar com imagens em preto e branco de forma eficiente.

Para mais informações ou suporte, consulte a documentação ou entre em contato conosco.

