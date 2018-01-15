FROM python:3.6.4-alpine3.7
RUN apk add --update build-base

# Enable GNU C Library binaries work on Alpine Linux
RUN apk --no-cache add ca-certificates wget && wget -q -O /etc/apk/keys/sgerrand.rsa.pub https://raw.githubusercontent.com/sgerrand/alpine-pkg-glibc/master/sgerrand.rsa.pub \
    && wget https://github.com/sgerrand/alpine-pkg-glibc/releases/download/2.26-r0/glibc-2.26-r0.apk \
    && apk add glibc-2.26-r0.apk

# Install miniconda and permitted packages
RUN wget https://repo.continuum.io/miniconda/Miniconda3-4.3.31-Linux-x86_64.sh 
RUN sh Miniconda3-4.3.31-Linux-x86_64.sh -b -p /root/miniconda
RUN mkdir -p /notebooks
ENV PATH $PATH:/root/miniconda/bin
RUN conda install numpy matplotlib jupyter && rm -f Miniconda3-4.3.31-Linux-x86_64.sh

# Container config
WORKDIR /notebooks
EXPOSE 8888
VOLUME /notebooks
CMD ["jupyter", "notebook", "--ip=0.0.0.0", "--allow-root", "--no-browser"]

## ------ Usage --------
# docker build -t numpy_rush .
# mkdir notebooks
# docker run -p 8800:8888 -v $(pwd)/notebooks:/notebooks numpy_rush
# <docker-host-ip>:8800/?token=...