// rea decompile_all
// name: FUN_1002c7520
// address: 0x1002c7520
// body: available
// range: 0x1002c7520-0x1002c75cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002c7520(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC9Alamofire7Request::id;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  FUN_100091734(unaff_x20 + _TtC9Alamofire7Request::delegate);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::mutableState));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::validators));
  return;
}

