package snippet;

public class Snippet {
	Whitelabel Error Page
	This application has no explicit mapping for /error, so you are seeing this as a fallback.
	
	Mon Apr 15 11:58:49 IST 2024
	There was an unexpected error (type=Internal Server Error, status=500).
	Error resolving template [index], template might not exist or might not be accessible by any of the configured Template Resolvers
	org.thymeleaf.exceptions.TemplateInputException: Error resolving template [index], template might not exist or might not be accessible by any of the configured Template Resolvers
		at org.thymeleaf.engine.TemplateManager.resolveTemplate(TemplateManager.java:869)
		at org.thymeleaf.engine.TemplateManager.parseAndProcess(TemplateManager.java:607)
		at org.thymeleaf.TemplateEngine.process(TemplateEngine.java:1103)
		at org.thymeleaf.TemplateEngine.process(TemplateEngine.java:1077)
		at org.thymeleaf.spring6.view.ThymeleafView.renderFragment(ThymeleafView.java:372)
		at org.thymeleaf.spring6.view.ThymeleafView.render(ThymeleafView.java:192)
		at org.springframework.web.servlet.DispatcherServlet.render(DispatcherServlet.java:1431)
		at org.springframework.web.servlet.DispatcherServlet.processDispatchResult(DispatcherServlet.java:1167)
		at org.springframework.web.servlet.DispatcherServlet.doDispatch(DispatcherServlet.java:1106)
		at org.springframework.web.servlet.DispatcherServlet.doService(DispatcherServlet.java:979)
		at org.springframework.web.servlet.FrameworkServlet.processRequest(FrameworkServlet.java:1014)
		at org.springframework.web.servlet.FrameworkServlet.doGet(FrameworkServlet.java:903)
		at jakarta.servlet.http.HttpServlet.service(HttpServlet.java:564)
		at org.springframework.web.servlet.FrameworkServlet.service(FrameworkServlet.java:885)
		at jakarta.servlet.http.HttpServlet.service(HttpServlet.java:658)
		at org.apache.catalina.core.ApplicationFilterChain.internalDoFilter(ApplicationFilterChain.java:205)
		at org.apache.catalina.core.ApplicationFilterChain.doFilter(ApplicationFilterChain.java:149)
		at org.apache.tomcat.websocket.server.WsFilter.doFilter(WsFilter.java:51)
		at org.apache.catalina.core.ApplicationFilterChain.internalDoFilter(ApplicationFilterChain.java:174)
		at org.apache.catalina.core.ApplicationFilterChain.doFilter(ApplicationFilterChain.java:149)
		at org.springframework.web.filter.RequestContextFilter.doFilterInternal(RequestContextFilter.java:100)
		at org.springframework.web.filter.OncePerRequestFilter.doFilter(OncePerRequestFilter.java:116)
		at org.apache.catalina.core.ApplicationFilterChain.internalDoFilter(ApplicationFilterChain.java:174)
		at org.apache.catalina.core.ApplicationFilterChain.doFilter(ApplicationFilterChain.java:149)
		at org.springframework.web.filter.FormContentFilter.doFilterInternal(FormContentFilter.java:93)
}

