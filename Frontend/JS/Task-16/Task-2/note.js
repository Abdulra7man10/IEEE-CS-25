// Get elements from the DOM
const noteForm = document.getElementById('noteForm');
const titleInput = document.getElementById('titleInput');
const descriptionInput = document.getElementById('descriptionInput');
const notesList = document.getElementById('notesList');

// Load local storage
let notes = JSON.parse(localStorage.getItem('notes')) || [];

// display existing notes
function displayNotes() {
  notesList.innerHTML = '';
  
  notes.forEach((note, index) => {
    const noteCard = document.createElement('div');
    noteCard.classList.add('note-card');
    
    const noteTitle = document.createElement('h3');
    noteTitle.textContent = note.title;

    const noteDescription = document.createElement('p');
    noteDescription.textContent = note.description;

    const deleteButton = document.createElement('button');
    deleteButton.textContent = 'Delete';
    deleteButton.onclick = () => deleteNote(index);

    noteCard.appendChild(noteTitle);
    noteCard.appendChild(noteDescription);
    noteCard.appendChild(deleteButton);
    
    notesList.appendChild(noteCard);
  });
}

// add a new note
function addNote(e) {
  e.preventDefault();

  let title = titleInput.value.trim();
  let description = descriptionInput.value.trim();

  if (title === '' || description === '') {
    alert('Please fill in both title and description!');
    return;
  }

  // Trim excess white spaces
  title = title.replace(/\s+/g, ' ');
  description = description.replace(/\s+/g, ' ');

  const newNote = {
    title: title,
    description: description,
  };

  notes.push(newNote);

  localStorage.setItem('notes', JSON.stringify(notes));

  titleInput.value = '';
  descriptionInput.value = '';
  displayNotes();
}

// delete a note
function deleteNote(index) {
  notes.splice(index, 1);

  localStorage.setItem('notes', JSON.stringify(notes));
  displayNotes();
}

// event listener to add a note
noteForm.addEventListener('submit', addNote);

displayNotes();
