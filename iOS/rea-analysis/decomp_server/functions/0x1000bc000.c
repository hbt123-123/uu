// rea decompile_all
// name: FUN_1000bc000
// address: 0x1000bc000
// body: available
// range: 0x1000bc000-0x1000bc21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000bc000(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID self;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_90,1,0);
    uVar6 = *(ulong *)(param_1 + 0x10);
    if (uVar6 >> 0x3e == 0) {
      uVar3 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar3 = uVar6 & 0xffffffffffffff8;
      if ((long)uVar6 < 0) {
        uVar3 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar3 != 0) {
      *(undefined2 *)(param_1 + 0x50) = 0;
      _swift_beginAccess(param_1 + 0x18,auStack_a8,1,0);
      puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = PTR___swiftEmptyArrayStorage_100995ea0;
      _swift_bridgeObjectRelease(uVar4);
      uVar6 = *(ulong *)(param_1 + 0x10);
      if (uVar6 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar6 & 0xffffffffffffff8;
        if ((long)uVar6 < 0) {
          uVar3 = uVar6;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      _swift_bridgeObjectRetain(uVar6);
      if (uVar3 != 0) {
        uVar7 = 0;
        do {
          if ((uVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000bc1ec);
              (*pcVar2)();
            }
            self = *(ID *)(uVar6 + uVar7 * 8 + 0x20);
          }
          else {
            self = uVar7;
            FUN_10016a00c(uVar7,uVar6);
          }
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000bc130);
            (*pcVar2)();
          }
          uVar8 = uVar7 + 1;
          _objc_msgSend(self,"close");
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar3);
      }
      _swift_bridgeObjectRelease(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar1;
      _swift_bridgeObjectRelease(uVar4);
      lVar5 = *(long *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      _swift_bridgeObjectRelease();
      FUN_1000b6da8();
      *(undefined1 *)(lVar5 + 0x50) = 0;
      FUN_1000c51e8();
      _swift_release(lVar5);
      FUN_1000b7360();
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000bc21c,0,0xd00000000000009f,0x8000000100882d60,0x292865646968,
                    0xe600000000000000,0x1dc,0);
    }
    _swift_release(param_1);
  }
  return;
}

