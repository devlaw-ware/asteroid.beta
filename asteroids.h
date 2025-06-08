{
  "workbench.colorTheme": "Cybertech",

  "workbench.colorCustomizations": {
    "editor.background": "#f4efe7",          // fundo claro pastel bege
    "editor.foreground": "#3E3232",          // texto geral marrom escuro
    "editor.selectionBackground": "#d7c9b6",// seleção bege claro
    "editorLineNumber.foreground": "#a89984",// números das linhas marrom claro
    "sideBar.background": "#e9e2d0",         // barra lateral bege pastel
    "sideBar.foreground": "#5a4d41",         // texto da barra lateral marrom suave
    "activityBar.background": "#d9cbbf",     // barra de atividade bege médio
    "activityBar.foreground": "#5a4d41",     // texto da barra de atividade marrom suave
    "titleBar.activeBackground": "#d9cbbf",  // barra de título bege médio
    "titleBar.activeForeground": "#5a4d41",  // texto da barra de título marrom suave
    "panel.background": "#e9e2d0",            // fundo do painel bege pastel
    "panel.border": "#b9a88c"                 // borda do painel marrom claro
  },

  "editor.tokenColorCustomizations": {
    "[Cybertech]": {
      "textMateRules": [
        {
          "scope": "source",
          "settings": {
            "foreground": "#3E3232"             // cor do texto geral marrom escuro
          }
        },
        {
          "scope": "entity.name.function, support.function, meta.function-call",
          "settings": {
            "foreground": "#D9E2A8"             // cor das funções verde pastel suave
          }
        },
        {
          "scope": "keyword",
          "settings": {
            "foreground": "#b08b6a"             // palavras-chave marrom claro
          }
        },
        {
          "scope": "string",
          "settings": {
            "foreground": "#d6b89b"             // strings bege amarronzado
          }
        },
        {
          "scope": "variable",
          "settings": {
            "foreground": "#7a6f64"             // variáveis marrom acinzentado
          }
        },
        {
          "scope": "constant.numeric",
          "settings": {
            "foreground": "#b48a72"             // números marrom suave
          }
        },
        {
          "scope": "comment",
          "settings": {
            "foreground": "#a89984",            // comentários marrom pastel
            "fontStyle": "italic"
          }
        },
        {
          "scope": "type",
          "settings": {
            "foreground": "#a17c6b"             // tipos marrom médio
          }
        }
      ]
    }
  },

  "editor.semanticTokenColorCustomizations": {
    "[Cybertech]": {
      "enabled": true,
      "rules": {
        "variable": "#7a6f64",
        "parameter": "#7a6f64",
        "property": "#7a6f64",
        "variable.readonly": "#7a6f64",
        "type": "#a17c6b"
      }
    }
  }
}
