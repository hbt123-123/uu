// rea decompile_all
// name: FUN_1000786bc
// address: 0x1000786bc
// body: available
// range: 0x1000786bc-0x10007889b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000786bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_12f;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  byte local_5f;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar6 = &local_180;
  uVar8 = param_4;
  FUN_100093b84();
  lVar7 = param_2;
  local_58 = unaff_x20;
  local_50 = param_4;
  local_48 = uVar8;
  if (param_2 == 0) {
    if (DAT_1001039f0 != -1) {
      _swift_once(&DAT_1001039f0,FUN_1000b2d00);
    }
    lVar7 = DAT_100106f88;
    if (*(long *)(DAT_100106f88 + 0x10) == 0) {
      _swift_bridgeObjectRetain(DAT_100106f88);
    }
    else {
      FUN_10007aef0(DAT_100106f88,DAT_100106f88 + 0x20,1,*(long *)(DAT_100106f88 + 0x10) << 1 | 1);
    }
  }
  _swift_bridgeObjectRetain(param_2);
  FUN_10008fe44(&local_b8,lVar7);
  _swift_bridgeObjectRelease(lVar7);
  if ((local_5f & 1) == 0) {
    _swift_release(local_58);
    _swift_release(local_50);
    _swift_bridgeObjectRelease(local_48);
    FUN_10006c8f8(&local_b8,param_1);
  }
  else {
    uStack_f8 = uStack_90;
    local_100 = local_98;
    uStack_e8 = uStack_80;
    local_f0 = local_88;
    uStack_d8 = uStack_70;
    local_e0 = local_78;
    uStack_cf = uStack_67;
    uStack_d7 = uStack_6f;
    uStack_d0 = uStack_68;
    uStack_118 = uStack_b0;
    local_120 = local_b8;
    uStack_108 = uStack_a0;
    uStack_110 = local_a8;
    uStack_158 = uStack_90;
    local_160 = local_98;
    uStack_148 = uStack_80;
    uStack_150 = local_88;
    local_140 = local_78;
    uStack_12f = uStack_67;
    uStack_178 = uStack_b0;
    local_180 = local_b8;
    uStack_168 = uStack_a0;
    uStack_170 = local_a8;
    puVar5 = (undefined8 *)0xf;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
    if (((ulong)puVar5 & 1) != 0) {
      FUN_10007b098();
      _swift_willThrowTypedImpl(&local_180,&DAT_1000f9e40,puVar5);
      puVar5 = puVar6;
    }
    FUN_10007b098();
    _swift_allocError(&DAT_1000f9e40,puVar5,0,0);
    uVar2 = uStack_108;
    uVar1 = uStack_110;
    uVar8 = local_120;
    puVar5[1] = uStack_118;
    *puVar5 = uVar8;
    puVar5[3] = uVar2;
    puVar5[2] = uVar1;
    uVar4 = local_e0;
    uVar3 = uStack_e8;
    uVar2 = local_f0;
    uVar1 = uStack_f8;
    uVar8 = local_100;
    *(undefined8 *)((long)puVar5 + 0x51) = uStack_cf;
    *(ulong *)((long)puVar5 + 0x49) = CONCAT17(uStack_d0,uStack_d7);
    puVar5[7] = uVar3;
    puVar5[6] = uVar2;
    puVar5[9] = CONCAT71(uStack_d7,uStack_d8);
    puVar5[8] = uVar4;
    puVar5[5] = uVar1;
    puVar5[4] = uVar8;
    _swift_release(local_58);
    _swift_release(local_50);
    _swift_bridgeObjectRelease(local_48);
  }
  return;
}

