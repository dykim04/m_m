/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   byte_padding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:24:59 by marvin            #+#    #+#             */
/*   Updated: 2023/06/20 03:32:23 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

struct Example {
	char a;   			 // 1 byte
	char padding[3];	 // 3 bytes padding
	int b;   			 // 4 byte
	int c;   			 // 4 byte
	char q;				 // 1byte
	char padding2[3];	 // 3 bytes padding
	int d;   			 // 4 byte
};

#include <stdio.h>
int main()
{
	printf("%ld", sizeof(struct Example));
}