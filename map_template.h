#include <iostream>

using namespace std;

template<typename ID, typename data>
class map_template
{
private:
  struct node
  {
    node *next;
    ID id;
    data val;
    
    node()
    {
      next=NULL;
    }

    ~node(){}
  };

  node* head;

public:
  void copy(const map_template& x)
  {
    head=NULL;
    node* n = x.head;
    while(n)
    {
      Add(n->id,n->val);
      n=n->next;
    }
  }

  void del()
  {
    node *s = head, *i = NULL;
    if(s)
    {
      i = s->next;
      while(s)
      {
        delete s;
        s=i;
        if(i)
          i=i->next;
      }
    }
  }

  map_template()
  {
    head=NULL;
  }

  map_template(const map_template& x)
  {
    copy(x);
  }

  ~map_template()
  {
    del();
  }  

  void Add(ID Nid, data Nval)
  {
    node* New = new node;
    New->next = head;
    head = New;
    New->id = Nid;
    New->val = Nval;
  }

  data* Find(ID Nid)
  {
    node *s = head;
    
    while(s)
    {
        if(s->id==Nid)
            return &(s->val);
        s=s->next;
    }
    return NULL;
  }

  map_template& operator=(const map_template& x) 
  {
    del();
    copy(x);
    return *this;
  }

  friend ostream& operator << (ostream& o, const map_template& map)
  {
    node* s=map.head;
    o << "Database:" << endl;
    
    while(s)
    {
      o << "ID: " << s->id << endl;
      o << s->val;
      o << "--------------------------" << endl;
      s=s->next;
    }
    return o;
  };
};

