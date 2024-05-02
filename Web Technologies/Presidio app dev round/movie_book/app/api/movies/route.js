import Movie from "@/models/movies";
import { connectToDB } from "@/utils/database";


export const GET = async (request) => {
    try {
        await connectToDB()
        // console.log("in")
        const movie = await Movie.find({});
        // console.log(movie)
        // console.log(movie)
        return new Response(JSON.stringify(movie), { status: 200 })
    } catch (error) {
        return new Response("Failed to fetch all movies", { status: 500 })
    }
}

export const POST = async (request) => {
    const { title, description, bookedTickets } = await request.json();
try {
    await connectToDB(); 
    console.log(bookedTickets);
    const newMovie = new Movie({ title, description, bookedTickets });
    await newMovie.save(); 
    return new Response(JSON.stringify(newMovie), { status: 201 });
} catch (error) {
    return new Response("Failed to create a new movie", { status: 500 }); 
}

}





