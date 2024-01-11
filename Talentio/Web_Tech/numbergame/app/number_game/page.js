"use client";

import { useState } from "react";

export default function Home() {
  const [secretNumber, setSecretNumber] = useState(generateRandomNumber());
  const [currentGuess, setCurrentGuess] = useState("");
  const [previousGuesses, setPreviousGuesses] = useState([]);
  const [message, setMessage] = useState(
    "The Secrete Number will be between 1 and 100"
  );
  const [attempts, setAttempts] = useState(10);
  const [flag, setflag] = useState(false);
  const [HighLow, setHighLow] = useState("");
  const [NotInitial, setNotInitial] = useState(false);

  console.log(secretNumber);

  function generateRandomNumber() {
    return Math.floor(Math.random() * 100) + 1;
  }

  function handleInputChange(event) {
    setCurrentGuess(event.target.value);
  }

  function handleGuess() {
    const guess = parseInt(currentGuess);

    if (isNaN(guess) || guess < 1 || guess > 100) {
      setMessage("Please enter a valid number between 1 and 100.");
      return;
    }
    setCurrentGuess("");
    setNotInitial(true);
    setAttempts(attempts - 1);

    if (guess === secretNumber) {
      setMessage(`Congratulations! You guessed the number ${secretNumber}!`);
      setHighLow("");
      setflag(true);
    } else if (attempts === 0) {
      setMessage(`Game over. The secret number was ${secretNumber}.`);
      setflag(true);
    } else {
      setMessage(
        `Incorrect guess. ${attempts} ${
          attempts === 1 ? "attempt" : "attempts"
        } remaining.`
      );
      if (guess > secretNumber) {
        setHighLow("The Number should be Low");
      } else {
        setHighLow("The Number should be High");
      }
      setPreviousGuesses([...previousGuesses, guess]);
    }
  }

  function handleRestart() {
    setSecretNumber(generateRandomNumber());
    setCurrentGuess("");
    setPreviousGuesses([]);
    setMessage("");
    setAttempts(10);
    setNotInitial(false);
    setflag(false);
    setHighLow("");
  }

  return (
    <div className=" flex flex-col items-center justify-center bg-slate-950 text-white w-full min-h-screen">
      <h1 className="text-3xl py-2 italic my-2">Number Guessing Game</h1>
      <p className=" text-center">{message}</p>
      <p className="my-2 text-center">{HighLow}</p>
      <div className="">
        <input
          type="text"
          placeholder="Enter the Number"
          value={currentGuess}
          onChange={handleInputChange}
          disabled={flag}
          className="text-black"
        />
      </div>
      <div className="flex items-center justify-center gap-5 py-4">
        <button
          onClick={handleGuess}
          disabled={flag}
          className=" bg-slate-300 text-black rounded-lg w-16"
        >
          Guess
        </button>
        <button
          onClick={handleRestart}
          className=" bg-slate-300 text-black rounded-lg w-16"
        >
          Restart
        </button>
      </div>
      {NotInitial && (
        <div className=" text-blue-200 font-bold flex flex-col items-center justify-start py-2">
          <h2>Previous Guesses</h2>
          <ul className="flex gap-2">
            {previousGuesses.map((guess, index) => (
              <li key={index}>{guess}</li>
            ))}
          </ul>
        </div>
      )}
    </div>
  );
}
