#include "UI/mainwindow.h"
#include <QApplication>
#include <QDebug>

#include "Database/database.h"
#include "WebCrawler/electivesystem.h"

#include "Control/control.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //ElectiveSystem *electiveSystem = new ElectiveSystem;

    //Database db;

    /*double totalPeople = 0;
    double lastPeople = 0;
    int year = 105;
    int semester = 1;


    QJsonObject course;
    course["teacher"] = QStringLiteral("林永崇");
    course["courseName"] = QStringLiteral("批判思考");

    for(int i=0;i<1;i++){
        QJsonObject course_now;
        course_now["year"] = QString::number(year);
        course_now["semester"] = QString::number(semester);
        course_now["teacher"] = course["teacher"].toString();
        course_now["courseName"] = course["courseName"].toString();
        QList<QJsonObject> courseOldList = db.getCourseCourseSearch(course_now);
        qDebug() << "courseOldList size" << courseOldList.size();
        foreach (QJsonObject course_old, courseOldList) {
            totalPeople+=course_old["defaultNumberOfPeople"].toString().toDouble();
            lastPeople+=course_old["lastNumberOfPeople"].toString().toDouble();
        }

        semester--;
        if(semester == 0){
            semester = 2;
            year--;
        }
    }
    qDebug() << totalPeople << lastPeople << lastPeople/totalPeople << course["courseName"].toString() << course["teacher"].toString();*/

    return a.exec();
}
