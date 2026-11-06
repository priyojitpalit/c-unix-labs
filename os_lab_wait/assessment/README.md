# Operating Systems Practical Examination

Open a terminal in Binder and enter:

```bash
cd os_lab_wait/assessment
```

The Canvas quiz title identifies your assigned dataset set. For example, a student
assigned **Set 03** uses **data/set03.txt** for every question.

There are five programs in this directory, each containing one unfinished function:

| Task | Program | System calls / concepts |
| --- | --- | --- |
| 1 | `scan.c` | `open`, `read`, `close` |
| 2 | `append.c` | `open`, `lseek`, `read`, `write`, `O_TRUNC`, `O_APPEND` |
| 3 | `seek.c` | `lseek` with `SEEK_SET`, `SEEK_CUR`, `SEEK_END` |
| 4 | `fork.c` | `fork`, parent/child memory, `wait`, and file output |
| 5 | `wait.c` | `fork`, `waitpid`, `WIFEXITED`, `WEXITSTATUS` |

Complete only the functions marked STUDENT WORK. Do not change `main()` or the
provided calculation helpers. For example, if assigned Set 03:

```bash
gcc scan.c -o scan
./scan data/set03.txt
```

Then repeat using `append.c`, `seek.c`, `fork.c`, and `wait.c`.
Every run prints five numbered checkpoints. Enter each checkpoint value in its
corresponding Canvas question. The results of later checkpoints depend on earlier
computations; you should not assume that each line can be calculated independently.

Each Binder session is temporary. Compile again after changing a source file. Every
student has a separate workspace, so output files such as `combined.bin` are local
to that session. Running a program again starts its sequence from Checkpoint 1.

The dataset files are supplied; no web searches or additional tools are needed.
There are no requirements involving `dup()` or `dup2()`.
