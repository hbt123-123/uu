// rea decompile_all
// name: FUN_100079fd4
// address: 0x100079fd4
// body: available
// range: 0x100079fd4-0x10007a2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007a090 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010007a2a0) */

void FUN_100079fd4(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                  code *param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar2 = DAT_100a73b18;
  if (*(long *)(param_5 + 0xb8) == param_4) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar1 != 0) && ((param_3 & 1) == 0)) {
      _swift_retain(param_8);
      _swift_retain(param_6);
      uVar3 = param_1;
      uVar6 = param_2;
      FUN_1000498c8();
      local_70 = uVar3;
      _swift_bridgeObjectRetain();
      FUN_100046bcc(&local_70);
      _swift_bridgeObjectRelease();
      uVar1 = local_70;
      if (*(long *)(local_70 + 0x10) != 0) {
        FUN_100051fd8();
        uVar4 = uVar3;
        FUN_100075194();
        uVar7 = *(undefined8 *)(uVar4 + 0x10);
        _swift_bridgeObjectRelease();
        puVar5 = &DAT_1009985d0;
        _swift_allocObject(&DAT_1009985d0,0x18,7);
        _swift_weakInit(puVar5 + 0x10,param_5);
        _swift_retain(param_8);
        _swift_retain(param_6);
        _swift_retain(puVar5);
        _swift_retain(uVar1);
        _swift_bridgeObjectRetain(param_2);
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar6);
        FUN_100079b04(uVar1,0,uVar7,PTR___swiftEmptyArrayStorage_100995ea0,
                      PTR___swiftEmptyArrayStorage_100995ea0,param_4,param_5,puVar5,param_4,uVar1,
                      param_1,param_2,uVar3,uVar6,param_6,param_7,param_8);
        _swift_release(puVar5);
        _swift_release_n(uVar1,2);
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease_n(uVar6,2);
        _swift_bridgeObjectRelease_n(uVar3,2);
        _swift_release_n(param_6,2);
        _swift_release_n(param_8,2);
        return;
      }
      _swift_release(local_70);
      if (DAT_100a73b18 != -1) {
        _swift_once(&DAT_100a73b18,FUN_100041de4);
      }
      uStack_68 = DAT_100b36078;
      local_70 = DAT_100b36070;
      if ((*(byte *)(param_6 + 0x10) & 1) == 0) {
        *(undefined1 *)(param_6 + 0x10) = 1;
        (**(code **)(param_6 + 0x18))(&local_70);
      }
      (*param_7)();
      _swift_release(param_8);
      goto LAB_10007a074;
    }
  }
  _swift_retain(param_8);
  if (lVar2 != -1) {
    _swift_once(&DAT_100a73b18,FUN_100041de4);
  }
  uStack_68 = DAT_100b36078;
  local_70 = DAT_100b36070;
  if ((*(byte *)(param_6 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_6 + 0x10) = 1;
    (**(code **)(param_6 + 0x18))(&local_70);
  }
  (*param_7)();
  param_6 = param_8;
LAB_10007a074:
  _swift_release(param_6);
  return;
}

