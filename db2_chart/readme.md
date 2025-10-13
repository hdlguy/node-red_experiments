The flow is version controlled in this repo and a symbolic link is used to make it executable.

ln -s ~/github/node-red_experiments/db2_chart/flows/  ~/.node-red


Some commands to start Docker directly

docker run -it -p 1880:1880 -v node_red_data:/data --name mynodered nodered/node-red
docker run -it -p 1880:1880 -v node_red_data:/data nodered/node-red
docker run -it -p 1880:1880 -v debian_data:/data --name deb1 debian


To open a bash shell on the running container

docker exec -it my-nodered /bin/bash

