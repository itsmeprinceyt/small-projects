import Image from "next/image";
import ShinyButton from '@/components/ShinyButton.jsx';
export default function Card({image, name, color,url}){
    return(
        <>
            <div className="bg-slate-900 rounded-md flex flex-col justify-center items-center w-[150px] h-[220px] gap-4 py-3 px-3">
                <Image className="rounded-full" src={image} height={150} width={150}></Image>
                <ShinyButton title={name} url={url}/>
            </div>
        </>
    );
}