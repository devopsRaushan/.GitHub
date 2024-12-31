function ShoppingList({items}){
    return(
        <>
            <ul>
                {items.map((i) => (
                    <li
                    key={i.id}
                    className="mx-2 px-2 bg-green-400 text-red">
                        {i.item} - {i.quantity}
                    </li>
                ))}
            </ul>
        </>
    );
}

export default ShoppingList;