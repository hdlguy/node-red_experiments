# Description

This folder contains a Node-Red flow which implements a simple virtual intrument interface. It can be run locally or in a Docker container.

## Run locally

- install node-red
- install Dashboard 2.0 plugin into Node-Red

- clone repo
git clone https://github.com/hdlguy/node-red_experiments.git

The flow is version controlled in this repo.  To make it run directly on this machine use this link.

ln -s ~/github/node-red_experiments/db2_chart/flows/  ~/.node-red

- start server
node-red

- open the flow 
http://127.0.0.1:1880/

- open application
http://127.0.0.1:1880/dashboard


## Run in Docker Container

- install Docker

- clone repo from GitHub
git clone https://github.com/hdlguy/node-red_experiments.git
cd node-red_experiments/db2_chart

- build the container
docker compose build

- start container
docker compose up -d

- open the flow 
http://127.0.0.1:1880/

- open application
http://127.0.0.1:1880/dashboard

- open bash shell on container
docker exec -it my-nodered /bin/bash

- stop container
docker compose down


## Misc

docker images
docker ps
docker stop [container name or hash]
docker rmi --force [image name or hash]

Some commands to start Docker directly

docker run -it -p 1880:1880 -v node_red_data:/data --name mynodered nodered/node-red
docker run -it -p 1880:1880 -v node_red_data:/data nodered/node-red
docker run -it -p 1880:1880 -v debian_data:/data --name deb1 debian

To open a bash shell on the running container

docker exec -it my-nodered /bin/bash

