function main(input) {
    const inp = input.split(' ')  
    
    if (inp[0] >= 10 || inp[1] >= 10) {
      console.log(-1)
    } else {
      console.log(inp[0] * inp[1])
    }
  }
  main(require('fs').readFileSync('/dev/stdin', 'utf8'));