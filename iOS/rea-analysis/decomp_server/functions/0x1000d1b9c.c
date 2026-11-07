// rea decompile_all
// name: FUN_1000d1b9c
// address: 0x1000d1b9c
// body: available
// range: 0x1000d1b9c-0x1000d2143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d1d74) */
/* WARNING: Removing unreachable block (ram,0x0001000d1ee4) */

long FUN_1000d1b9c(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  double dVar15;
  long local_130;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_114;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  
  lVar4 = 0;
  __s10Foundation17URLResourceValuesVMa();
  local_f8 = *(long *)(lVar4 + -8);
  lStack_f0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  lVar11 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1000d4610();
  local_100 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar14 = (undefined1 *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = (long)puVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar10 - extraout_x12;
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar4 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar5 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  dVar15 = 4.94065645841247e-324;
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
  puVar7 = puVar5;
  FUN_100128084();
  _swift_setDeallocating(puVar5);
  pcVar3 = FUN_10000603c;
  FUN_1000d27dc(puVar5 + 0x20);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar11,puVar7);
  local_130 = lVar4 - extraout_x12_00;
  _swift_bridgeObjectRelease();
  __s10Foundation17URLResourceValuesV11isDirectorySbSgvg();
  local_114 = SUB84(puVar7,0);
  __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
  lVar4 = local_100;
  local_124 = SUB84(pcVar3,0);
  iVar1 = *(int *)(local_100 + 0x18);
  local_120 = puVar7;
  __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(puVar14 + iVar1);
  __s10Foundation17URLResourceValuesV10volumeNameSSSgvg();
  puVar5 = puVar7;
  local_110 = lVar13;
  __s10Foundation17URLResourceValuesV16volumeIsReadOnlySbSgvg();
  (**(code **)(local_f8 + 8))(lVar11,lStack_f0);
  *puVar14 = (char)local_114;
  *(undefined **)(puVar14 + 8) = local_120;
  puVar14[0x10] = (byte)local_124 & 1;
  iVar2 = *(int *)(lVar4 + 0x1c);
  *(undefined **)(puVar14 + iVar2) = puVar7;
  *(code **)((long)(puVar14 + iVar2) + 8) = pcVar3;
  lVar11 = local_110;
  puVar14[*(int *)(lVar4 + 0x20)] = (char)puVar5;
  FUN_10007f314(puVar14 + iVar1,lVar12,&DAT_100a76718,&DAT_10080ccc0);
  FUN_1000d27dc(puVar14,FUN_1000d4610);
  lVar13 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,lVar6);
  lVar4 = local_130;
  if ((int)lVar13 != 1) {
    (**(code **)(lVar11 + 0x20))(local_130,lVar12,lVar6);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar11 + 8))(lVar4,lVar6);
    if (dVar15 <= 0.0) {
      dVar15 = 0.0;
    }
    else if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d2134);
      (*pcVar3)();
    }
    if (dVar15 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d2138);
      (*pcVar3)();
    }
    if (1.8446744073709552e+19 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d201c);
      (*pcVar3)();
    }
    goto LAB_1000d2108;
  }
  FUN_100040bb4(lVar12,&DAT_100a76718,&DAT_10080ccc0);
  uVar8 = *(ulong *)(unaff_x20 + 0x28);
  lVar4 = unaff_x20 + 0x10;
  FUN_10003f030();
  __s10Foundation3URLV4pathSSvg();
  uVar9 = uVar8;
  FUN_1000d3d58();
  _swift_bridgeObjectRelease(uVar8);
  if (lVar4 == 0) {
    uStack_c8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x10) == 0) {
LAB_1000d2024:
      dVar15 = 0.0;
      uStack_c8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      lVar13 = *(long *)PTR__NSFileModificationDate_1009952b8;
      _swift_bridgeObjectRetain(lVar4);
      thunk_FUN_1001a2e90(lVar13);
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar4);
        goto LAB_1000d2024;
      }
      FUN_10003e8bc(*(long *)(lVar4 + 0x38) + lVar13 * 0x20,&local_d0);
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_bridgeObjectRelease(lVar4);
    if (local_b8 != 0) {
      lVar4 = lVar10;
      _swift_dynamicCast(lVar10,&local_d0,PTR___sypN_100995e88 + 8,lVar6,6);
      (**(code **)(lVar11 + 0x38))(lVar10,(uint)lVar4 ^ 1,1,lVar6);
      lVar13 = lVar10;
      (**(code **)(lVar11 + 0x30))(lVar10,1,lVar6);
      lVar4 = local_108;
      if ((int)lVar13 != 1) {
        (**(code **)(lVar11 + 0x20))(local_108,lVar10,lVar6);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (**(code **)(lVar11 + 8))(lVar4,lVar6);
        if (dVar15 <= 0.0) {
          dVar15 = 0.0;
        }
        else if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d213c);
          (*pcVar3)();
        }
        if (dVar15 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d2140);
          (*pcVar3)();
        }
        if (1.8446744073709552e+19 <= dVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000d2144);
          (*pcVar3)();
        }
LAB_1000d2108:
        return (long)dVar15;
      }
      goto LAB_1000d1f2c;
    }
  }
  FUN_100040bb4(&local_d0,&DAT_100a766e0,&DAT_10080bdb0);
  (**(code **)(lVar11 + 0x38))(lVar10,1,1,lVar6);
LAB_1000d1f2c:
  FUN_100040bb4(lVar10,&DAT_100a76718,&DAT_10080ccc0);
  return 0;
}

