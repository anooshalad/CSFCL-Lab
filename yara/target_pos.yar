rule Target_POS_Suspicious
{
    meta:
        description = "Academic detection rule for simulated POS malware"
        case = "Target 2013 forensic demonstration"

    strings:
        $track = "SIMULATED_TRACK_DATA"
        $collect = "Collecting card data from POS memory"
        $http = "POST /upload HTTP/1.1"

    condition:
        2 of them
}
