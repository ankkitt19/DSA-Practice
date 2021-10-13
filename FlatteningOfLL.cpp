Method 1:


Node *flatten(Node *root)
{
   vector<int>v;
   while(root!=NULL){
       v.push_back(root->data);
       Node* temp=root;
       temp=temp->bottom;
       while(temp!=NULL){
           v.push_back(temp->data);
           temp=temp->bottom;
       }
       root=root->next;
   }
  sort(v.begin(),v.end());
//   for(int i=0;i<v.size();i++){
//       cout<<v[i]<<" ";
//   }
int a=v[0];
   Node* ans=new Node(a);
   Node* ansp=ans;
   for(int i=1;i<v.size();i++){
       Node* d=new Node(v[i]);
       ansp->bottom=d;
       ansp=ansp->bottom;
       }
       return ans;
}

