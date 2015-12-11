FROM debian
MAINTAINER Hyoung-gyu Choi

RUN apt-get update
RUN apt-get install wget vim python2.7 gcc g++ make git -y
RUN useradd bbolroc

USER bbolroc

