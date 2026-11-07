// rea decompile_all
// name: FUN_10027446c
// address: 0x10027446c
// body: available
// range: 0x10027446c-0x10027453f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10027446c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    FUN_1000094a4(uVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x18),
                  *(undefined8 *)(param_2 + 0x20));
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + _TtC4Moya8Response::response);
      lVar3 = *(long *)(param_2 + _TtC4Moya8Response::response);
      if (lVar2 == 0 || lVar3 == 0) {
        return (uint)(lVar2 == 0 && lVar3 == 0);
      }
      FUN_10004003c(0,&DAT_100a819d8,&PTR__OBJC_CLASS___NSHTTPURLResponse_100a658d0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(lVar2,lVar3);
      return (uint)lVar2 & 1;
    }
  }
  return 0;
}

