long double AddThisToTotalTime(long double TotalTime, long double ThisTime)
    {
        TotalTime = (ThisTime + TotalTime);
        return TotalTime;
    }

    long double InstTypSpdFor10Letters(long double Seconds)
    {
        return ((3600 * 10) / Seconds);
    }

    long double MilliSecsToSecs(long double Time)
    {
        return (Time / 1000);
    }

    long double InstTypSpdForNLetters(long double Seconds, int NoOfLetters)
    {
        return ((3600 * NoOfLetters) / Seconds);
    }

    long double OverAllAverageSpeed(long double AverageSpeed, long double InstSpeed)
    {

        AverageSpeed = (InstSpeed + AverageSpeed) / 2;
        return AverageSpeed;
    }

    long double TimeDifference(long double Time1, long double Time2)
    {

        return (Time2 - Time1);
    }