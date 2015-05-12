# MASA-OmpSs

<p align="justify">
The <b>MASA-OmpSs extension</b> is used with the <a href="https://github.com/edanssandes/MASA-Core">MASA architecture</a> to align DNA sequences of unrestricted size with the Smith-Waterman/Needleman-Wunsch algorithms combined with Myers-Miller. It uses the <a href="https://pm.bsc.es/ompss">OmpsSs Programming model</a> to accelerate the computation time in CPU. 
</p>

### Download

Latest Version: [masa-ompss-1.0.1.1024.tar.gz](releases/masa-ompss-1.0.1.1024.tar.gz?raw=true)


### Compiling (masa-ompss)

```
tar -xvzf masa-ompss-1.0.1.1024.tar.gz
cd masa-ompss-1.0.1.1024
./configure
make
```

### Executing

```
./masa-ompss [options] seq1.fasta seq2.fasta
```
All the command line arguments can be retrieved using the --help parameter. See the [wiki](https://github.com/edanssandes/MASA-Core/wiki/Command-line-examples) for a list of command line examples.


