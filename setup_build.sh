#!/bin/bash

docker run --mount type=bind,source=${PWD},target=/src  -it  -p 127.0.0.1:80:8080 build-img

