namespace DP_Opdracht2_Pull
{
    public interface iPullSubject
    {
        void Attach(iPullObserver observer);
        void Detach(iPullObserver observer);
        void Notify();
        int GetState();
    }
}
