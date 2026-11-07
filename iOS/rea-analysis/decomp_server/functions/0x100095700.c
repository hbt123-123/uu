// rea decompile_all
// name: FUN_100095700
// address: 0x100095700
// body: available
// range: 0x100095700-0x100095ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100095878) */

void FUN_100095700(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_a0 [64];
  
  puVar1 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_a0 + -extraout_x8;
  puVar1 = &DAT_100a76710;
  FUN_100004bb4(&DAT_100a76710,&DAT_10080b210);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = lVar10 - extraout_x12_00;
  puVar1 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)PTR__NSURLCreationDateKey_100995360;
  puVar2 = puVar1;
  FUN_100128084(puVar1);
  _swift_setDeallocating(puVar1);
  uVar3 = 0;
  FUN_10000603c(0);
  _swift_arrayDestroy(puVar1 + 0x20,2,uVar3);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar9,puVar2);
  _swift_bridgeObjectRelease(puVar2);
  lVar4 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar11 = *(long *)(lVar4 + -8);
  (**(code **)(lVar11 + 0x38))(lVar9,0,1,lVar4);
  FUN_10007f314(lVar9,lVar10,&DAT_100a76710,&DAT_10080b210);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar5 = lVar10;
  (*pcVar12)(lVar10,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a76710,&DAT_10080b210);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(puVar7,1,1,lVar5);
  }
  else {
    __s10Foundation17URLResourceValuesV23contentModificationDateAA0F0VSgvg(puVar7);
    (**(code **)(lVar11 + 8))(lVar10,lVar4);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    lVar10 = *(long *)(lVar5 + -8);
    puVar6 = puVar7;
    (**(code **)(lVar10 + 0x30))(puVar7,1,lVar5);
    if ((int)puVar6 != 1) {
      FUN_100040bb4(lVar9,&DAT_100a76710,&DAT_10080b210);
      (**(code **)(lVar10 + 0x20))(param_1,puVar7,lVar5);
      (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar5);
      return;
    }
  }
  FUN_10007f314(lVar9,lVar8,&DAT_100a76710,&DAT_10080b210);
  lVar5 = lVar8;
  (*pcVar12)(lVar8,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_100040bb4(lVar9,&DAT_100a76710,&DAT_10080b210);
    FUN_100040bb4(lVar8,&DAT_100a76710,&DAT_10080b210);
    lVar5 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,1,1,lVar5);
  }
  else {
    __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(param_1);
    FUN_100040bb4(lVar9,&DAT_100a76710,&DAT_10080b210);
    (**(code **)(lVar11 + 8))(lVar8,lVar4);
  }
  lVar5 = 0;
  __s10Foundation4DateVMa();
  puVar6 = puVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar7,1,lVar5);
  if ((int)puVar6 != 1) {
    FUN_100040bb4(puVar7,&DAT_100a76718,&DAT_10080ccc0);
  }
  return;
}

