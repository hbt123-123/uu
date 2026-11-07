// rea decompile_all
// name: FUN_100083978
// address: 0x100083978
// body: available
// range: 0x100083978-0x100083a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100083a18 to 0x1000c2b04 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100083978(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      FUN_100001428(unaff_x20 + 0x58);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa0));
    if (*(long *)(unaff_x20 + 0xc0) != 0) {
      FUN_100001428(unaff_x20 + 0xa8);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  }
  _swift_deallocObject();
  return;
}

