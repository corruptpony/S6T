namespace DP_Opdracht2_Push
{
    public interface iPushSubject
    {
        void Attach(iPushObserver observer);
        void Detach(iPushObserver observer);
        void Notify();
    }
}
