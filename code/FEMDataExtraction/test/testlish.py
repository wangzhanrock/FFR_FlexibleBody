with open('testRead.txt') as input_data:
    # Skips text before the beginning of the interesting block:
    for line in input_data:
        if line.strip() == 'Start':  # Or whatever test is needed
            break
    # Reads text until the end of the block:
    for line in input_data:  # This keeps reading the file
        if line.strip() == 'End':
            break
        print line  # Line is extracted (or block_of_lines.append(line), etc.)