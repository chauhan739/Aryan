const demo = document.querySelector('.demo');

document.querySelector('.js-start-button').addEventListener("click", () => {
  const svg = document.querySelector("svg");

  if(svg.classList.contains('game-on')) {
    svg.classList.remove("game-on");

    demo.innerHTML = demo.innerHTML;

    setTimeout(() => {
      document.querySelector("svg").classList.add("game-on");
    }, 200);
  } else {
    svg.classList.add("game-on");
  }
});
