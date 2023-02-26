int* climbingLeaderboard(int ranked_count, int* ranked, int player_count, int* player, int* result_count) {
    
    int *result = malloc(sizeof(*result) * player_count);
    *(result_count) = player_count;

    int j=0;
    int lastNumber = 0;
    int position = 1;
    
    for(int i=player_count-1; i >= 0; i--)
    {
        while(((ranked[j] > player[i]) && (j < ranked_count)))
        {
            if(lastNumber != ranked[j])
            {
                lastNumber = ranked[j];
                position++;
            }
            j++;

        }

        result[i] = position;

    }
    
    return result;

}
