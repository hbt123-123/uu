// rea decompile_all
// name: FUN_100041108
// address: 0x100041108
// body: available
// range: 0x100041108-0x1000412af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100041108(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined8 local_70;
  undefined4 *local_68;
  
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar7 + 0x40));
  uVar8 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    lVar3 = param_2;
    local_70 = param_1;
    local_68 = (undefined4 *)param_2;
    _swift_bridgeObjectRetain(param_2);
    __s10Foundation12CharacterSetV11whitespacesACvgZ(uVar8);
    FUN_10003da50();
    uVar4 = uVar8;
    puVar6 = PTR___sSSN_1000f02f8;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar8,PTR___sSSN_1000f02f8,lVar3);
    (**(code **)(lVar7 + 8))(uVar8,lVar2);
    _swift_bridgeObjectRelease(puVar6);
    uVar8 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) goto LAB_100041284;
    _swift_bridgeObjectRelease(param_2);
  }
  local_70 = 0;
  local_68 = (undefined4 *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1d);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0xd00000000000001b;
  local_68 = (undefined4 *)0x80000001000c6b00;
  __sSS6appendyySSF(param_3,param_4);
  puVar5 = local_68;
  FUN_100022760(0x68,local_70,local_68,DAT_100105680);
  _swift_bridgeObjectRelease();
  FUN_1000607a4();
  uVar1 = *puVar5;
  FUN_10002c948();
  _swift_allocError(&DAT_1000f78f0,puVar5,0,0);
  *puVar5 = uVar1;
  _swift_willThrow();
LAB_100041284:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  return auVar9;
}

