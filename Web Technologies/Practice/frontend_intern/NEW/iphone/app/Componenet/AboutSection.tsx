import * as React from "react";

export function AboutSection() {
  return (
    <section className="flex flex-wrap gap-4 mt-9 w-full max-md:mr-1 max-md:max-w-full">
      <div className="flex flex-wrap gap-px items-start self-start mt-8 rounded-sm">
        <span className="flex shrink-0 rounded-sm bg-neutral-600 h-[9px] w-[9px]" />
        <span className="flex shrink-0 rounded-sm bg-neutral-600 h-[9px] w-[9px]" />
        <span className="flex shrink-0 rounded-sm bg-neutral-600 h-[9px] w-[9px]" />
        <span className="flex shrink-0 rounded-sm bg-neutral-600 h-[9px] w-[9px]" />
        <span className="flex grow shrink h-2.5 rounded-sm bg-neutral-600 w-[7px]" />
        <span className="flex grow shrink h-2.5 rounded-sm bg-neutral-600 w-[7px]" />
      </div>
      <article className="flex-auto text-xl text-neutral-400 w-[606px] max-md:max-w-full">
        <p>
          Hello! I’m Dave, your sales rep here from Salesforce. I’ve been working at this awesome company for 3 years now. <br /><br />
          I was born and raised in Albany, NY &amp; have been living in Santa Carla for the past 10 years my wife Tiffany and my 4 year old twin daughters- Emma and Ella. Both of them are just starting school, so my calendar is usually blocked between 9-10 AM. This is a...
        </p>
      </article>
    </section>
  );
}