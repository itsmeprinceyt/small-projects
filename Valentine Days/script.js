var currentParagraph = 1;

function showNextContent() {
    var paragraphs = document.querySelectorAll('.container p');
    var nextButton = document.getElementById('nextButton');

    // Toggle the visibility of the current and next paragraphs
    if (currentParagraph < paragraphs.length) {
        paragraphs[currentParagraph - 1].style.display = 'none';
        paragraphs[currentParagraph].style.display = 'block';
        currentParagraph++;

        if (currentParagraph === paragraphs.length) {
            nextButton.innerHTML = 'Start over!';
        }
    } else {
        // If at the last paragraph, toggle back to the first paragraph
        for (var i = 0; i < paragraphs.length; i++) {
            paragraphs[i].style.display = 'none';
        }
        paragraphs[0].style.display = 'block';
        currentParagraph = 1;
        nextButton.innerHTML = 'Next';
    }
}
