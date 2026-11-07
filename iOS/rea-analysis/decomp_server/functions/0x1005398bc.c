// rea decompile_all
// name: FUN_1005398bc
// address: 0x1005398bc
// body: available
// range: 0x1005398bc-0x100539e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100539d44) */

void FUN_1005398bc(undefined8 param_1,code *param_2,uint param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  code *local_188;
  ulong local_168;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_11c;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_cc;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7c;
  
  lVar9 = *(long *)(param_4 + -8);
  lVar15 = (long)&local_1c0 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_1b0 = param_1;
  local_1a8 = param_6;
  local_1a0 = param_9;
  local_188 = param_2;
  __sSqMa(0,param_4);
  lVar16 = lVar15 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_190 = *(long *)(param_5 + -8);
  lVar11 = lVar16 - (*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = *(undefined8 *)(param_8 + 8);
  lVar2 = 0;
  local_198 = param_5;
  _swift_getAssociatedTypeWitness
            (0,uVar14,param_5,PTR___sSTTL_100995860,PTR___s8IteratorSTTl_100995710);
  lVar12 = *(long *)(lVar2 + -8);
  lVar13 = lVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100532378(&local_c0,param_4,param_7,param_3 & 0x1010101);
  if (unaff_x21 == 0) {
    local_e0 = uStack_90;
    uStack_cc = uStack_7c;
    uStack_f8 = uStack_a8;
    local_100 = uStack_b0;
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uVar3 = local_c0;
    local_1c0 = param_7;
    local_1b8 = lVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = local_c0;
    if ((uVar3 & 1) == 0) {
      uVar8 = 0;
      FUN_100506f84(0,*(long *)(local_c0 + 0x10) + 1,1,local_c0);
    }
    lVar12 = local_198;
    uVar3 = *(ulong *)(uVar8 + 0x10);
    uVar7 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar3) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_100506f84(uVar7,uVar3 + 1,1,uVar8);
    }
    *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
    *(undefined1 *)(uVar7 + uVar3 + 0x20) = 0x5b;
    uStack_108 = CONCAT62(uStack_108._2_6_,0x100);
    local_110 = uVar7;
    (**(code **)(local_190 + 0x10))(lVar11,local_188,lVar12);
    __sST12makeIterator0B0QzyFTj(lVar13,lVar12,uVar14);
    _swift_getAssociatedConformanceWitness
              (uVar14,lVar12,lVar2,PTR___sSTTL_100995860,PTR___sST8IteratorST_StTn_100995858);
    __sSt4next7ElementQzSgyFTj(lVar16,lVar2);
    pcVar10 = *(code **)(lVar9 + 0x30);
    lVar12 = lVar16;
    (*pcVar10)(lVar16,1,param_4);
    lVar11 = local_1c0;
    if ((int)lVar12 != 1) {
      local_188 = *(code **)(lVar9 + 0x20);
      do {
        (*local_188)(lVar15,lVar16,param_4);
        FUN_100532248(lVar15,&local_110,param_4,lVar11);
        (**(code **)(lVar11 + 0x48))(&local_110,&DAT_1009d06b8,&PTR_PTR_1009d06d8,param_4,lVar11);
        uVar3 = local_110;
        uVar8 = local_110;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = uVar3;
        if ((uVar8 & 1) == 0) {
          uVar6 = 0;
          FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
        }
        uVar3 = *(ulong *)(uVar6 + 0x10);
        uVar7 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_100506f84(uVar7,uVar3 + 1,1,uVar6);
        }
        *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
        *(undefined1 *)(uVar7 + uVar3 + 0x20) = 0x7d;
        (**(code **)(lVar9 + 8))(lVar15,param_4);
        uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
        local_110 = uVar7;
        __sSt4next7ElementQzSgyFTj(lVar16,lVar2,uVar14);
        lVar12 = lVar16;
        (*pcVar10)(lVar16,1,param_4);
      } while ((int)lVar12 != 1);
    }
    (**(code **)(local_1b8 + 8))(lVar13,lVar2);
    uVar3 = *(ulong *)(uVar7 + 0x10);
    local_168 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar3) {
      local_168 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_100506f84(local_168,uVar3 + 1,1,uVar7);
    }
    lVar2 = local_1a0;
    uVar1 = local_1a8;
    uVar14 = local_1b0;
    *(ulong *)(local_168 + 0x10) = uVar3 + 1;
    *(undefined1 *)(local_168 + uVar3 + 0x20) = 0x5d;
    uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
    pcVar10 = *(code **)(local_1a0 + 0x10);
    local_110 = local_168;
    _swift_bridgeObjectRetain(local_168);
    puVar4 = &DAT_100aaa108;
    FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
    puVar5 = puVar4;
    FUN_100539610();
    (*pcVar10)(uVar14,&local_168,puVar4,puVar5,uVar1,lVar2);
    uStack_11c = uStack_cc;
    uStack_148 = uStack_f8;
    local_150 = local_100;
    uStack_158 = uStack_108;
    local_160 = local_110;
    local_140 = local_f0;
    uStack_138 = uStack_e8;
    local_130 = local_e0;
    FUN_1004f9adc(&local_160);
  }
  return;
}

