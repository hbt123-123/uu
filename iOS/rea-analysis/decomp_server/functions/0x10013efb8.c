// rea decompile_all
// name: FUN_10013efb8
// address: 0x10013efb8
// body: available
// range: 0x10013efb8-0x10013f1af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013efb8(char *param_1,long param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,code *param_8)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
    lVar4 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      FUN_1001436f8(*(undefined4 *)(*(long *)(param_3 + 0x10) + 0x14),3);
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 != 0) {
      param_2 = param_2 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
      _swift_unknownObjectWeakLoadStrong();
      if (param_2 != 0) {
        FUN_100167028(*(undefined4 *)(*(long *)(param_3 + 0x10) + 0x14),3);
        _swift_unknownObjectRelease(param_2);
      }
    }
  }
  else if (cVar1 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 != 0) {
      FUN_1001437c0(param_3,5);
    }
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_2 != 0) {
      uVar2 = (uint)(param_5 >> 0x20);
      uVar6 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar6 == 0) {
          uVar5 = param_5 >> 0x30 & 0xff;
        }
        else {
          iVar7 = (int)((ulong)param_4 >> 0x20);
          if (SBORROW4(iVar7,(int)param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10013f1b0);
            (*pcVar3)();
          }
          uVar5 = (ulong)(iVar7 - (int)param_4);
        }
      }
      else if (uVar6 == 2) {
        uVar5 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10013f158);
          (*pcVar3)();
        }
      }
      else {
        uVar5 = 0;
      }
      FUN_10013f1b0(*(undefined4 *)(*(long *)(param_3 + 0x10) + 0x14),uVar5,param_6,param_7);
    }
  }
  (*param_8)();
  return;
}

