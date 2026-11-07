// rea decompile_all
// name: FUN_1007bf110
// address: 0x1007bf110
// body: available
// range: 0x1007bf110-0x1007bf1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1007bf110(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined *puVar2;
  
  FUN_1007c1dd0();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(long *)(param_1 + 0x20) = unaff_x20;
  puVar2 = *(undefined **)(unaff_x20 + _TtC6Sentry13SentryMXFrame::subFrames);
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
    _swift_bridgeObjectRetain(puVar2);
    FUN_1007be3fc();
    _swift_bridgeObjectRelease(puVar2);
  }
  FUN_1007c18ac(puVar1);
  return param_1;
}

