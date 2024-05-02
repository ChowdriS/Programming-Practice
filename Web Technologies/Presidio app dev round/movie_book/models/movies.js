import { Schema, model, models } from 'mongoose';

const MovieSchema = new Schema({
  title: {
    type: String,
    required: [true, 'Title is required!'],
  },
  description: {
    type: String,
    required: [true, 'Description is required!'],
  },
  bookedTickets:{
    type:String,
    required: [true, 'Description is required!']
  }
});

const Movie = models.Movie || model("Movie", MovieSchema);

export default Movie;
