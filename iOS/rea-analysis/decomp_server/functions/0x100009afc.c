// rea decompile_all
// name: FUN_100009afc
// address: 0x100009afc
// body: available
// range: 0x100009afc-0x100009ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100009afc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ID self;
  ulong self_00;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_100009cd0();
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    self = 0;
  }
  else {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100009cd0);
        (*pcVar2)();
      }
      self = *(ID *)(param_1 + 0x20);
    }
    else {
      self = 0;
      FUN_100169de4(0,param_1);
    }
    if (uVar7 != 1) {
      uVar8 = 1;
      do {
        while( true ) {
          if ((param_1 & 0xc000000000000001) == 0) {
            if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100009c70);
              (*pcVar2)();
            }
            if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100009c74);
              (*pcVar2)();
            }
            self_00 = *(ID *)(param_1 + uVar8 * 8 + 0x20);
          }
          else {
            self_00 = uVar8;
            FUN_100169de4(uVar8,param_1);
          }
          uVar1 = uVar8 + 1;
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100009c64);
            (*pcVar2)();
          }
          IVar3 = _objc_msgSend(self,"pixelsWide");
          IVar4 = _objc_msgSend(self,"pixelsHigh");
          if (SUB168(SEXT816((long)IVar3) * SEXT816((long)IVar4),8) != (long)(IVar3 * IVar4) >> 0x3f
             ) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100009c68);
            (*pcVar2)();
          }
          IVar5 = _objc_msgSend(self_00,"pixelsWide");
          IVar6 = _objc_msgSend(self_00,"pixelsHigh");
          if (SUB168(SEXT816((long)IVar5) * SEXT816((long)IVar6),8) != (long)(IVar5 * IVar6) >> 0x3f
             ) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100009c6c);
            (*pcVar2)();
          }
          if ((long)(IVar3 * IVar4) < (long)(IVar5 * IVar6)) break;
          uVar8 = uVar8 + 1;
          if (uVar1 == uVar7) goto LAB_100009c54;
        }
        self = self_00;
        uVar8 = uVar1;
      } while (uVar1 != uVar7);
    }
LAB_100009c54:
    _swift_bridgeObjectRelease(param_1);
  }
  return self;
}

