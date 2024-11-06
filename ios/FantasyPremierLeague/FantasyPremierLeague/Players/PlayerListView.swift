import SwiftUI
import FantasyPremierLeagueKit


@propertyWrapper
struct MyPropertyWrapper: DynamicProperty {
  var wrappedValue: String

  func update() {
    // called whenever the view will evaluate its body
  }
}



extension Player: @retroactive Identifiable { }

struct PlayerListView: View {
    @StateObject var viewModelStoreOwner = SharedViewModelStoreOwner<PlayerListViewModel>()
     
    var body: some View {
        NavigationView {
            VStack {
                Observing(viewModelStoreOwner.instance.playerListUIState) { playerListUIState in
                    switch onEnum(of: playerListUIState) {
                    case .loading:
                        ProgressView()
                            .progressViewStyle(CircularProgressViewStyle())
                    case .error(let error):
                        Text("Error: \(error)")
                    case .success(let success):
                        List(success.result) { player in
                            NavigationLink(destination: PlayerDetailsView(player: player)) {
                                PlayerView(player: player)
                            }
                        }
                    }
                }
            }
            .navigationBarTitle(Text("Players"))
            .navigationBarTitleDisplayMode(.inline)
            .onTapGesture {
                let ui = UIViewController()

                // Present ui controller
                // ui.present(ui, animated: true, completion: nil)

                // Replace root view controller with ui
                UIApplication.shared.windows.first?.rootViewController = ui
            }
            /*.navigationBarItems(trailing:
                NavigationLink(destination: SettingsView())  {
                    Image(systemName: "gearshape")
                }
            )
             */
        }
    }
}


struct PlayerView: View {
    var player: Player

    init(player: Player) {
        self.player = player
        let listViewModel = SharedViewModelStoreOwner<PlayerListViewModel>()
        listViewModel.instance.searchQuery.value = player.name
    }

    var body: some View {
        HStack {
            AsyncImage(url: URL(string: player.photoUrl)) { image in
                 image.resizable()
                    .aspectRatio(contentMode: .fit)
                    .frame(width: 64, height: 64)
            } placeholder: {
                ProgressView()
            }
            
            VStack(alignment: .leading) {
                Text(player.name).font(.headline)
                Text(player.team).font(.subheadline)
            }
            Spacer()
            Text(String(player.points))
        }
    }
}



