"use client";

import Link from "next/link";
import { signIn, signOut, useSession, getProviders } from "next-auth/react";
import { useEffect, useState } from "react";
import { usePathname } from "next/navigation";

const Nav = () => {
  const { data: session } = useSession();
  const [providers, setProviders] = useState(null);

  const username = session?.user.name;

  useEffect(() => {
    (async () => {
      const res = await getProviders();
      setProviders(res);
    })();
  }, []);

  return (
    <nav className="py-4 px-6 bg-gray-900 mx-2">
      <h1 className="font-extrabold">Movie Booking</h1>
      <div>
        {session?.user ? (
          <div>
            <Link href='/book'>
              Book
            </Link><br></br>
            <h1>User Name: {username}</h1><br></br>
            <button onClick={signOut} className='ml-4'>Sign Out</button>
          </div>
        ) : (
          <div>
            {providers && Object.values(providers).map((provider) => (
              <button
                key={provider.name}
                onClick={() => signIn(provider.id)}
                className='ml-4'
              >
                Sign in
              </button>
            ))}
          </div>
        )}
      </div>
    </nav>
  );
};

export default Nav;
