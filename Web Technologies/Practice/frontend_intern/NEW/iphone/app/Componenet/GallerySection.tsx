import * as React from "react";

export function GallerySection() {
  return (
    <section className="flex overflow-hidden flex-col grow shrink-0 py-px basis-0 w-fit max-md:max-w-full">
      <div className="w-full max-md:max-w-full">
        <div className="flex gap-5 max-md:flex-col">
          <div className="flex flex-col w-[33%] max-md:ml-0 max-md:w-full">
            <div className="self-stretch px-10 py-4 my-auto w-full text-xl font-medium text-white whitespace-nowrap rounded-3xl bg-neutral-900 max-md:px-5 max-md:mt-10">
              Gallery
            </div>
          </div>
          <div className="flex flex-col ml-5 w-[67%] max-md:ml-0 max-md:w-full">
            <div className="flex gap-5 justify-between w-full text-xs font-extrabold leading-none text-center text-white uppercase max-md:mt-10">
              <div className="flex gap-1 px-7 py-4 my-auto bg-white bg-opacity-0 rounded-[104px] shadow-[0px_0px_7px_rgba(255,255,255,0.25)] max-md:px-5" role="button" tabIndex={0}>
                <img loading="lazy" src="https://cdn.builder.io/api/v1/image/assets/TEMP/7e7efb6190fa2342c01586d5a7e0d44ab52ae8fd2d1beeae71670768905ff351?placeholderIfAbsent=true&apiKey=f1a1265c6de7428facec2572223d8098" className="object-contain shrink-0 w-3 aspect-square" alt="Add Image" />
                <span className="my-auto">Add Image</span>
              </div>
              <img loading="lazy" src="https://cdn.builder.io/api/v1/image/assets/TEMP/74aadd54e9a529ff68b71460d74fc5d98fa2f43ad94789b05810f6fbd32b5846?placeholderIfAbsent=true&apiKey=f1a1265c6de7428facec2572223d8098" className="object-contain shrink-0 max-w-full aspect-[0.89] w-[102px]" alt="Gallery Image" />
            </div>
          </div>
        </div>
      </div>
      <div className="mt-3 mr-5 max-md:mr-2.5 max-md:max-w-full">
        <div className="flex gap-5 max-md:flex-col">
          <div className="flex flex-col w-[33%] max-md:ml-0 max-md:w-full">
            <img loading="lazy" src="https://cdn.builder.io/api/v1/image/assets/TEMP/9ed1b354b38a4bf52cc5a4beab8265449982351f87c824931294a60fc01ccc65?placeholderIfAbsent=true&apiKey=f1a1265c6de7428facec2572223d8098" className="object-contain grow shrink-0 max-w-full rounded-3xl aspect-[1.06] w-[190px] max-md:mt-6" alt="Gallery Image" />
          </div>
          <div className="flex flex-col ml-5 w-[33%] max-md:ml-0 max-md:w-full">
            <img loading="lazy" src="https://cdn.builder.io/api/v1/image/assets/TEMP/9ed1b354b38a4bf52cc5a4beab8265449982351f87c824931294a60fc01ccc65?placeholderIfAbsent=true&apiKey=f1a1265c6de7428facec2572223d8098" className="object-contain grow shrink-0 max-w-full rounded-3xl aspect-[1.06] w-[190px] max-md:mt-6" alt="Gallery Image" />
          </div>
          <div className="flex flex-col ml-5 w-[33%] max-md:ml-0 max-md:w-full">
            <img loading="lazy" src="https://cdn.builder.io/api/v1/image/assets/TEMP/9ed1b354b38a4bf52cc5a4beab8265449982351f87c824931294a60fc01ccc65?placeholderIfAbsent=true&apiKey=f1a1265c6de7428facec2572223d8098" className="object-contain grow shrink-0 max-w-full rounded-3xl aspect-[1.06] w-[190px] max-md:mt-5" alt="Gallery Image" />
          </div>
        </div>
      </div>
    </section>
  );
}