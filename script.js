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
    display.value = "0";   // Reset to 0 instead of blank
  }

  window.deleteChar = function() {
    display.value = display.value.slice(0, -1) || "0"; 
  }

  window.calculateResult = function() {
    try {
      // Replace symbols for JS eval
      let input = display.value
        .replace(/÷/g, '/')
        .replace(/×/g, '*')
        .replace(/%/g, '/100');

      display.value = eval(input);
    } catch (error) {
      display.value = "Error";
    }
  }
});
