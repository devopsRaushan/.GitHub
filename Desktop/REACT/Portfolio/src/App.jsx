// import ShoppingList from './pages/ShoppingList';
import ShoppingList from './ShoppingList';

const data = [
  {id: 1, item: "milk", quantity: 2, completed: false},
  {id: 2, item: "eggs", quantity: 24, completed: true},
  {id: 3, item: "chicken breasts", quantity: 4, completed: false},
  {id: 4, item: "carrots", quantity: 3, completed: true}
];

function App() {  
  return (
    <>
      <h1 className='bg-red-500 text-5xl'>munna bhai</h1>
      <ShoppingList items={data}/>
    </>
  )
}

export default App
