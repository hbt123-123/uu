// rea decompile_all
// name: FUN_10018a730
// address: 0x10018a730
// body: available
// range: 0x10018a730-0x10018a8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018a730(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ID self;
  uint uVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  ulong local_70;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  lVar2 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    _swift_unknownObjectRelease();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_80 = param_2;
    lStack_78 = param_3;
    local_70 = param_4;
    FUN_1003fb48c(thunk_FUN_10018b734,auStack_90,0xd0000000000000a2,0x8000000100893bb0,
                  &DAT_d000000000000018,0x8000000100898510,0x75,7);
    uVar1 = (uint)(param_4 >> 0x20);
    uVar3 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar3 == 0) {
        if ((param_4 & 0xff000000000000) != 0) {
LAB_10018a83c:
          self = *(ID *)(param_1 + 0x20);
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_4);
          _objc_msgSend(self,"setData:forType:",param_3,param_2);
          _swift_release(param_1);
          return;
        }
      }
      else if ((long)(int)param_3 != param_3 >> 0x20) goto LAB_10018a83c;
    }
    else if ((uVar3 == 2) && (*(long *)(param_3 + 0x10) != *(long *)(param_3 + 0x18)))
    goto LAB_10018a83c;
    _objc_msgSend(*(ID *)(param_1 + 0x20),"setData:forType:",0,param_2);
  }
  _swift_release(param_1);
  return;
}

