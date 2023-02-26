def queensAttack(n, k, r_q, c_q, obstacles):
    # initializing the matrix to store the state of each square
    chessboard = [[1 for i in range(n)] for j in range(n)]

    # marking the queen's position and setting the state of that square to 0
    chessboard[r_q-1][c_q-1] = 0

    # initializing the number of attackable squares
    num_attackable_squares = 0

    # looping through the 8 directions that the queen can attack
    for r_d, c_d in [(1, 0), (-1, 0), (0, 1), (0, -1), (1, 1), (-1, -1), (1, -1), (-1, 1)]:
        # calculating the initial position of the queen in this direction
        r, c = r_q-r_d, c_q-c_d

        # checking if the initial position is inside the chessboard
        while 0 <= r < n and 0 <= c < n:
            # if there is an obstacle in this direction, break the loop
            if [r+1, c+1] in obstacles:
                break

            # if the square is attackable, increment the number of attackable squares
            if chessboard[r][c] == 1:
                num_attackable_squares += 1

            # updating the position of the queen in this direction
            r, c = r+r_d, c+c_d

    # returning the number of attackable squares
    return num_attackable_squares


print(queensAttack(4, 0, 4, 4, []))
