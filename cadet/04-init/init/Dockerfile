FROM debian

RUN apt-get update && apt-get install -y \
	dnsutils \
	iptables \
	nano \
	cron \
	net-tools \
	traceroute \
	procps \
	openssh-client \
	openssh-server

ADD ./scripts /data/scripts
ADD ./network /data/network
ADD ./system /data/system
