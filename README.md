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

Every tests must be classified in suites and in multiple files.

</details>

<details>
<summary>Cheatsheet</summary>

## Cheatsheet

The 2 main assertions provided by Criterion are **cr_assert_XX** and **cr_expect_XX**.

An cr_expect will continue even if one assertion fail in test which I don't recommended where an cr_assert will mark the test as failed and go to the next one.

### Common assertions

Those assertions are the basic ones.

They are mostly used fro int tests.

Here is a list of available assertions:

| Assertion | Purpose | Description |
| --------- | ------- | ---------- |
| cr_assert_eq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_ne(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_lt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_le(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_gt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_ge(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_null(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_not_null(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 

<br/>

### String assertions

The specification "str_" must be added to the assertion.

For exemple "cr_assert_eq()" will become "cr_assert_str_eq()" to check equality between strings.

**THIS DOESN'T WORK FOR EVERY PREVIOUS ASSERTION**

Here is a list of available assertions:

| Assertion | Purpose | Description |
| --------- | ------- | :--------: |
| cr_assert_str_empty(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to str <span style="color: yellow;">expected</span> | 
| cr_assert_str_not_empty(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_eq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_neq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_lt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_leq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_gt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 
| cr_assert_ge(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to value of <span style="color: yellow;">expected</span> | 

<br/>

### Useful Criterion tools

| Name | Description |
| ---- | ----------- |
| cr_log_warn(<span style="color: yellow">message</span>) | Display a <span style="color: yellow">message</span> as a warning type while testing |
| cr_log_error(<span style="color: red">message</span>) | Display a <span style="color: red">message</span> as an error type while testing |
| .init | Display a <span style="color: red">message</span> as an error type while testing |
| .fini | Display a <span style="color: red">message</span> as an error type while testing |
| .signal | Display a <span style="color: red">message</span> as an error type while testing |
</details>

<details>
<summary>Compilation</summary>

list of useful args:
-h
-q
-v
-l
-S
--verbose
--debug=[tool]
--debug=[gdb]

</details>

TestSuite()
