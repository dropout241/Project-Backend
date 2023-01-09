# Project-Backend
C++ backend to process HTTP requests

## Description
Why use C++? cause i wanted to.


## Getting started

### 1. Setup Docker Container
For reproducibility, building and testing of this part of the application will occur in docker.

If you have not installed the docker engine for your machine, please do so.

https://docs.docker.com/get-docker/

The docker run command for the build container includes bind mounting, for ease, a 
setup script is contained in the repo, to run the build container, simply run:

```
./setup_build.sh
```

from the root of the respository. This will give you an interactive shell with the contents of the repo in /root/src, from there you can cd and run cmake commands, test, etc

### 2. Build the Project
Follow the standard cmake build process:

```
cd ~/src
mkdir build
cmake ..
make -j 3

./Backend
```

### 3. Verify

After runnning `./Backend`, you should see `Setting up Http Connections...`

In another terminal, assuming you have access to `curl`, run:

```
curl http://localhost/hi
```

And verify that the output is as expected.

## TODO:
1. Setup CMake to compile a basic project.
2. Document knowledge of CMake in the repo wiki
3. Setup a docker container for development.
4. Document knowledge of docker in the repo wiki.
5. Setup Jenkins pipeline to build and run tests.
6. Write a service that can listen and respond to http requests.
