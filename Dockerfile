FROM gcc

WORKDIR /workspace

RUN apt-get update && apt-get install -y cmake gdb && rm -rf /var/lib/apt/lists/*
