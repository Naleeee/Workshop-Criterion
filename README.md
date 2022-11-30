# Workshop-Criterion

Welcome my Criterion workshop about the basis of the framework.

## Table of contents

The purpose of this workshop is to understand:

- What is Criterion
- A cheatsheet of different assertions
- How to use basic assertions for unit and integration tests
- How to implement tests in a **Makefile**

<details>
<summary>What is Criterion</summary>

# What is Criterion

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

Please refer to the ![cheatsheet]("./Cheatsheet") for a non exhaustive list of the assertions available.

<br/>

### Prerequisites

A default entry point is provided, no need to declare a main unless you want to do special handling.

Unified interface between C and C++: include the criterion header and it just works.

Every tests can be classified in groups and in multiple files.

</details>

<details>
<summary>Cheatsheet</summary>

The 2 main assertions provided by Criterion are **cr_assert_XX** and **cr_expect_XX**.

An cr_expect will continue even if one assertion fail in test which I don't recommended where an cr_assert will mark the test as failed and go to the next one.

Here is a non-exhaustive list of assertions:

| Assertion | Purpose | How to use |
| --------- | ------- | ---------- |
| cr_assert_eq(actual, expected) | Check if value is actual is equal to value of expected| 

</details>
