// rea decompile_all
// name: FUN_10011b624
// address: 0x10011b624
// body: available
// range: 0x10011b624-0x10011b7b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10011b624(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_90 [16];
  undefined *local_80;
  undefined8 uStack_78;
  undefined auStack_68 [8];
  undefined8 local_60;
  
  lVar2 = 0;
  _CGEventCreateKeyboardEvent(0,0,1);
  if (lVar2 == 0) {
    lVar7 = lVar2;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)(lVar7);
    local_80 = param_1;
    uStack_78 = param_2;
    FUN_1003fb4ec(thunk_FUN_10011cdcc,auStack_90,0xd000000000000092,0x8000000100882970,
                  0xd000000000000016,0x800000010088d3b0,0x2cf,0);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    puVar3 = param_1;
    __sSS9UTF16ViewV5countSivg(param_1,param_2);
    puVar4 = param_1;
    __sSS9UTF16ViewV5countSivg(param_1,param_2);
    if (puVar4 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(param_2);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      puVar5 = puVar4;
      FUN_10011b4f4();
      _swift_bridgeObjectRetain(param_2);
      puVar6 = auStack_68;
      FUN_10011b350(puVar6,puVar5 + 0x20,puVar4,param_1,param_2);
      _swift_bridgeObjectRelease(local_60);
      if (puVar6 != puVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10011b7b4);
        (*pcVar1)();
      }
      _swift_bridgeObjectRelease(param_2);
    }
    _CGEventKeyboardSetUnicodeString(lVar2,puVar3,puVar5 + 0x20);
    _swift_release(puVar5);
    _CGEventPost(0,lVar2);
  }
  return lVar2 != 0;
}

