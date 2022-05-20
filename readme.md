# Project 2 - Syntactic Analyzer

### TEC | Instituto Tecnológico de Costa Rica

### Compiladores e Intérpretes - José Francisco Torres Rojas

Parser for C language, bison was used to create it, outputs all syntactic errors found on the input source file.

# Authors

- Elías Castro Montero
- Abiel Porras Garro
- Alejandro Bedoya Jiménez

# Requirements

To run this code (Linux only), you need to install the GCC compiler, bison, and flex.

To install GCC on Linux you need to run the following commands on the terminal:

```
sudo apt-get update
sudo apt install build-essential
```

You can check if the installation succeeded with the following command:

```
gcc --version
```

To install bison you can run the following commands:

```
sudo apt-get update
sudo apt-get install bison
```

The required version is 3.8.1, if the wrong version is installed, refer to the mirrors for proper installation: http://mirrors.ibiblio.org/gnu/bison/.

At last, to install flex, use the following commands:

```
sudo apt-get update
sudo apt-get install flex
```

# Usage

The only way to interact with the program is through the terminal. To compile and execute the program you can run the following instruction on the terminal:

## Compile the program

```
make
```

## Run the compiler

```
./scannerC <filename>
```

## Help

In case you need help, you can utilize the following flag when running the executable:

```
./scannerC <filename> -h
```
