let string ="";
let buttons = document.querySelectorAll('.button')
Array.from(button).forEach((button)=>{
button.addEventListener('click',(e)=>{
    if(e.target.innerHTmL =="="){
        string = eval(string);
        document.querySelector('input').value = string;
    }
    else{
console.log(e.target)
string = string + e.target.innerHTML;
document.querySelector('input').value = string;
    }
})

})