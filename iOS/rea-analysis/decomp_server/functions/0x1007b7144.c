// rea decompile_all
// name: _TtC6Sentry20SentryRRWebSpanEvent::initWithTimestamp:tag:payload:
// address: 0x1007b7144
// body: available
// range: 0x1007b7144-0x1007b71a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry20SentryRRWebSpanEvent::initWithTimestamp_tag_payload_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  code *pcVar1;
  
  __s10Foundation4DateVMa();
  __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(param_3);
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryRRWebSpanEvent",0x1b,"init(timestamp:tag:payload:)",0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b71a4);
  (*pcVar1)();
}

