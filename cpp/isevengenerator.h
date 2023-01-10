string IsEvenGenerator(int n) {
  string retStr = "bool IsEven(int n) {\n  if(n==0)return 0;\n";
  for (int i = 1; i <= n; i++) {
    retStr+="  else if(n==" + i + ")return " + (n%2==0) + ";\n";
  }
  retStr += "  return;\n}";
  return retStr;
}
