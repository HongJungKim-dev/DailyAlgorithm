def solution(citations):
    citation_count = 0
    paper_num = 1

    citations.sort()

    while True:
      for citation in citations:
        if citation >= paper_num:
          citation_count += 1 
      if citation_count <= paper_num:
        break
      paper_num += 1
      citation_count = 0
      
    return citation_count
