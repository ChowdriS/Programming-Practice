import * as React from "react";
import { MenuItemProps, MenuItem } from "./MenuItem";
import { AboutSection } from "./AboutSection";

export function Mine() {
  const menuItems: MenuItemProps[] = [
    { text: "About Me", isActive: false },
    { text: "Experiences", isActive: true },
    { text: "Recommended", isActive: false },
  ];

  return (
    <main className="flex flex-col w-full h-full max-md:mt-10 max-md:max-w-full">
      <section className="flex flex-col pt-4 pr-14 pb-7 pl-3 w-full rounded-2xl bg-zinc-700 shadow-[6px_6px_4px_rgba(0,0,0,0.4)] max-md:pr-5 max-md:max-w-full">
        <nav className="flex flex-wrap gap-4">
          <img
            loading="lazy"
            src="https://cdn.builder.io/api/v1/image/assets/TEMP/6dcf2367b9b3e465e60e65048a034123a24faa31cf31a89df97cd4aacd2a2621?placeholderIfAbsent=true&apiKey=f1a1265c6de7428facec2572223d8098"
            className="object-contain shrink-0 self-start w-6 aspect-square"
            alt="Logo"
          />
          <div className="flex shrink-0 max-w-full rounded-3xl bg-neutral-900 h-[62px] w-[614px]">
            <div className="flex z-10 flex-col justify-center self-center px-2.5 py-2 -mt-2 ml-3.5 max-w-full text-lg font-medium leading-none text-center text-gray-400 rounded-3xl bg-neutral-900 w-[614px]">
              <div className="flex relative gap-1.5 items-center max-md:max-w-full">
                {menuItems.map(item => (
                  <MenuItem key={item.text} {...item} />
                ))}
              </div>
            </div>
          </div>
        </nav>
        <AboutSection />
      </section>
    </main>
  );
}