# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    people.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmolina <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/23 16:38:22 by nmolina           #+#    #+#              #
#    Updated: 2017/10/24 10:30:27 by nmolina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ldapsearch -Q "uid=z*" | grep "cn:" | sort -rf
