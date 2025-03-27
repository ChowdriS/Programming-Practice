import * as React from "react";

export type MenuItemProps = {
  text: string;
  isActive: boolean;
};

export function MenuItem({ text, isActive }: MenuItemProps) {
  return (
    <div className="gap-2.5 self-stretch px-6 py-4 my-auto text-white rounded-2xl min-h-[49px] w-[195px] max-md:px-5">
      {text}
      {isActive && (
        <div className="flex absolute bottom-0 left-0 z-0 shrink-0 self-start rounded-2xl shadow-2xl bg-zinc-800 h-[49px] w-[195px]" />
      )}
    </div>
  );
}