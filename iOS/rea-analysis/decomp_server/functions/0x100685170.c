// rea decompile_all
// name: FUN_100685170
// address: 0x100685170
// body: available
// range: 0x100685170-0x1006855eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100685248) */
/* WARNING: Removing unreachable block (ram,0x000100685408) */

void FUN_100685170(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *self;
  ID IVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  long unaff_x20;
  long lVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_260 [72];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  ID local_188 [3];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  char local_be;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  char local_7e;
  long local_78 [3];
  
  self = &_OBJC_CLASS___NSNull;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"init");
  uVar2 = 0;
  FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
  local_188[0] = IVar1;
  local_170 = uVar2;
  FUN_10003e8bc(local_188,auStack_1a8);
  puVar3 = &local_f0;
  _swift_dynamicCast(puVar3,auStack_1a8,PTR___sypN_100995e88 + 8,
                     PTR___s10Foundation4DataVN_1009961e8,0);
  uVar8 = uStack_e8;
  uVar2 = local_f0;
  if ((int)puVar3 == 0) {
    FUN_10003e8bc(local_188,&local_b0);
    FUN_10068e2dc(&local_130,&local_b0);
    FUN_10003f094(local_188);
    uStack_298 = uStack_128;
    local_2a0 = local_130;
    uStack_288 = uStack_110;
    local_290 = local_118;
    uVar2 = local_120;
    uVar8 = local_108;
    uVar6 = local_ff;
    uVar7 = local_100;
  }
  else {
    FUN_100008184(local_f0,uStack_e8);
    FUN_10068e3b8(&local_168,uVar2,uVar8,0);
    FUN_100006cdc(uVar2,uVar8);
    FUN_10003f094(local_188);
    FUN_100006cdc(uVar2,uVar8);
    uStack_288 = uStack_148;
    local_290 = local_150;
    uStack_298 = uStack_160;
    local_2a0 = local_168;
    uVar2 = local_158;
    uVar8 = local_140;
    uVar6 = local_137;
    uVar7 = local_138;
  }
  FUN_10003f094(auStack_1a8);
  if (*(char *)(unaff_x20 + 0x31) == '\x04') {
    lVar5 = *(long *)(unaff_x20 + 8);
    if (*(long *)(lVar5 + 0x10) != 0) {
      local_78[0] = lVar5;
      _swift_bridgeObjectRetain(lVar5);
      FUN_1001a2c70(param_2);
      if ((param_3 & 1) != 0) {
        FUN_10003e8bc(*(long *)(lVar5 + 0x38) + param_2 * 0x20,&local_b0);
        FUN_100040bb4(local_78,&DAT_100ab9ea0,&DAT_10084d528);
        FUN_10007f3d4(&local_b0,auStack_1c8);
        FUN_10003e8bc(auStack_1c8,auStack_1e8);
        FUN_10003e8bc(auStack_1e8,auStack_208);
        puVar3 = &local_218;
        _swift_dynamicCast(puVar3,auStack_208,PTR___sypN_100995e88 + 8,
                           PTR___s10Foundation4DataVN_1009961e8,0);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_10003e8bc(auStack_1e8,local_260);
          FUN_10068e2dc(&local_b0,local_260);
          FUN_10003f094(auStack_1e8);
          FUN_10003f094(auStack_1c8);
          uStack_e8 = uStack_298;
          local_f0 = local_2a0;
          uStack_d0 = uStack_288;
          local_d8 = local_290;
          FUN_10068e548(&local_f0);
          uStack_288 = uStack_90;
          local_290 = local_98;
          uVar2 = local_a0;
          uVar8 = local_88;
          local_2a0 = local_b0;
          uStack_298 = uStack_a8;
          uVar6 = local_7f;
          uVar7 = local_80;
          cVar4 = local_7e;
        }
        else {
          FUN_100008184(local_218,uStack_210);
          FUN_10068e3b8(&local_f0,local_218,uStack_210,0);
          FUN_100006cdc(local_218,uStack_210);
          FUN_100006cdc(local_218,uStack_210);
          FUN_10003f094(auStack_1e8);
          FUN_10003f094(auStack_1c8);
          uStack_a8 = uStack_298;
          local_b0 = local_2a0;
          uStack_90 = uStack_288;
          local_98 = local_290;
          FUN_10068e548(&local_b0);
          uStack_288 = uStack_d0;
          local_290 = local_d8;
          uVar2 = local_e0;
          uVar8 = local_c8;
          local_2a0 = local_f0;
          uStack_298 = uStack_e8;
          uVar6 = local_bf;
          uVar7 = local_c0;
          cVar4 = local_be;
        }
        FUN_10003f094(auStack_208);
        goto LAB_10068553c;
      }
      FUN_100040bb4(local_78,&DAT_100ab9ea0,&DAT_10084d528);
    }
    cVar4 = '\x04';
  }
  else {
    cVar4 = '\x03';
    if (*(char *)(unaff_x20 + 0x32) != '\x06') {
      cVar4 = *(char *)(unaff_x20 + 0x32);
    }
  }
LAB_10068553c:
  param_1[1] = uStack_298;
  *param_1 = local_2a0;
  param_1[2] = uVar2;
  param_1[4] = uStack_288;
  param_1[3] = local_290;
  param_1[5] = uVar8;
  *(undefined1 *)(param_1 + 6) = uVar7;
  *(undefined1 *)((long)param_1 + 0x31) = uVar6;
  *(char *)((long)param_1 + 0x32) = cVar4;
  return;
}

