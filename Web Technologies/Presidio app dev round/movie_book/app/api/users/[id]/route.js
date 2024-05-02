import User from "@/models/user";
import { connectToDB } from "@/utils/database";

export const PUT = async (request, { params }) => {
    try {
        const id = params.id;
        await connectToDB();
        console.log(id);
        const { cash: amt } = await request.json();
        const user = await User.findOne({ _id: id });
        user.cash = amt;
        await user.save();

        return new Response(JSON.stringify(user), { status: 200 });
    } catch (error) {
        console.error('Error updating user:', error);
        return new Response("Failed to update user", { status: 500 });
    }
};
  