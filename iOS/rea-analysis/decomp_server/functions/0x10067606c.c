// rea decompile_all
// name: FUN_10067606c
// address: 0x10067606c
// body: available
// range: 0x10067606c-0x100676267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067606c(long param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 uVar6;
  
  uVar3 = 0x40;
  _swift_slowAlloc(0x40,0x3f);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  if ((((0 < param_3) && (0 < (long)param_4)) && (0 < (long)param_5)) && (0 < (long)param_6)) {
    if ((param_4 < 2) || ((param_4 + 0x7fffffffffffffff & param_4) != 0)) {
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease();
      uVar6 = 2;
    }
    else {
      uVar1 = 0;
      if (param_5 != 0) {
        uVar1 = 0xffffffffffffff / param_5;
      }
      if (uVar1 < param_4) {
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRelease();
        uVar6 = 0;
      }
      else {
        uVar1 = 0;
        if (param_6 != 0) {
          uVar1 = 0xffffffffffffff / param_6;
        }
        if (uVar1 < param_5) {
          _swift_bridgeObjectRelease(param_1);
          _swift_bridgeObjectRelease();
          uVar6 = 1;
        }
        else {
          if (*(long *)(param_2 + 0x10) != 0) {
            *(ulong *)(unaff_x20 + 0x20) = param_5 << 7;
            *(ulong *)(unaff_x20 + 0x38) = param_4;
            *(ulong *)(unaff_x20 + 0x40) = param_5;
            *(ulong *)(unaff_x20 + 0x48) = param_6;
            lVar4 = 0;
            FUN_1006790a4();
            lVar5 = lVar4;
            _swift_allocObject();
            uVar3 = *(undefined8 *)(param_1 + 0x10);
            *(long *)(lVar5 + 0x10) = param_1;
            *(undefined8 *)(lVar5 + 0x18) = uVar3;
            _swift_bridgeObjectRetain(param_1);
            _mlock(param_1 + 0x20,uVar3);
            _swift_bridgeObjectRelease(param_1);
            *(long *)(unaff_x20 + 0x18) = lVar5;
            _swift_allocObject(lVar4,0x20,7);
            uVar3 = *(undefined8 *)(param_2 + 0x10);
            *(undefined1 **)(lVar4 + 0x10) = param_2;
            *(undefined8 *)(lVar4 + 0x18) = uVar3;
            _swift_bridgeObjectRetain(param_2);
            _mlock(param_2 + 0x20,uVar3);
            _swift_bridgeObjectRelease(param_2);
            *(long *)(unaff_x20 + 0x10) = lVar4;
            *(long *)(unaff_x20 + 0x30) = param_3;
            return;
          }
          _swift_bridgeObjectRelease(param_1);
          _swift_bridgeObjectRelease();
          uVar6 = 3;
        }
      }
    }
    FUN_100676268();
    _swift_allocError(&DAT_1009e5a08,param_2,0,0);
    *param_2 = uVar6;
    _swift_willThrow();
    _swift_deallocPartialClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100676268);
  (*pcVar2)();
}

