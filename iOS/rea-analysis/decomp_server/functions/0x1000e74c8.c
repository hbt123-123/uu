// rea decompile_all
// name: FUN_1000e74c8
// address: 0x1000e74c8
// body: available
// range: 0x1000e74c8-0x1000e78bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000e7610) */
/* WARNING: Removing unreachable block (ram,0x0001000e7788) */
/* WARNING: Removing unreachable block (ram,0x0001000e7670) */

void FUN_1000e74c8(long *param_1,ulong param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  long local_b0;
  
  local_b0 = CONCAT44(local_b0._4_4_,param_4);
  puVar4 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_c0 + -extraout_x8;
  lVar5 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  dVar15 = 9.88131291682493e-324;
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_100995368;
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
  puVar6 = puVar4;
  FUN_100128084(puVar4);
  _swift_setDeallocating(puVar4);
  uVar7 = 0;
  FUN_10000603c(0);
  _swift_arrayDestroy(puVar4 + 0x20,2,uVar7);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar13,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  uVar10 = param_2;
  FUN_1000d7168();
  local_b8 = uVar10;
  local_b0 = param_3;
  __s10Foundation17URLResourceValuesV8fileSizeSiSgvg();
  lVar1 = 0;
  if ((uVar10 & 1) == 0) {
    lVar1 = param_3;
  }
  if (lVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e78b4);
    (*pcVar3)();
  }
  __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(puVar12);
  lVar8 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar8 + -8);
  puVar9 = puVar12;
  (**(code **)(lVar14 + 0x30))(puVar12,1,lVar8);
  if ((int)puVar9 == 1) {
    (**(code **)(lVar11 + 8))(lVar13,lVar5);
    FUN_100040bb4(puVar12,&DAT_100a76718,&DAT_10080ccc0);
    dVar15 = 0.0;
  }
  else {
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar11 + 8))(lVar13,lVar5);
    (**(code **)(lVar14 + 8))(puVar12,lVar8);
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e78c0);
      (*pcVar3)();
    }
    if (dVar15 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e78b8);
      (*pcVar3)();
    }
    if (1.8446744073709552e+19 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000e78bc);
      (*pcVar3)();
    }
  }
  lVar5 = 0;
  FUN_1000e984c();
  iVar2 = *(int *)(lVar5 + 0x1c);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))((long)param_1 + (long)iVar2,param_2,lVar5);
  *param_1 = local_b0;
  param_1[1] = local_b8;
  param_1[2] = lVar1;
  param_1[3] = (long)dVar15;
  puVar4 = &DAT_100a77e78;
  FUN_100004bb4(&DAT_100a77e78,&DAT_10080cca8);
  _swift_storeEnumTagMultiPayload(param_1,puVar4,0);
  return;
}

