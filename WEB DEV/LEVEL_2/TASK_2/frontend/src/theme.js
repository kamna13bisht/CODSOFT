import { grey } from '@mui/material/colors';

export const themeColors = (mode) => ({
    palette: {
        mode,
        ...(mode === 'light'
            ? {
                // palette values for light mode
                primary: {
                    main: "#74C365", // Mantis green
                    white: "#fff"
                },
                secondary: {
                    main: "#115740", // Evergreen
                    midNightBlue: "#115740", // Evergreen
                },
            }
            : {
                // palette values for dark mode
                primary: {
                    main: "#115740", // Evergreen
                    white: "#115740" // Evergreen
                },
                secondary: {
                    main: "#74C365", // Mantis green
                    midNightBlue: "#115740", // Evergreen
                },
                background: {
                    default: "#1e1e1e",
                },
                text: {
                    primary: '#fff',
                    secondary: grey[500],
                },
            }),
    },
});
