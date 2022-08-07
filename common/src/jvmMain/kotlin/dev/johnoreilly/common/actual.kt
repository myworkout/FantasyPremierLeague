package dev.johnoreilly.common

import com.russhwolf.settings.ExperimentalSettingsApi
import com.russhwolf.settings.JvmPreferencesSettings
import com.russhwolf.settings.ObservableSettings
import io.ktor.client.engine.java.*
import org.koin.dsl.module
import java.util.prefs.Preferences


@OptIn(ExperimentalSettingsApi::class)
actual fun platformModule() = module {
    single { Java.create() }
    single<ObservableSettings> { JvmPreferencesSettings(Preferences.userRoot()) }
}

