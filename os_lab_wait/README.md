# Operating Systems Lab: File I/O and Processes

These files accompany the laboratory notes through the `wait()` / `waitpid()` section.
The topics on `dup()`, `dup2()`, or later course sections are not part of this lab.

Open a terminal in Binder. To run the demonstrations:

```bash
cd os_lab_wait/demos
gcc write_basic.c -o write_basic
./write_basic
```

All demonstrations are in the same `demos` directory. The original sample files
(`test.txt`, `seeking`, `input.txt`) are included alongside the programs so
relative pathnames work without changing directories between examples.

For the assessment exercises:

```bash
cd os_lab_wait/quiz
gcc window_sum.c -o window_sum
./window_sum 130 41

gcc wait_results.c -o wait_results
./wait_results 7
```

The two assessment source files contain unfinished functions. Complete those
functions before using the programs to obtain numerical results. No solutions
or answer keys are included in this repository.

Each Binder launch has its own temporary workspace. Rebuild your executable
after changing its C source file.
