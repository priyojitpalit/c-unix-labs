# Operating Systems Practical Quiz

This quiz is designed for a **30-minute assessment**. It covers descriptor-based file I/O, seeking, `fork()`, and `wait()`; it does not use `dup()` or `dup2()`.

From a Binder terminal, enter:

```bash
cd os_lab_wait/quiz_30min
```

Canvas will assign you one dataset. For example, Set 03 uses `data/set03.txt`.

Complete the single unfinished function `measure()` in `file_measure.c`. Do not change `main()` or the supplied calculation rules. Compile and run using the **two-digit set number assigned in Canvas**:

```bash
gcc file_measure.c -o file_measure
./file_measure data/set03.txt
```

The program prints seven numbered checkpoints. Each checkpoint after the first depends on the preceding result. Enter the seven integers in Questions 1–7 of Canvas. Questions 8–10 are short questions about the shell and process behavior covered in class.

All files needed for the quiz are provided here. There is no need to use the earlier five-program assessment folder.
