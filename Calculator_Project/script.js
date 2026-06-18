function calculate(){
let num1=parseFloat(document.getElementById("num1").value);
let num2=parseFloat(document.getElementById("num2").value);
let op=document.getElementById("operator").value;
let result;
switch(op){
case '+': result=num1+num2; break;
case '-': result=num1-num2; break;
case '*': result=num1*num2; break;
case '/': result=num2!==0?num1/num2:"Cannot divide by zero"; break;
}
document.getElementById("result").innerHTML="Result: "+result;
}
