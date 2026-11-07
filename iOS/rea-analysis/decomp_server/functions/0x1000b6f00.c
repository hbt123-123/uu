// rea decompile_all
// name: FUN_1000b6f00
// address: 0x1000b6f00
// body: available
// range: 0x1000b6f00-0x1000b70f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b6f00(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong self;
  ID IVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
    uVar5 = *(ulong *)(param_1 + 0x10);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if ((long)uVar5 < 0) {
        uVar6 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    _swift_bridgeObjectRetain(uVar5);
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b70e0);
            (*pcVar2)();
          }
          self = *(ID *)(uVar5 + uVar7 * 8 + 0x20);
        }
        else {
          self = uVar7;
          FUN_10016a00c(uVar7,uVar5);
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000b70dc);
          (*pcVar2)();
        }
        IVar3 = self;
        FUN_1000b6da8();
        if (*(char *)(IVar3 + 0x50) == '\x01') {
          puVar4 = &DAT_100a77208;
          if (DAT_100a73b50 != -1) {
            _swift_once(&DAT_100a73b50,FUN_1000c5570);
            puVar4 = &DAT_100a77208;
          }
        }
        else {
          puVar4 = &DAT_100a77200;
          if (DAT_100a73b48 != -1) {
            _swift_once(&DAT_100a73b48,FUN_1000c554c);
            puVar4 = &DAT_100a77200;
          }
        }
        uVar8 = *puVar4;
        _swift_release();
        _objc_msgSend(self,"setLevel:",uVar8);
        _objc_msgSend(self,"setSharingType:",0);
        _objc_msgSend(self,"orderFrontRegardless");
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar6);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease(uVar5);
  }
  return;
}

