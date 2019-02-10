#docker run --rm -it $(docker build -q - < HelloWorld.dockerfile)
FROM alpine:3.8
CMD  echo 'Hello World'
