// rea decompile_all
// name: FUN_10065d818
// address: 0x10065d818
// body: available
// range: 0x10065d818-0x10065dc8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10065d818(undefined8 param_1,byte *param_2,byte *param_3,long param_4,uint param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  long local_d0;
  uint local_c8;
  uint local_c4;
  long local_c0;
  uint local_b4;
  long local_b0;
  long local_a8;
  uint local_9c;
  byte *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  char local_6b;
  char local_6a;
  char local_69;
  long local_68;
  
  lVar3 = 0;
  local_9c = param_5;
  local_98 = param_2;
  local_90 = param_1;
  _swift_getTupleTypeMetadata2(0,param_6,PTR___sSbN_1009958c8,0,0);
  lVar3 = (long)&local_d0 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_7 + 8);
  uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10);
  lVar4 = 0;
  local_a8 = lVar3;
  local_88 = param_7;
  _swift_getAssociatedTypeWitness
            (0,uVar13,param_6,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar3 = lVar3 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_6 + -8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = lVar3 - uVar8;
  local_80 = local_b0 - uVar8;
  lVar16 = local_80 - uVar8;
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010065dc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar11 + 0x38))(local_90,1,1,param_6);
    return;
  }
  iVar9 = (int)param_4;
  local_c4 = iVar9 + 0x37;
  local_c8 = iVar9 + 0x57;
  if (param_4 < 0xb) {
    local_c8 = 0x61;
    local_c4 = 0x41;
  }
  local_b4 = 0x3a;
  if (param_4 < 0xb) {
    local_b4 = iVar9 + 0x30;
  }
  lVar5 = lVar4;
  local_68 = param_4;
  FUN_10064af28();
  local_78 = lVar16 - uVar8;
  __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
            (lVar16 - uVar8,&local_68,PTR___sSiN_100995968,lVar5,param_6,lVar10);
  uVar6 = uVar13;
  _swift_getAssociatedConformanceWitness
            (uVar13,param_6,lVar4,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar3,&DAT_10084d4f0,0x100,lVar4,uVar6);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(lVar16,lVar3,param_6,uVar13);
  pbVar12 = local_98;
  if (local_98 == (byte *)0x0) {
    pcVar14 = *(code **)(lVar11 + 8);
  }
  else {
    do {
      local_c0 = lVar11;
      local_d0 = lVar10;
      lVar4 = local_88;
      lVar10 = local_c0;
      lVar11 = local_d0;
      puVar2 = PTR___ss5UInt8VN_100995d40;
      bVar1 = *pbVar12;
      if ((bVar1 < 0x30) || ((local_b4 & 0xff) <= (uint)bVar1)) {
        uVar7 = (uint)bVar1;
        if ((0x40 < bVar1) && (uVar7 < (local_c4 & 0xff))) {
          local_6a = bVar1 - 0x37;
          local_98 = param_3;
          FUN_100630c78();
          lVar5 = -0x5a;
LAB_10065daa8:
          __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                    (local_80,&stack0xfffffffffffffff0 + lVar5,puVar2,lVar3,param_6,lVar11);
          goto LAB_10065dac0;
        }
        if ((0x60 < uVar7) && (uVar7 < (local_c8 & 0xff))) {
          local_69 = bVar1 + 0xa9;
          local_98 = param_3;
          FUN_100630c78();
          lVar5 = -0x59;
          goto LAB_10065daa8;
        }
        pcVar14 = *(code **)(local_c0 + 8);
        (*pcVar14)(lVar16,param_6);
        (*pcVar14)(local_78,param_6);
        pcVar14 = *(code **)(lVar10 + 0x38);
LAB_10065dc24:
        uVar6 = 1;
        uVar13 = local_90;
        goto LAB_10065dc2c;
      }
      local_98 = param_3;
      local_6b = bVar1 - 0x30;
      FUN_100630c78();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj(local_80,&local_6b,puVar2,lVar3,param_6,lVar11);
      lVar4 = local_88;
LAB_10065dac0:
      lVar3 = local_b0;
      lVar5 = local_b0;
      __ss17FixedWidthIntegerP27multipliedReportingOverflow2byx12partialValue_Sb8overflowtx_tFTj
                (local_b0,local_78,param_6,lVar4);
      pcVar14 = *(code **)(lVar10 + 8);
      (*pcVar14)(lVar16,param_6);
      pcVar15 = *(code **)(lVar10 + 0x20);
      (*pcVar15)(lVar16,lVar3,param_6);
      lVar3 = local_80;
      lVar11 = local_a8;
      if ((local_9c & 1) == 0) {
        lVar10 = local_a8;
        __ss17FixedWidthIntegerP23addingReportingOverflowyx12partialValue_Sb8overflowtxFTj
                  (local_a8,local_80,param_6,lVar4);
        uVar7 = (uint)lVar10;
      }
      else {
        lVar10 = local_a8;
        __ss17FixedWidthIntegerP28subtractingReportingOverflowyx12partialValue_Sb8overflowtxFTj
                  (local_a8,local_80,param_6,lVar4);
        uVar7 = (uint)lVar10;
      }
      (*pcVar14)(lVar3,param_6);
      (*pcVar14)(lVar16,param_6);
      lVar3 = lVar16;
      (*pcVar15)(lVar16,lVar11,param_6);
      if ((((uint)lVar5 | uVar7) & 1) != 0) {
        (*pcVar14)(lVar16,param_6);
        (*pcVar14)(local_78,param_6);
        pcVar14 = *(code **)(local_c0 + 0x38);
        goto LAB_10065dc24;
      }
      param_3 = local_98 + -1;
      lVar11 = local_c0;
      pbVar12 = pbVar12 + 1;
      lVar10 = local_d0;
    } while (param_3 != (byte *)0x0);
  }
  (*pcVar14)(local_78,param_6);
  uVar13 = local_90;
  (**(code **)(lVar11 + 0x20))(local_90,lVar16,param_6);
  pcVar14 = *(code **)(lVar11 + 0x38);
  uVar6 = 0;
LAB_10065dc2c:
  (*pcVar14)(uVar13,uVar6,1,param_6);
  return;
}

