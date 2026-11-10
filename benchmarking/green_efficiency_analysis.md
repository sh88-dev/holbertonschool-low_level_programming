# Green Efficiency Analysis

## Measurement Methodology

- All programs were compiled with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`.
- Time was measured inside each program with `clock()`, which counts processor clock ticks, then  converted to seconds by dividing by `CLOCKS_PER_SEC`.
- The baseline and comparison programs were each run three times in a row within one sandbox session, and every output was recorded verbatim.
- For the comparison, I averaged each implementation's three runs and divided the slower average by the faster one.

## Instrumentation lab

- Each phase was timed from a `clock()` reading just before its function call to one just after  using the same two variables (`t_start`, `t_end`) for every phase.
- TOTAL is the sum of the three phases, so it is always at least as large as each one.
- Printing was kept outside all measurements.

## Observed Performance Differences

- The baseline loop (100,000,000 iterations) took 0.204707, 0.214353 and 0.204864 seconds, an average of 0.207975 seconds.
-     The slowest run was approx.  0.0096 seconds (4.7%) slower than the fastest, even though the work was identical, which shows normal run-to-run variability.

- The naive algorithm took 2.487197, 2.487293 and 2.486729 seconds (average 2.487073 s).
-     The single-pass algorithm took 0.000096, 0.000097 and 0.000096 seconds (average 0.000096 s).
-     The naive version was about 25,800 times slower, which matches the amount of work: it checks about 1.25 billion items when 50,000 checks are enough,
      and it counts the same even numbers over and over (625 million times instead of 25,000).


- In the instrumentation lab, one run printed TOTAL 0.000749 s, BUILD_DATA 0.000295 s, PROCESS 0.000319 s and REDUCE 0.000135 s.
     The three phases add up exactly to TOTAL, and PROCESS took the largest share in this run.

## Relation Between Runtime and Energy Consumption

- No power was measured, so runtime is used as a proxy: the longer the CPU is busy, the more energy it generally uses.
- The naive algorithm kept the CPU busy for about 2.49 seconds for a result the single-pass version produced in under 0.0001 seconds.
- At these averages, 1,000 runs would take about 41 minutes of CPU time for the naive version, against about 0.1 seconds for single pass.

## Limitations of the Experiment

- `clock()` shows only six decimal places, so very short times (a few millionths of a second) are close to its resolution and mostly noise.
- Only three runs per program (one for the instrumentation lab) were recorded, which is a small sample.
- The sandbox is shared with other users, so background activity may have affected the timings.
- The tasks may have run in different sandbox sessions, so times are only compared within the same program, never across tasks.
- Runtime is only a proxy; no watts were measured.

## Practical Engineering Takeaway

- Choosing an algorithm that avoids repeated work made the biggest difference, turning a 2.49-second job into one of under a millisecond.
- Measure before optimising, compare under the same conditions, and keep the raw results.