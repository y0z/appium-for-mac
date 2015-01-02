/*
 (PFObserver *)observerWithName:(NSString *)name; // DEPRECATED
 (PFObserver *)observerWithPath:(NSString *)fullPath;
 (PFObserver *)observerWithURL:(NSURL *)url;
 (PFObserver *)observerWithBundleIdentifier:(NSString *)bundleIdentifier;
 (PFObserver *)observerWithPid:(pid_t)pid;
 (PFObserver *)observerWithName:(NSString *)name notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;; // DEPRECATED
 (PFObserver *)observerWithPath:(NSString *)fullPath notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerWithURL:(NSURL *)url notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerWithBundleIdentifier:(NSString *)bundleIdentifier notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (PFObserver *)observerWithPid:(pid_t)pid notificationDelegate:(id)callbackDelegate callbackSelector:(SEL)callback;
 (NSArray *)observersForPath:(NSString *)fullPath;
 (NSArray *)observersForURL:(NSURL *)url;
 (NSArray *)observersForBundleIdentifier:(NSString *)bundleIdentifier;
 (NSArray *)observersForPid:(pid_t)pid;
 (void)removeObserversForPath:(NSString *)fullPath;
 (void)removeObserversForURL:(NSURL *)url;
 (void)removeObserversForBundleIdentifier:(NSString *)bundleIdentifier;
 (void)removeObserversForPid:(pid_t)pid;