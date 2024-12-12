# Learn-DSA

I've embarked on a journey of refining my knowledge about Data Structures and Algorithms, and this repository will hold all the codes that I've written so far in my journey. I hope this repository will be a good resource for those planning to learn DSA.

## Setting up
I'm using Windows 11 as my operating system, and therefore, before starting this course, I did not want to locally install C/C++ to my computer. Instead I preferred to use a Docker development container approach that I saw [here](https://github.com/TechHara/vscode_docker). I've made some modifications to the setup, mainly due to the errors and personal preferences (I'm using WSL2 Docker installation).

Simply clone the repository, and run:

```bash
docker-compose up -d
```

To avoid having to reinstall the extensions, I prefer to not remove the container:

```bash
docker-compose stop
```

In your VSCode, you will need `ms-vscode.cpptools`, `ms-vscode.cmake-tools` and `ms-vscode-remote.remote-containers` extensions installed. You will also need to install the first two in the container, but only during your first run. Even if you use `docker-compose stop` to shut down the container and remove it, the extension should be reinstalled automatically for the new containers.

## Verify
If all works, you will be able to click **Build** and **Launch** buttons at the bottom of VSCode (from CMake Tools Extension), and see the text `Everything works fine.` in the output terminal.

## Running example programs
Currently, only one example program exists, which is about the Array ADT. The Debug launch configuration is available for running the code and inspecting its output. Future topics will also have their own configurations for the ease of use.
