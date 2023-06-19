/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:50:36 by marvin            #+#    #+#             */
/*   Updated: 2023/06/20 03:46:20 by marvin           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdint.h>

int main()
{
    clock_t start_time, end_time;
    double time_taken;
    start_time = clock();  // Capture the starting time
    // Your code or program execution
    char c = 'Z';
    printf("%c\n", c);
    // int byte[8];
    // int i = 7;
    // while (i >= 0)
    // {
    //     byte[i] = (c >> i) & 1;
    //     printf("%d\n", byte[i]);
    //     i--;
    // }
    // while (i < 8)
    // {
    //     int res;
    //     res += byte[i];
    //     i++;
    // }
    end_time = clock();  // Capture the ending time
    time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;  // Calculate the time taken in seconds
    printf("Time taken: %f seconds\n", time_taken);
    return (0);
}
