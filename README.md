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

In your VSCode, it is recommended to install the extensions shown in [extensions.json](.vscode/extensions.json), both on your machine, and in the development container, but only during your first run. Even if you use `docker-compose stop` to shut down the container and remove it, the extension should be reinstalled automatically for the new containers.

## Verify
If all works, you will be able to click **Build** and **Launch** buttons at the bottom of VSCode (from CMake Tools Extension), and see the text `Everything works fine.` in the output terminal.

## Running examples
Open the **Run and Debug** window in VSCode by pressing **Ctrl + Shift + D** (or choose from side bar). Choose one of the options in the top and run it. Current examples:
|               Example Name                | Notes for the Example                                                                                                                                                                               |
|-------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|          Test Environment Setup           | Run this example to make sure your environment is set up correctly and your Docker image can see your compiler. Source code is [here](tests/test_env.cpp).                                          |
|              Test Array ADT               | Run this example to quickly test all the methods of the Array Abstract Data Type. Source code is [here](tests/test_array_adt.cpp).                                                                  |
|      Example - Pairs with sum of K        | This example shows an efficient solution to the problem of finding all pairs of numbers inside an unsorted non-negative array with no duplicates. Source code is [here](algorithms/pair_sum_k.cpp). |
|  Example - Pairs with sum of K (Sorted)   | This example shows an efficient solution to the problem of finding all pairs of numbers inside a sorted array with no duplicates. Source code is [here](algorithms/pair_sum_k_sorted.cpp).          |
| Example - Check if string is a Palindrome | This example shows how to check if a string is a palindrome (same when reversed). Source code is [here](algorithms/palindrome_string.cpp).                                                          |
| Example - Check if number is a Palindrome | This example shows how to check if a number is a palindrome (same when reversed) without converting it into a string. Source code is [here](algorithms/palindrome_number.cpp).                      |
