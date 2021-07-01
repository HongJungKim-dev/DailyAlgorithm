def set_tuples(tuples, sorted_strings):
    for string in sorted_strings:
        for num_str in string:
            num = int(num_str)
            if num not in tuples:
                tuples.append(num)

def solution(tuple_set):
    tuples = []

    string_n_commas = tuple_set[2:-2].split("},{")

    strings = [string_n_comma.split(",") for string_n_comma in string_n_commas]

    sorted_strings = sorted(strings, key = lambda x : len(x))
                
    set_tuples(tuples, sorted_strings)
      
    return tuples
