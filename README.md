# Environmental-Constraint-Extraction-Tool

## Installation

```
git clone this-repository

cp .env.example .env

docker compose up -d --build

sudo docker compose exec cmake cd /root/rse/goal && unzip GOAL-20200506-with-API.zip

```

## Usage

```
docker compose up -d

docker compose exec cmake cd /root/rse/build && cmake .. && make && ./rse
```