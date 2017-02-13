// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

package com.duowan.QUAN;

public final class PostContentReq extends com.duowan.taf.jce.JceStruct implements java.lang.Cloneable
{
    public String className()
    {
        return "QUAN.PostContentReq";
    }

    public String fullClassName()
    {
        return "com.duowan.QUAN.PostContentReq";
    }

    public com.duowan.QUAN.UserId tUserId = null;

    public long lSId = 0;

    public long lFirstId = 0;

    public String sContent = "";

    public com.duowan.QUAN.UserId getTUserId()
    {
        return tUserId;
    }

    public void  setTUserId(com.duowan.QUAN.UserId tUserId)
    {
        this.tUserId = tUserId;
    }

    public long getLSId()
    {
        return lSId;
    }

    public void  setLSId(long lSId)
    {
        this.lSId = lSId;
    }

    public long getLFirstId()
    {
        return lFirstId;
    }

    public void  setLFirstId(long lFirstId)
    {
        this.lFirstId = lFirstId;
    }

    public String getSContent()
    {
        return sContent;
    }

    public void  setSContent(String sContent)
    {
        this.sContent = sContent;
    }

    public PostContentReq()
    {
        setTUserId(tUserId);
        setLSId(lSId);
        setLFirstId(lFirstId);
        setSContent(sContent);
    }

    public PostContentReq(com.duowan.QUAN.UserId tUserId, long lSId, long lFirstId, String sContent)
    {
        setTUserId(tUserId);
        setLSId(lSId);
        setLFirstId(lFirstId);
        setSContent(sContent);
    }

    public boolean equals(Object o)
    {
        if(o == null)
        {
            return false;
        }

        PostContentReq t = (PostContentReq) o;
        return (
            com.duowan.taf.jce.JceUtil.equals(tUserId, t.tUserId) && 
            com.duowan.taf.jce.JceUtil.equals(lSId, t.lSId) && 
            com.duowan.taf.jce.JceUtil.equals(lFirstId, t.lFirstId) && 
            com.duowan.taf.jce.JceUtil.equals(sContent, t.sContent) );
    }

    public int hashCode()
    {
        try
        {
            throw new Exception("Need define key first!");
        }
        catch(Exception ex)
        {
            ex.printStackTrace();
        }
        return 0;
    }
    public java.lang.Object clone()
    {
        java.lang.Object o = null;
        try
        {
            o = super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return o;
    }

    public void writeTo(com.duowan.taf.jce.JceOutputStream _os)
    {
        if (null != tUserId)
        {
            _os.write(tUserId, 0);
        }
        _os.write(lSId, 1);
        _os.write(lFirstId, 2);
        if (null != sContent)
        {
            _os.write(sContent, 3);
        }
    }

    static com.duowan.QUAN.UserId cache_tUserId;

    public void readFrom(com.duowan.taf.jce.JceInputStream _is)
    {
        if(null == cache_tUserId)
        {
            cache_tUserId = new com.duowan.QUAN.UserId();
        }
        setTUserId((com.duowan.QUAN.UserId) _is.read(cache_tUserId, 0, false));

        setLSId((long) _is.read(lSId, 1, false));

        setLFirstId((long) _is.read(lFirstId, 2, false));

        setSContent( _is.readString(3, false));

    }

    public void display(java.lang.StringBuilder _os, int _level)
    {
        com.duowan.taf.jce.JceDisplayer _ds = new com.duowan.taf.jce.JceDisplayer(_os, _level);
        _ds.display(tUserId, "tUserId");
        _ds.display(lSId, "lSId");
        _ds.display(lFirstId, "lFirstId");
        _ds.display(sContent, "sContent");
    }

}
