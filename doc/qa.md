Q: There is master process and maybe multiple worker processes. Is nginx listen api called in master process, or in worker process?

A: Master process.


Q: If there are multiple worker processes, how does they cooperate with each other? Or there is no need to cooperate?

A:

Q: How does the worker processes cooperate with master process? Or there is no need to cooperate?

A:


Q: Using valgrind there are 4 output files. which means there are 4 processes. One master process, two worker process, the last is what?

A:



references about sockets shared between parent process and forked processes:

https://stackoverflow.com/questions/32403339/closing-the-listening-socket-after-a-fork

https://github.com/walkor/Workerman/issues/156

SO_REUSEPORT


