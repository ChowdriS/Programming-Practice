"use client"

import { useState } from "react"

const Building_block = () => {
    const [position,setposition] = useState({top:0,left:0});
    const [score,setscore] = useState(0);

    function handleChange() {
        setscore(score+1);
        const pos = {
            top:Math.floor(Math.random()*window.innerHeight*(90/100)),
            left:Math.floor(Math.random()*window.innerWidth*(90/100))
        }
        setposition(pos);
    }

  return (
    <div >
    <h1>Score : {score}</h1>
    <div
    className=" absolute w-16 h-16 bg-red-500 text-black cursor-pointer select-none"
    style={{
        position: 'absolute',
        top:`${position.top}px`,
        left:`${position.left}px`
    }}
    onClick={handleChange}
    >
        Click Me!
    </div>
    </div>
  )
}

export default Building_block