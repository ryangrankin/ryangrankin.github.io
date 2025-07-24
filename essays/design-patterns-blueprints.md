---
layout: essay
type: essay
title: "Design Patterns As Blueprints"
# All dates must be YYYY-MM-DD format!
date: 2025-07-23
published: true
labels:
  - Engineering
  - Design Patterns
---


So what are design patterns? In the real world, if you are building a house, you don't begin by trying to reinvent how doors or staircases work, rather, you use blueprints. Blueprints are tried and true designs and layouts built on the history of successful architects. These blueprints aren’t the final product, but rather they guide the structure and function of the final product. 

In software engineering, design patterns are the equivalent of architectural blueprints. Design patterns are proven solutions to recurring problems in software design. Design patterns don’t provide finished code, but they offer a template and way of thinking that developers can adapt to fit their unique project and design. 

I have only recently learned what the meaning of design patterns are. I initially saw design patterns as just words in readings and interview prep guides. As I have familiarized myself with software engineering, and began working on collaborative projects- I began to realize when design patterns are needed, even when I didn’t realize that those were “design patterns”. 



##  How I realized Design Patterns Could be Useful 

When I was working on my Digits application for ICS314, I found myself copying and pasting the same Prisma and Bootstrap form across different components such as the AddContactForm, EditContactForm, and AddNote form files.  Coding without design patterns was repetitive and unnecessary. After some research with ChatGPT, I have realized that what would have been useful was the singleton pattern. This would have helped me avoid multiple instances of the client, which could affect the usefulness of the app in dev mode. In order to avoid this using the singleton pattern, I should have included a shared instance of the client.

## Design Patterns Retrospectively

Though I initially realized that design patterns could have been used in the Digits project, As I have researched I found that they also could have proven useful in front end projects such at the Island Snow and Kohana Rum projects. The Decorator pattern could have helped me wrap objects or components without changing the logic. Had I Used this pattern, I could have more successfully separated the styling logic from the information and made my components better.


## How I Plan to use Design Patterns in the Future

After realizing the usefulnessness of design patterns, I realized I should familiarize myself with different design patterns. I have learned about the Factory Pattern, the Decorator Pattern, the Observer Pattern, and the Singleton Pattern. In my group's final project, we plan to design an application in which people can create and join group events with other UH students in their area. For the part I have begun designing a live event feed, where people can create and join events, I plan to use the observer patterns. Using react this will allow me to code events to update automatically in real time, without having to manually refresh the browser. 


## Blueprints: In Conclusion

The power behind Design Patterns comes from learning the “blueprints” for different patterns. Since researching design patterns, I have come to learn the usefulness of them, and see where they might be useful in my past and future code. Though I am at the beginning of my journey with this piece of software engineering, I plan to apply myself and learn everything about these design patterns, what they do, how to use them, and where is ideal to implement them. While looking back I wish I had been more knowledgeable earlier, undoubtedly, knowing design patterns will prove useful to me and others in future software development endeavors.

