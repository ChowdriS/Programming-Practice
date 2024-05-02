import Movie from "@/models/movies";
import User from "@/models/user";
import { connectToDB } from "@/utils/database";

export const GET = async (request) => {
    try {
        await connectToDB()
        // console.log("in")
        const user = await User.find({});
        // console.log(user)
        return new Response(JSON.stringify(user), { status: 200 })
    } catch (error) {
        return new Response("Failed to fetch all users", { status: 500 })
    }
}



