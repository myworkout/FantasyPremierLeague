import SwiftUI
import FantasyPremierLeagueKit

struct ContentView: View {
    var viewModelStoreOwner: SharedViewModelStoreOwner<PlayerListViewModel>

    init(viewModelStoreOwner: SharedViewModelStoreOwner<PlayerListViewModel> = SharedViewModelStoreOwner<PlayerListViewModel>()) {
        self.viewModelStoreOwner = viewModelStoreOwner
    }

    var body: some View {
        TabView {
            PlayerListView()
                .tabItem { Label("Players", systemImage: "person") }
            FixtureListView()
                .tabItem { Label("Fixtues", systemImage: "clock") }
            LeagueListView()
                .tabItem { Label("League", systemImage: "list.number") }
        }
    }
}
