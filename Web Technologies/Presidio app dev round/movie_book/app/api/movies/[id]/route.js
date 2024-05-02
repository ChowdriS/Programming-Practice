import Movie from "@/models/movies";
import { connectToDB } from "@/utils/database";

export const GET = async (req, { params }) => {
    try {
        const id = params.id;
        // console.log(id);
        await connectToDB()

        const movie = await Movie.findOne({_id: id})
        // console.log(movie);
        if (!movie) return new Response("Movie Not Found", { status: 404 });

        return new Response(JSON.stringify(movie), { status: 200 })

    } catch (error) {
        return new Response("Error", { status: 500 });
    }
}






export const PUT = async (request,{params}) => {
    try {
        const id = params.id;
        // console.log(id);
        await connectToDB();
        // const { newTitle: title, newDescription: description } = await request.json();
        const { movieId, selectedSeats } = await request.json();
        // console.log(movieId);
        // console.log(selectedSeats);
        const movie = await Movie.findOne({_id: id});
        movie.bookedTickets = selectedSeats;
        await movie.save();
        return new Response(JSON.stringify(movie), { status: 200 });
    } catch (error) {
        console.error('Error updating movie:', error);
        return new Response("Failed to update movie", { status: 500 });
    }
};