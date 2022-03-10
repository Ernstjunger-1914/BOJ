def main():
  for _ in range(int(input())):
    c=g=0

    for i in range(int(input())):
      _c, _g=map(float, input().split())
      c+=_c
      g+=_c*_g

    print("%d %.1f"%(c, g/c))
  
if __name__=='__main__':
  main()