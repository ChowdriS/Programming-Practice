import Link from 'next/link'

export default function Home() {
  return (
    <div className='flex flex-col items-center justify-center min-h-screen text-lg bg-black text-white'>
      CLICK
      <Link href="/number_game">For Number Game</Link>
      <Link href="/building_block">For Block Game</Link>
    </div>
  )
}
