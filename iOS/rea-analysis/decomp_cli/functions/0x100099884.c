// rea decompile_all
// name: FUN_100099884
// address: 0x100099884
// body: available
// range: 0x100099884-0x100099afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099884(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,code *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 local_150;
  undefined8 local_148;
  code *local_140;
  undefined8 local_138;
  long lStack_130;
  undefined8 local_128;
  long lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined *puStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar1 = 0;
  local_150 = param_4;
  local_148 = param_7;
  local_140 = param_6;
  __sSqMa(0,param_8);
  uVar6 = (long)&local_150 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_8 + -8);
  lVar1 = uVar6 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  local_80 = unaff_x20[4];
  FUN_1000997ac(&local_138,param_1,param_2,param_3);
  if (lStack_130 == 0) {
    local_c0 = param_8;
    FUN_100060d88(&uStack_d8);
    (**(code **)(lVar5 + 0x10))();
    puVar2 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100097700();
    local_b0 = 1;
    local_f0 = param_1;
    lStack_e8 = param_2;
    local_e0 = param_3;
    local_b8 = puVar2;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    uStack_c8 = uStack_110;
    local_d0 = local_118;
    local_b8 = puStack_100;
    local_c0 = local_108;
    local_b0 = local_f8;
    lStack_e8 = lStack_130;
    local_f0 = local_138;
    uStack_d8 = lStack_120;
    local_e0 = local_128;
  }
  FUN_1000866dc(&uStack_d8,&local_138);
  puVar2 = &DAT_100104198;
  FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
  uVar3 = uVar6;
  _swift_dynamicCast(uVar6,&local_138,puVar2,param_8,6);
  if ((uVar3 & 1) == 0) {
    (**(code **)(lVar5 + 0x38))(uVar6,1,1,param_8);
    pcVar4 = *(code **)(lVar5 + 0x10);
  }
  else {
    (**(code **)(lVar5 + 0x38))(uVar6,0,1,param_8);
    pcVar4 = *(code **)(lVar5 + 0x20);
    param_5 = uVar6;
  }
  (*pcVar4)(lVar1,param_5,param_8);
  (*local_140)(lVar1);
  lStack_120 = param_8;
  FUN_100060d88(&local_138);
  (**(code **)(lVar5 + 0x10))();
  FUN_10008f168(&local_138,&uStack_d8);
  _swift_bridgeObjectRetain(local_150);
  FUN_100080a28();
  FUN_100099afc(&local_f0);
  (**(code **)(lVar5 + 8))(lVar1,param_8);
  FUN_100065194(&local_f0);
  return;
}

