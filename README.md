# Workshop-Criterion

Welcome to my Criterion workshop about the basis of the framework.

<br/>

## Table of contents

The purpose of this workshop is to understand:

- What is Criterion
- How to create coverage on our code
- A [cheatsheet](./Cheatsheet.md) of different assertions
- How to use basic assertions for unit and integration tests
- How to implement tests in a **Makefile**

<br/>

## What is Criterion

Criterion is a **unit testing framework** for C and CPP.

### Philosophy

Most test frameworks for C require a lot of boilerplate code to set up tests and test suites – you need to create a main, then register new test suites, then register the tests within these suits, and finally call the right functions.

This gives the user great control, at the unfortunate cost of simplicity.

This is what Criterion is different, in fact no main and multiples suites are required in order to have some basic tests.

<br/>

### Features

C99 and C++11 compatible.

Tests are automatically registered when declared.

Implements a xUnit framework structure.

Test are isolated in their own process, crashes and signals can be reported and tested.

Runs on Linux, FreeBSD, macOS, and Windows (Compiling with MinGW GCC and Visual Studio 2015+).

Please refer to the [cheatsheet](./Cheatsheet.md) for a non exhaustive list of the assertions available.

<br/>

### Prerequisites

A default entry point is provided, no need to declare a main.

Unified interface between C and C++: include the criterion header and it just works.

Every tests must be classified in suites and in multiple files.

<br/>

## Coverage

The coverage level represent the quality of your units and integretions tests.

### What is Coverage

The quality is defined by:

- The number of lines tested
- The number of branches tested

Branches are the different path taken in your code, for exemple a `if(value == 42)` statement have 2 different branches, wether value is equal to 42 and the test go in the statement or it's not and the other branch is taken.

Coverage is created from *.gcno* and *.gnca* files.

<br/>

### Gcovr

The tool that I personnally use to create coverage is **GCOVR**.

`gcovr` is used to generate summarized code coverage results.

#### Parameters

Some parameters can be provided to the gcovr command line.

By default the gcovr command will display the number of tested lines.

The `--branches` must be provided to replace the tested lines by the tested branches.

The most useful are `--html` and `--html-details` which will generate html files to obtain a web preview of the tests.
