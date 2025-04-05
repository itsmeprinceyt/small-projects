import Card from '@/components/Card.js';
export default function Home() {
  return (
    <>
      <div className="
      
      rounded-md bg-gradient-to-r from-slate-900 to-slate-700 
      shadow-md
      
      
      sticky 
      top-[100px] 
      m-auto 
      grid grid-cols-4 justify-center items-center gap-[20px] p-5 
      max-[1331px]:grid-cols-4 w-[800px] 
      max-[1330px]:grid-cols-3 w-[550px] 
      max-[980px]:grid-cols-2 w-[340px] 
      max-[690px]:grid-cols-1 w-[100px]
      
      ">
        <Card name="Bump"
          image="/static/images/sofi.jpeg"
          color="bg-pink-300"
          url="https://sofi.gg/bump"
        />
        <Card name="Sofi"
          image="/static/images/sofi.jpeg"
          color="bg-pink-300"
          url="https://top.gg/bot/853629533855809596/vote"
        />
        <Card name="Karuta"
          image="/static/images/karuta.png"
          color="bg-orange-300"
          url="https://top.gg/bot/646937666251915264/vote"
        />
        <Card name="Coins"
          image="/static/images/bot-discord-image.png"
          color="bg-blue-300"
          url="https://bot-hosting.net/panel/earn"
        />
      </div>
    </>
  );
}
