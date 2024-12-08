# Learn-DSA

The course that I'm learning from is [Mastering Data Structures & Algorithms using C and C++](https://www.udemy.com/course/datastructurescncpp/?srsltid=AfmBOorRvyhkI-Ieo3DeOxMAXlehALHWv95UP37pysQnh1AMYzfG-bdy) by Abdul Bari. All the programs that I wrote while watching the course are located in this repository.

## Setting up
I'm using Windows 11 as my operating system, and therefore, before starting this course, I did not want to locally install C to my computer. Instead I preferred to use a Docker development container approach that I saw in [this video](https://www.youtube.com/watch?v=93kgF8eI6Do). I've made some modifications to the source code from the [shown repository](https://github.com/TechHara/vscode_docker), mainly due to the errors that arised during the setup (probably related to WSL2 Docker installation that I have).

Simply clone the repository, and run:

```bash
docker-compose up -d
```

To avoid having to reinstall everything, I prefer to not remove the container:

```bash
docker-compose stop
```

In your VSCode, you will need `ms-vscode.cpptools`, `ms-vscode.cmake-tools` and `ms-vscode-remote.remote-containers` extensions installed. You will also need to install the first two in the container, but only in the first run.

## Verify
If all works, you will be able to click **Build** and **Launch** buttons at the bottom of VSCode, and see the text `Hello, World!` in the output. For now, I've only configured the environment, but will add my codes and a guide on how to run and make sense of them later.