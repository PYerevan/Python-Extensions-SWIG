FROM ubuntu
RUN apt update
RUN apt-get install -y gcc g++ make swig
RUN apt-get install -y python3 python3-pip python3-dev python3-numpy
CMD ["bash"]