best_model = population[9]
# Assuming 'best_model' is the best model obtained from the genetic algorithm

# Making predictions using the best model
predictions = best_model.predict(test_images)

# Plotting sample images along with their predicted labels
plt.figure(figsize=(10, 8))
for i in range(10):  # Displaying 10 sample images
    plt.subplot(2, 5, i + 1)
    plt.imshow(test_images[i].reshape(28, 28), cmap='gray')
    predicted_label = np.argmax(predictions[i])
    true_label = np.argmax(test_labels[i])
    plt.title(f"Pred: {predicted_label}, True: {true_label}")
    plt.axis('off')
plt.tight_layout()
plt.show()