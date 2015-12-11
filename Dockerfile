FROM debian
MAINTAINER Hyoung-gyu Choi

RUN echo "deb http://ftp.kaist.ac.kr/debian jessie main" > /etc/apt/sources.list
RUN echo "deb http://ftp.kaist.ac.kr/debian jessie-updates main" >> /etc/apt/sources.list
RUN echo "deb http://ftp.kaist.ac.kr/debian-security jessie/updates main" >> /etc/apt/sources.list

RUN apt-get update
RUN apt-get install wget vim python2.7 gcc g++ make git -y
RUN apt-get install sudo -y
RUN useradd -m -s /bin/bash bbolroc
RUN echo "bbolroc ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers
ENV TERM xterm
RUN printf "syntax on\nset nu\nset tabstop=4\nset shiftwidth=4\nset smartindent\nset hlsearch\nnnoremap <space> i<space><esc>l\ncolorscheme darkblue\nmap ,1 :b!1<cr>\nmap ,2 :b!2<cr>\nmap ,3 :b!3<cr>\nmap ,4 :b!4<cr>\nmap ,5 :b!5<cr>\nmap ,6 :b!6<cr>\nmap ,7 :b!7<cr>\nmap ,8 :b!8<cr>\nmap ,9 :b!9<cr>\nmap ,0 :b!10<cr>\nmap ,x :bn!<cr>\nmap ,z :bp!<cr>\nmap ,w :bw!<cr>\n" > /home/bbolroc/.vimrc
RUN echo "alias ls='ls --color'" >> /home/bbolroc/.bashrc

USER bbolroc
WORKDIR /home/bbolroc/
