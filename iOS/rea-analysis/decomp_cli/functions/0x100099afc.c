// rea decompile_all
// name: FUN_100099afc
// address: 0x100099afc
// body: available
// range: 0x100099afc-0x100099c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099afc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_130 [72];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  lVar6 = param_1[2];
  lVar5 = *unaff_x20;
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar3 = lVar1;
    uVar4 = uVar2;
    FUN_10008109c(lVar1,uVar2,lVar6);
    if ((uVar4 & 1) != 0) {
      FUN_100083828(*(long *)(lVar5 + 0x38) + lVar3 * 0x48,&local_e8);
      _swift_bridgeObjectRelease(lVar5);
      uStack_78 = uStack_c0;
      local_80 = local_c8;
      local_68 = uStack_b0;
      uStack_70 = local_b8;
      local_60 = local_a8;
      uStack_98 = uStack_e0;
      local_a0 = local_e8;
      uStack_88 = uStack_d0;
      uStack_90 = local_d8;
      FUN_100083828(param_1,&local_e8);
      _swift_bridgeObjectRetain(local_68);
      FUN_100080a28();
      FUN_100083828(&local_e8,auStack_130);
      _swift_bridgeObjectRetain(uStack_e0);
      _swift_bridgeObjectRetain(local_d8);
      FUN_1000996b4(auStack_130,local_e8,uStack_e0,local_d8);
      FUN_100065194(&local_e8);
      FUN_100065194(&local_a0);
      return;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  FUN_100083828(param_1,&local_a0);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(lVar6);
  FUN_1000996b4(&local_a0,lVar1,uVar2,lVar6);
  return;
}

