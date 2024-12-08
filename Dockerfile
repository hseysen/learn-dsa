FROM gcc

WORKDIR /workspace

RUN apt-get update && apt-get install -y cmake && rm -rf /var/lib/apt/lists/*
