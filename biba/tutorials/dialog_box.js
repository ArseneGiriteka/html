document.addEventListener("DOMContentLoaded" , function(event){
  // Get the modal
  var modal = document.getElementById("myModal");

  // Get the button that opens the modal
  var btn = document.getElementById("myBtn");

  // Get the <span> element that closes the modal
  var span = document.getElementsByClassName("close")[0];

  // When the user clicks the button, open the modal
  btn.addEventListener("click" , function(){
    modal.style.display = "block";
  });

  // When the user clicks on <span> (x), close the modal
  span.addEventListener("click" , function(){
    modal.style.display = "none";
  });

  // When the user clicks anywhere outside of the modal, close it
  span.addEventListener("click" , function(){
    if (event.target == modal) {
      modal.style.display = "none";
    }
  });
});