# CMake Examples

Install Anaconda/Miniconda

```
$ wget https://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
$ bash Miniconda3-latest-Linux-x86_64.sh -b -p /opt/miniconda
$ export PATH=/opt/miniconda/bin:$PATH
```

and then run:

```
$ conda install boost
```

To easily get a version of boost that can be found by CMake.

## Resources

* [CMake documentation](https://cmake.org/cmake/help/v3.7/)
* [Transitive usage requirements](https://cmake.org/cmake/help/v3.7/manual/cmake-buildsystem.7.html#transitive-usage-requirements)
