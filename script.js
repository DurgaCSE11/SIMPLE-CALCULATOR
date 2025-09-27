document.addEventListener("DOMContentLoaded", () => {
  const display = document.getElementById("display");

  window.appendValue = function(value) {
    if (display.value === "0" && value !== ".") {
      display.value = value;
    } else {
      display.value += value;
    }
  }

  window.clearDisplay = function() {
    display.value = "";
  }

  window.calculateResult = function() {
    try {
      // Replace symbols for JS eval
      let input = display.value.replace(/÷/g, '/').replace(/×/g, '*').replace(/%/g, '/100');
      display.value = eval(input);
    } catch (error) {
      display.value = "Error";
    }
  }
});
