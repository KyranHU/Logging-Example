# C++ Logging Example Project


1. **Devcontainer Configuratie:**  
  De `.devcontainer` map bevat een `devcontainer.json` en een `Dockerfile`. Bij het openen van dit project in VSCode (met Remote Containers) wordt automatisch een container gebouwd met alle benodigde tools.


2. **Compileren van de applicatie:**  
   Open een terminal in de container en voer de volgende commando’s uit:
   ```bash
   mkdir build && cd build
   cmake .. -DCMAKE_BUILD_TYPE=Debug   # of -DCMAKE_BUILD_TYPE=Release
   cmake --build .

3. **Uitvoeren van de applicatie:**  
   Voer het volgende commando uit in de terminal:
   ```bash
   ./main

   Dit print de volgende output met logging:
   ```
    Factorial van 5 is Start berekenFactorial met n = 5
    Intermediate result at i = 1 is 1
    Intermediate result at i = 2 is 2
    Intermediate result at i = 3 is 6
    Intermediate result at i = 4 is 24
    Intermediate result at i = 5 is 120
    Eind berekenFactorial met result = 120
    120
   ```

   Dit kan worden geinterpreteerd als het berekenen van de faculteit van 5, waarbij de tussenresultaten worden gelogd.
