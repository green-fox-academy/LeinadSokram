#include <iostream>
#include "BlogPost.h"

int main() {

    BlogPost firstPost;
    firstPost.setAuthorName("John Doe");
    firstPost.setTitle("Lorem Ipsum");
    firstPost.setText("Lorem ipsum dolor sit amet.");
    firstPost.setPublicationDate("2000.05.04.");

    BlogPost secondPost;
    secondPost.setAuthorName("Tim Urban");
    secondPost.setTitle("Wait but why");
    secondPost.setText("A popular long-form, stick-figure-illustrated blog about almost everything.");
    secondPost.setPublicationDate("2010.10.10.");

    BlogPost thirdPost;
    thirdPost.setAuthorName("William Turton");
    thirdPost.setTitle("One Engineer Is Trying to Get IBM to Reckon With Trump");
    thirdPost.setText("Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.");
    thirdPost.setPublicationDate("2017.03.28.");

    std::cout << thirdPost.getTitle() << "\nby " << thirdPost.getAuthorName() << "\nPosted on " << thirdPost.getPublicationDate() << std::endl;
    std::cout << thirdPost.getText() << std::endl;

    return 0;
}