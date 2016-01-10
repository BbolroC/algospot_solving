FROM ubuntu
MAINTAINER Hyoung-gyu Choi

RUN apt-get update
RUN apt-get install wget vim python2.7 gcc g++ make git -y
RUN apt-get install sudo -y
RUN wget https://storage.googleapis.com/golang/go1.5.2.linux-amd64.tar.gz && \
tar -C /usr/local -xzf go1.5.2.linux-amd64.tar.gz && \
rm go1.5.2.linux-amd64.tar.gz
RUN wget https://www.reucon.com/cdn/java/jdk-8u65-linux-x64.tar.gz && \
tar -C /usr/local -xzf jdk-8u65-linux-x64.tar.gz && \
rm jdk-8u65-linux-x64.tar.gz

RUN useradd -m -s /bin/bash bbolroc
RUN echo "bbolroc ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers
RUN apt-get install python2.7 python-pip -y
ENV TERM xterm
ENV PATH $PATH:/usr/local/go/bin:/usr/local/jdk1.8.0_65/bin
ENV JAVA_HOME /usr/local/jdk1.8.0_65
ENV GOPATH /home/bbolroc/algospot/go
RUN echo "alias ls='ls --color'" >> /home/bbolroc/.bashrc
RUN apt-get install gdb -y
RUN apt-get install ruby-full -y
RUN apt-get install curl cmake -y
RUN git clone https://github.com/stevedekorte/io.git && \
cd io && mkdir build && cd build && cmake .. && make install && cd ../.. && \
rm -rf ./io

RUN echo "alias irb='irb --prompt-mode simple'" >> /home/bbolroc/.bashrc
RUN clear

USER bbolroc
WORKDIR /home/bbolroc/algospot/
RUN mkdir -p ~/.vim/autoload ~/.vim/bundle && \
curl -LSso ~/.vim/autoload/pathogen.vim https://tpo.pe/pathogen.vim
RUN git clone https://github.com/fatih/vim-go.git ~/.vim/bundle/vim-go
RUN printf "execute pathogen#infect()\nsyntax on\nfiletype plugin indent on\nset nu\nset tabstop=4\nset shiftwidth=4\nset smartindent\nset hlsearch\nnnoremap <space> i<space><esc>l\ncolorscheme darkblue\nmap ,1 :b!1<cr>\nmap ,2 :b!2<cr>\nmap ,3 :b!3<cr>\nmap ,4 :b!4<cr>\nmap ,5 :b!5<cr>\nmap ,6 :b!6<cr>\nmap ,7 :b!7<cr>\nmap ,8 :b!8<cr>\nmap ,9 :b!9<cr>\nmap ,0 :b!10<cr>\nmap ,x :bn!<cr>\nmap ,z :bp!<cr>\nmap ,w :bw!<cr>\n" > /home/bbolroc/.vimrc
