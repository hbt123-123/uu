// rea decompile_all
// name: FUN_1000994bc
// address: 0x1000994bc
// body: available
// range: 0x1000994bc-0x1000996b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000994bc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long local_130;
  long local_128;
  long lStack_120;
  undefined8 local_118;
  long lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *puStack_f0;
  byte local_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  byte local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  iVar2 = (int)&local_130;
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_70 = unaff_x20[4];
  FUN_1000997ac(&local_128);
  if (lStack_120 == 0) {
    uVar4 = 0;
    __sSaMa(0,param_8);
    local_c8 = param_5;
    local_b0 = uVar4;
    _swift_bridgeObjectRetain(param_5);
    puVar3 = PTR___swiftEmptyArrayStorage_1000f0740;
    FUN_100097700();
    local_a0 = 1;
    local_e0 = param_1;
    lStack_d8 = param_2;
    local_d0 = param_3;
    local_a8 = puVar3;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    uStack_b8 = uStack_100;
    local_c0 = local_108;
    local_a8 = puStack_f0;
    local_b0 = local_f8;
    local_a0 = local_e8;
    lStack_d8 = lStack_120;
    local_e0 = local_128;
    local_c8 = lStack_110;
    local_d0 = local_118;
  }
  FUN_1000866dc(&local_c8,&local_128);
  if (lStack_110 == 0) {
    FUN_10001fc18(&local_128,&DAT_100104198,&DAT_1000d5180);
  }
  else {
    uVar4 = 0;
    __sSaMa(0,param_8);
    _swift_dynamicCast(&local_130,&local_128,PTR___sypN_1000f0728 + 8,uVar4,6);
    if (iVar2 != 0) goto joined_r0x000100099618;
  }
  local_130 = param_5;
  _swift_bridgeObjectRetain(param_5);
joined_r0x000100099618:
  if ((local_a0 & 1) != 0) {
    uVar4 = 0;
    __sSaMa(0,param_8);
    __sSa9removeAll15keepingCapacityySb_tF(0,uVar4);
    local_a0 = 0;
  }
  (*param_6)(&local_130);
  lVar1 = local_130;
  uVar4 = 0;
  __sSaMa(0,param_8);
  local_128 = lVar1;
  lStack_110 = uVar4;
  FUN_10008f168(&local_128,&local_c8);
  _swift_bridgeObjectRetain(param_4);
  FUN_100080a28();
  FUN_100099afc(&local_e0);
  FUN_100065194(&local_e0);
  return;
}

