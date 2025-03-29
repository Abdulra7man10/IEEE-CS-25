
for (let i=1; i<=100; i++) {
  let myMainElement = document.createElement("div");
  let myHeader = document.createElement("h2");
  let myParagraph = document.createElement("p");

  let myHeaderText = document.createTextNode(`Product Title ${i}`);
  let myParagraphText = document.createTextNode("Product Description");

  myHeader.appendChild(myHeaderText);
  myMainElement.appendChild(myHeader);

  myParagraph.appendChild(myParagraphText);
  myMainElement.appendChild(myParagraph);

  myMainElement.className = "product";
  document.body.appendChild(myMainElement);
}