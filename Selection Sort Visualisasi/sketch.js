let values = new Array(300);
let maxBarLength;
let barWidth;
let t0;

function setup() {
  createCanvas(windowWidth, windowHeight);
  maxBarLength = height - 10;
  barWidth = width / values.length;
  t0 = performance.now();
  for(let i = 0; i < values.length; i++) {
    values[i] = random(maxBarLength);
  }
}

let isSorted = false;
let comparisons = 0;
let i = 0;

function draw() {
  frameRate(10);
  background(50);
  noStroke();
  frameRate(60);

  if (i < values.length - 1) {
    for(let j = i + 1; j < values.length; j++) {
      if(values[i] > values[j]) {
        let temp = values[i];
        values[i] = values[j];
        values[j] = temp;
      }
    }
  } else {
      let time = round(performance.now() - t0) / 1000;
      print("finished");
      print(`Sorted ${values.length} elements in approximately        ${time} seconds.`);
      isSorted = true;
      noLoop();
  }
  i++;
  displayBars();
}

function displayBars() {
  for(let k = 0; k < values.length; k++) {
    if(isSorted)
      fill(255, 0, 0);
    else
      fill(200);
    rect(k * barWidth, height - values[k], barWidth, values[k]);
  }
  fill(0, 255, 0);
}