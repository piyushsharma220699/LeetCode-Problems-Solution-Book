class Solution 
{
      public List<Integer> postorderTraversal(TreeNode root)
      {
        List<Integer> values = new ArrayList<>();
        return postorderTraversal(root, values);
      }

    public static List<Integer> postorderTraversal(TreeNode root, List<Integer> list) 
    {
        if (root == null)
            return list;
        postorderTraversal(root.left, list);
        postorderTraversal(root.right, list);
        list.add(root.val);
        return list;
    }
}
