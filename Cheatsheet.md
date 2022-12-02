# Cheatsheet

The 2 main assertions provided by Criterion are **cr_assert_XX** and **cr_expect_XX**.

An cr_expect will continue even if one assertion fail in test which I don't recommended where an cr_assert will mark the test as failed and go to the next one.

### Common assertions

Those assertions are the basic ones.

They are mostly used for int tests.

Here is a list of available assertions:

| Assertion | Purpose | Description |
| --------- | :-----: | ---------- |
| cr_assert_null(<span style="color: blue;">value</span>) | <span style="color: blue;">value</span> == <span style="color: red;">null</span> | Check if <span style="color: blue;">actual</span> is <span style="color: red;">null</span> depending of its type | 
| cr_assert_not_null(<span style="color: blue;">value</span>) | <span style="color: blue;">value</span> != <span style="color: red;">null</span> | Check if <span style="color: blue;">actual</span> is not <span style="color: red;">null</span> depending of its type |
| cr_assert_eq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to <span style="color: yellow;">expected</span> | 
| cr_assert_neq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> != <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is not equal to <span style="color: yellow;">expected</span> | 
| cr_assert_lt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> < <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is lower to <span style="color: yellow;">expected</span> | 
| cr_assert_leq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> <= <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is lower or equal to <span style="color: yellow;">expected</span> | 
| cr_assert_gt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> > <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is greater to <span style="color: yellow;">expected</span> | 
| cr_assert_geq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> >= <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is greater or equal to <span style="color: yellow;">expected</span> | 

<br/>

### String assertions

The specification "str_" must be added to the assertion.

For example "cr_assert_eq()" will become "cr_assert_str_eq()" to check equality between strings.

Here is a list of available assertions:

| Assertion | Purpose | Description |
| --------- | :-----: | -------- |
| cr_assert_str_empty(<span style="color: blue;">actual</span>) | <span style="color: blue;">actual</span> == ""| Check if string <span style="color: blue;">actual</span> is <span style="color: red;">empty</span> |
| cr_assert_str_not_empty(<span style="color: blue;">actual</span>) | <span style="color: blue;">actual</span> != "" | Check if <span style="color: blue;">actual</span> is not <span style="color: red;">empty</span> | 
| cr_assert_str_eq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> == <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is equal to <span style="color: yellow;">expected</span> | 
| cr_assert_str_neq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> != <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is not equal to <span style="color: yellow;">expected</span> | 
| cr_assert_str_lt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> < <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is lower to <span style="color: yellow;">expected</span> | 
| cr_assert_str_leq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> <= <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is lower or equal to <span style="color: yellow;">expected</span> | 
| cr_assert_str_gt(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> > <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is greater to <span style="color: yellow;">expected</span> | 
| cr_assert_str_geq(<span style="color: blue;">actual</span>, <span style="color: yellow;">expected</span>) | <span style="color: blue;">actual</span> >= <span style="color: yellow;">expected</span> | Check if <span style="color: blue;">actual</span> is greater or equal to <span style="color: yellow;">expected</span> | 
| cr_assert_stdout_eq_str(<span style="color: blue;">value</span>) | <span style="color: blue;">value</span> == <span style="color: red;">stdout</span> | Check if <span style="color: blue;">value</span> is equal to the curent <span style="color: red;">stdout</span> of the test |

<br/>

### Useful Criterion tools

| Name | Description |
| ---- | ----------- |
| .init = &<span style="color: blue">fptr</span> | Must be added to the prototype. Execute the <span style="color: blue">fptr</span> passed before the test |
| .fini = &<span style="color: blue">fptr</span> | Must be added to the prototype. Execute the <span style="color: blue">fptr</span> passed after the test |
| .signal = <span style="color: blue">SIGNAL</span> | Specify the <span style="color: blue">SIGNAL</span> to catch in a test |
| cr_log_info(<span style="color: blue">message</span>) | Display a <span style="color: blue">message</span> as an info type, not displayed unless `--verbose` is specified |
| cr_log_warn(<span style="color: yellow">message</span>) | Display a <span style="color: yellow">message</span> as a warning type |
| cr_log_error(<span style="color: red">message</span>) | Display a <span style="color: red">message</span> as an error type |
| cr_redirect_stdout() | Redirect every <span style="color: red;">stdout</span> in the test |
| cr_redirect_sterr() | Redirect every <span style="color: red;">stdout</span> in the test |

### Examples:

#### .init / .fini

![InitFiniExample](./Assets/InitFini.png)

Result:

![InitFiniResult](./Assets/ResultInitFini.png)

#### .signal

![SignalFiniExample](./Assets/Signal.png)

<br/>

## Compile flags

Here is a list of useful flags you can add to your executable file:

| Flag | Description |
| ---- | ----------- |
| -h | Display helping informations | 
| -v | Display the current version of Criterion |
| -l | Display the list of the different suites and tests executed |
| -S | Display short named files |
| --verbose | Display every prints generated by Criterion (very recommended) |
| --debug=[<span style="color: blue">tool</span>] | Start the tests while using a <span style="color: blue">debugging server</span> attached (gdb...) |
