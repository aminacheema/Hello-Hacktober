/*Enter a special character: #
Output:
############
Hello World!
############
*/
let character = prompt("Enter a special character: ");
function word(character) {
  console.log(character.repeat(12) + "\n" + "Hello World!\n" + character.repeat(12));
}
word(character);
