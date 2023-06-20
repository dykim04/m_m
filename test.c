/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dong-kim <dong-kim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:50:36 by marvin            #+#    #+#             */
/*   Updated: 2023/06/20 20:13:38 by dong-kim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdint.h>

int main()
{
    clock_t start_time, end_time;
    double time_taken;
    // start_time = clock();  // Capture the starting time
    // Your code or program execution

    for (int i = 0; i < 100; i++) {
        start_time = clock();
        char c = 'Z';
        printf("%c\n", c);
        end_time = clock();
        time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;  // Calculate the time taken in seconds
        printf("Time taken: %f seconds\n", time_taken);

        start_time = clock();
        int byte[8];
        int i = 7;
        while (i >= 0)
        {
            byte[i] = (c >> i) & 1;
            printf("%d\n", byte[i]);
            i--;
        }
        int res = 0;
        while (i < 8)
        {
            res += byte[i];
            i++;
        }
        end_time = clock();  // Capture the ending time
        time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;  // Calculate the time taken in seconds
        printf("Time taken: %f seconds\n", time_taken);
    }
    return (0);
}
