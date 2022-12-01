# Workshop-Criterion

Welcome my Criterion workshop about the basis of the framework.

## Table of contents

The purpose of this workshop is to understand:

- What is Criterion
- A [cheatsheet]("./Cheatsheet.md") of different assertions
- How to use basic assertions for unit and integration tests
- How to implement tests in a **Makefile**

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

Please refer to the [cheatsheet](./Cheatsheet) for a non exhaustive list of the assertions available.

<br/>

### Prerequisites

A default entry point is provided, no need to declare a main.

Unified interface between C and C++: include the criterion header and it just works.

Every tests must be classified in suites and in multiple files.
