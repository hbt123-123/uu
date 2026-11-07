// rea decompile_all
// name: FUN_10065c6dc
// address: 0x10065c6dc
// body: available
// range: 0x10065c6dc-0x10065ca7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065c6dc(long *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  long local_68;
  
  local_78 = *(long *)(param_4 - 8);
  puVar5 = auStack_a0 + -(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(*(long *)(param_5 + 8) + 8);
  uVar2 = 0;
  local_90 = param_5;
  local_88 = param_3;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_4,PTR___sSlTL_1009959e8,PTR___s11SubSequenceSlTl_1009956d0);
  local_98 = *(long *)(uVar2 - 8);
  uVar6 = *(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar12 = puVar5 + -uVar6;
  lVar11 = (long)puVar12 - uVar6;
  __sSlsE5first7ElementQzSgvg(&local_70,param_4,uVar9);
  lVar4 = local_68;
  local_80 = param_2;
  uVar6 = uVar2;
  if (local_68 != 0) {
    if ((local_70 == 0x2d) && (local_68 == -0x1f00000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      uVar3 = local_70;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (local_70,local_68,0x2d,0xe100000000000000,0);
      _swift_bridgeObjectRelease(lVar4);
      if ((uVar3 & 1) == 0) goto LAB_10065c8ac;
    }
    (**(code **)(local_78 + 0x10))(puVar5,param_2,param_4);
    uVar8 = 1;
    __sSlsE9dropFirsty11SubSequenceQzSiF(lVar11,1,param_4,uVar9);
    lVar1 = local_98;
    (**(code **)(local_98 + 0x10))(puVar12,lVar11,uVar2);
    lVar4 = local_90;
    _swift_getAssociatedConformanceWitness
              (local_90,param_4,uVar2,PTR___sSyTL_100995a98,PTR___sSy11SubSequenceSl_SyTn_100995a88)
    ;
    lVar10 = local_88;
    FUN_10065bdc0();
    (**(code **)(lVar1 + 8))(lVar11,uVar2);
    goto joined_r0x00010065c9e8;
  }
LAB_10065c8ac:
  __sSlsE5first7ElementQzSgvg(&local_70,param_4,uVar9);
  if (local_68 == 0) {
LAB_10065c9ac:
    (**(code **)(local_78 + 0x10))(puVar5,param_2,param_4);
    lVar10 = local_88;
    uVar6 = param_4;
    lVar4 = local_90;
    FUN_10065bdc0();
  }
  else {
    if ((local_70 == 0x2b) && (local_68 == -0x1f00000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      uVar3 = local_70;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (local_70,local_68,0x2b,0xe100000000000000,0);
      _swift_bridgeObjectRelease(local_68);
      if ((uVar3 & 1) == 0) goto LAB_10065c9ac;
    }
    (**(code **)(local_78 + 0x10))(puVar5,param_2,param_4);
    __sSlsE9dropFirsty11SubSequenceQzSiF(lVar11,1,param_4,uVar9);
    lVar1 = local_98;
    (**(code **)(local_98 + 0x10))(puVar12,lVar11,uVar2);
    lVar4 = local_90;
    _swift_getAssociatedConformanceWitness
              (local_90,param_4,uVar2,PTR___sSyTL_100995a98,PTR___sSy11SubSequenceSl_SyTn_100995a88)
    ;
    lVar10 = local_88;
    FUN_10065bdc0();
    (**(code **)(lVar1 + 8))(lVar11,uVar2);
    puVar5 = puVar12;
  }
  uVar8 = 0;
  puVar12 = puVar5;
joined_r0x00010065c9e8:
  if (lVar4 == 0) {
    (**(code **)(local_78 + 8))(local_80,param_4);
    puVar12 = (undefined1 *)0x0;
    lVar10 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    if ((uVar6 & 0xff) == 0) {
      (**(code **)(local_78 + 8))(local_80,param_4);
      uVar7 = 0;
      if (lVar10 != 0) {
        uVar7 = uVar8;
      }
      if (puVar12 != (undefined1 *)0x0) {
        uVar7 = uVar8;
      }
    }
    else if (((uint)uVar6 & 0xff) == 1) {
      (**(code **)(local_78 + 8))(local_80,param_4);
      uVar7 = uVar8;
    }
    else {
      lVar11 = *(long *)(lVar4 + 0x10);
      (**(code **)(local_78 + 8))(local_80,param_4);
      uVar7 = 0;
      if (lVar11 != 0) {
        uVar7 = uVar8;
      }
    }
    uVar6 = uVar6 & 0xff;
  }
  *param_1 = (long)puVar12;
  param_1[1] = lVar10;
  param_1[2] = uVar6;
  param_1[3] = lVar4;
  *(undefined1 *)(param_1 + 4) = uVar7;
  return;
}

