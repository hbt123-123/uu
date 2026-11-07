// rea decompile_all
// name: FUN_10014a5b8
// address: 0x10014a5b8
// body: available
// range: 0x10014a5b8-0x10014a75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014a5b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar2 = param_1[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *param_1;
    FUN_100008184(uVar3,uVar2);
    FUN_10014a8c4(uVar3,uVar2);
    FUN_100006cc8(uVar3,uVar2);
  }
  else {
    param_2 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    lVar1 = _TtC14UURemoteServer16ClipboardHandler::ref;
    if (param_2 != 0) {
      _swift_beginAccess(param_2 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_58,0,0);
      uVar2 = param_2 + lVar1;
      _swift_unknownObjectWeakLoadStrong();
      if ((uVar2 == 0) || (FUN_10000b338(), (uVar2 & 1) == 0)) {
        FUN_100401b14(0);
        FUN_1003fb45c(FUN_1001bcb20,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                      0x80000001008927f0,0x80,7);
        _swift_unknownObjectRelease(param_2);
        FUN_100152230();
        FUN_100151730();
      }
      else {
        FUN_100401b14(0);
        FUN_1003fb45c(FUN_1001bcaf4,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                      0x80000001008927f0,0x7d,7);
        _swift_unknownObjectRelease(param_2);
      }
    }
  }
  return;
}

